#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    int N = (n*n)+1;
    bool flag = true;
    map<int,int> map1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            map1[x]++;
        }
    }
    for(auto itr : map1){
        if(itr.second > n*n - n){
            flag = false;
            break;
        }
    }
    cout<<((flag == true)?"YES" : "NO")<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
}