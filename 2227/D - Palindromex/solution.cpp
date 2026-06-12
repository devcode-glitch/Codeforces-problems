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
pair<int,int> get(int left,int right,int n,vector<int> &v){
    //now we extend on both the sides to check for a palindrome
    while(left>=0 && right<2*n){
        if(v[left] == v[right]){
            ++right;
            --left;
        }
        else break;
    }
    return {left + 1,right - 1};
}
int mex(int left,int right,vector<int> &v,int n){
    int ans = 0;
    vector<int> ct(n,0);
    for(int i=left;i<=right;i++) ++ct[v[i]];
    while(ans<n && ct[ans]) ++ans;
    return ans;
}
bool palindrome(int x,int y,vector<int> &v,int n){
    while(x<y){
        if(v[x] == v[y]){
            ++x;--y;
        }
        else return false;
    }
    return true;
}
int main(){
  fio();
  int t = 1;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> arr(2*n);
    int ans = 1;//since we can select atleast a 0, the answer is always >=1
    int idx1 = -1,idx2 = -1;
    for(int i=0;i<2*n;i++){cin>>arr[i]; if(arr[i] == 0) idx1 == -1? idx1 = i:idx2 = i; }
    //now search on both sides of the first index;
    pair<int,int> p = get(idx1-1,idx1+1,n,arr);
    ans = max(ans,mex(p.first,p.second,arr,n));
    p = get(idx2-1,idx2+1,n,arr);
    ans = max(ans,mex(p.first,p.second,arr,n));
    if(palindrome(idx1+1,idx2-1,arr,n)){
        pair<int,int> px = get(idx1-1,idx2+1,n,arr);
        ans = max(ans,mex(px.first,px.second,arr,n));
    }
    cout<<ans<<endl;
  }
  return 0;
}