#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++)
    cin>>arr[i];
 
    for(int i=0;i<n;i++){
        int lc =0 ,gc=0;
        for(int j=i+1;j<n;j++){
            lc+=arr[i]<arr[j];
            gc+=arr[i]>arr[j];
        }
        cout<<max(lc,gc)<<" ";
    }
    cout<<"
";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    int t = 1;
    cin>>t;
    while(t--){
       solve();
    }
}  