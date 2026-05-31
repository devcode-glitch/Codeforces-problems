#include<bits/stdc++.h>
#define endl '
'
using namespace std;
using ll = long long;
 /* PROBLEM IS SIMPLE, JUST OBSERVE CAREFULLY
    YOU CAN DO THIS MATE!, THINK LIKE A PROBLEM SOLVER*/
void solve(){
  string s;
  cin>>s;
  if(s == "YY"){
    cout<<"NO"<<endl;
  }
  else if(s == "NN"){
    cout<<"YES"<<endl;
  }
  else if(s == "NY" || s == "YN")
  cout<<"YES"<<endl;
  else{
    int len = s.length();
    for(int i = 0;2*i<=len;i++){
        for(int j = 1;j<s.length();j++){
            if((s[j-1]=='Y' && s[j]=='N') || (s[j]=='Y' && s[j-1]=='N')){
                s.erase(j-1,2);
                s.insert(j-1,"Y");
            }
            else if(s[j-1]=='N' && s[j]=='N'){
                s.erase(j-1,2);
                s.insert(j-1,"N");
            }
        }
    }
    if(s.length() == 1){
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
  }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    int t = 1;
    cin>>t;
    while(t--){
       solve();
    }
}  