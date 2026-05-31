#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int h1,h2,k1,k2,q1,q2;
    cin>>h1>>h2>>k1>>k2>>q1>>q2;
    vector<pair<int,int>> king,q;
    
    king.push_back({k1-h1,k2-h2});
    king.push_back({k1-h1,k2+h2});
    king.push_back({k1+h1,k2-h2});
    king.push_back({k1+h1,k2+h2});
    king.push_back({k1-h2,k2-h1});
    king.push_back({k1+h2,k2-h1});
    king.push_back({k1-h2,k2+h1});
    king.push_back({k1+h2,k2+h1});
 
        
    q.push_back({q1-h1,q2-h2});
    q.push_back({q1-h1,q2+h2});
    q.push_back({q1+h1,q2-h2});
    q.push_back({q1+h1,q2+h2});
    q.push_back({q1-h2,q2-h1});
    q.push_back({q1-h2,q2+h1});
    q.push_back({q1+h2,q2-h1});
    q.push_back({q1+h2,q2+h1});
    set<pair<int,int>> paired;
    for(int i=0;i<8;i++){
        for(int j =0 ;j<8;j++){
            if(king[i]==q[j]){
                paired.insert(king[i]);
            }
        }
    }
    cout<<paired.size()<<"
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