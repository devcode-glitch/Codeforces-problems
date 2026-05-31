#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n,k,p,m;
    cin>>n>>k>>p>>m;
    vector<int> arr(n+1);
    for(int i = 1;i<=n;i++){
        cin>>arr[i];
    }
    int first=0;
    if(p>k){
        int sum = 0;
        multiset<int> s1;
        for(int i = 1;i<=k;i++){
            s1.insert(arr[i]);
        }
        for(int i = k+1;i<=p-1;i++){
            sum+=*s1.begin();
            s1.erase(s1.begin());
            s1.insert(arr[i]);
        }
        first = sum + *s1.begin() + arr[p];
    }
    else{
        first = arr[p];
    }
    if(first>m){
        cout<<0<<"
";
        return;
    }
    //now to calculate for n-k elements, the elements that went into the back, before the pth element was moved;
    vector<int> _n_to_k;
    for(int i=1;i<=n;i++){
        if(i!=p){
            _n_to_k.push_back(arr[i]);
        }
    }
    sort(_n_to_k.begin(),_n_to_k.end());
    int rest = 0;
    for(int i = 0;i<n-k;i++){
        rest+=_n_to_k[i];
    }
    rest+=arr[p];
    cout<<(m-first)/rest + 1;
    cout<<"
";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    int t;cin>>t;
    while(t--){
       solve();
    }
}  