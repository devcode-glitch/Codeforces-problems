#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "
"
void solve(){
   int n;string s;
   cin>>n>>s;
   int oc = 0,zc = 0;
   for(int i=0;i<n;i++){
    oc+=(s[i] == '1');
    zc+=(s[i] == '0');
   }
   //make ones . 1's as 0's flip them odd number of times
   //makes zeroes. 0's flip zeroes even number of times
   if(zc%2){
    cout<<zc<<endl;
    for(int i=0;i<n;i++){
        if(s[i] == '0'){
            cout<<i+1<<" ";
        }
    } 
    cout<<endl;
    }
    else if(oc%2 == 0){
        cout<<oc<<endl;
        if(oc!=0){
            for(int i=0;i<n;i++){
                if(s[i] == '1'){
                    cout<<i+1<<" ";
                }
            }
            cout<<endl;
        }
    }
    else
    cout<<-1<<endl;
    return;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
}