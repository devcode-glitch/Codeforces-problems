#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i =0;i<t;i++){
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        int ans = a[0];// distance from start to the first stop
        for(int y = 1;y<n;y++){
            ans = max(ans,a[y]-a[y-1]);
        }
        ans = max(ans, 2 * (x - a[n-1]));
        cout<<ans<<endl;
    }
}