#include<bits/stdc++.h>
using namespace std;
#define fio() ios::sync_with_stdio(false);cin.tie(nullptr)
using i64 = long long;
#define endl "
"
#define yes cout<<"YES
"
#define no cout<<"NO
"
 
/*
GOLDEN RULES
PROBLEMS ARE SIMPLE
PROOFS ARE SIMPLE
IMPLEMENTATION IS SIMPLE
 
SIMPLIFY THE PROBLEM
DIVIDE INTO SMALL WHENEVER POSSIBLE
*/
 
/*
  Simple observations 
*/
int main(){
  fio();
  int t = 1;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    int checker = -1,type,ans = 0;
    for(int i=0;i<n;i++){
        if(s1[i] == s2[i]) checker = -1;
        else{
            ++ans;
            type = (s1[i] == 'R')? 0 : 1;
            if(checker == type){
                ans-=2;//we found an horizontal pair here, so vertical is not optimal to choose
                checker = -1;// since we found a pair , we reset the checker
            }
            else checker = type;
        }
    }
    cout<<ans<<endl;
  }
  return 0;
}