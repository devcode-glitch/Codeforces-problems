#include<bits/stdc++.h>
using namespace std;
#define EVERYTHING_IS_AN_ALGORITHM ios::sync_with_stdio(false),cin.tie(nullptr);
int main(){
    EVERYTHING_IS_AN_ALGORITHM
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;++i) cin>>a[i];
        sort(a.rbegin(),a.rend());
        for(auto itr : a) cout<<itr<<" ";
        cout<<"
";
    }
}