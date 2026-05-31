#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n,m,l;
    cin>>n>>m>>l;
    vector<int> v1(n+1);
    for(int i=1;i<=n;i++){
        cin>>v1[i];
    }
    int segs = n+1;
    // the night is divided into n+1 segments
    multiset<int> set1;
    for(int i=0;i<min(m,n+1);i++){
        set1.insert(0);
    }
    for(int i=1;i<=n;i++){
        segs--;
        for(int j=v1[i-1];j<v1[i];j++){
            set1.insert(*set1.begin()+1);
            set1.erase(set1.begin());
        }
        set1.erase(--set1.end());
        if(set1.size()<min(m,segs)){
            set1.insert(0);
        }
    }
    int answer = (l + *--set1.end()) - v1[n];
    cout<<answer<<"
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