#include<bits/stdc++.h>
using namespace std;
#define fio() ios::sync_with_stdio(false);cin.tie(nullptr)
using i64 = long long;
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
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
    vector<int> arr(n);
    for(int i =0;i<n;i++) cin>>arr[i];
    sort(rall(arr));
    bool found = true;
    for(int i = 0;i+2<n;i++){
        if(arr[i]%arr[i+1] == arr[i+2])continue;
        else{found = false;cout<<-1<<endl;break;}   
    }   
    if(found) cout<<arr[0]<<" "<<arr[1]<<endl;
}
}