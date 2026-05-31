#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    bool flag = true;
    int per[n+1],arr[n+1],position[n+1];
    for(int i = 1;i<=n;i++){
        cin>>per[i];
        position[per[i]] = i;
    }
    for(int i = 1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i = 1;i<=n-1;i++){
        if(arr[i] != arr[i+1] && position[arr[i]]>position[arr[i+1]]){
            cout<<"No"<<endl;
            flag = false;
            return;
        }
    }
    if(flag)
    cout<<"Yes"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
}