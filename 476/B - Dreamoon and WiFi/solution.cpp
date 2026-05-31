#include<bits/stdc++.h>
using namespace std;
#define endl "
"
 
int factorial(int n){
    if(n == 0) return 1;
    return n * factorial(n-1);
}
 
void solve(){
    string s1, s2;
    cin >> s1 >> s2;
    
    int target = 0;
    for(char c : s1)
        target += (c == '+') ? 1 : -1;
    
    int fix = 0, n = 0;
    for(char c : s2){
        if(c == '?') ++n;
        else fix += (c == '+') ? 1 : -1;
    }
    
    int diff = target - fix;
    
    if((n + diff) % 2 != 0){ cout << fixed << setprecision(9) << 0.0 << endl; return; }
    
    int k = (n + diff) / 2;
    
    if(k < 0 || k > n){ cout << fixed << setprecision(9) << 0.0 << endl; return; }
    
    int combo = factorial(n) / (factorial(k) * factorial(n - k));
    double ans = (double)combo / pow(2, n);
    
    cout << fixed << setprecision(9) << ans << endl;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}