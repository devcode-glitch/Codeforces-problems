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
    int ct = 0;
    cin>>n;
    vector<int> arr(n);
    for(int i =0;i<n;i++) cin>>arr[i];
    sort(arr.rbegin(),arr.rend());
    bool found = true;
    for(int i = 0;i+2<n;i++){
        i64 x = arr[i];
        i64 y = arr[i+1];
        if(x%y == arr[i+2]){continue;}
        else{found = false;cout<<-1<<endl;break;}   
    }   
    if(found) cout<<arr[0]<<" "<<arr[1]<<endl;
}
}