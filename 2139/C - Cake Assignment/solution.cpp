#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        long long k, x;
        cin >> k >> x;
        
        long long target = (1LL << k);      // 2^k
        long long total = (1LL << (k+1));   // 2^(k+1)
        
        vector<int> ops;
        
        // Work backwards from x to 2^k
        while(x != target){
            if(x < target){
                // Got here via operation 1, inverse: double x
                ops.push_back(1);
                x *= 2;
            } else {
                // Got here via operation 2, inverse: x = 2x - total
                ops.push_back(2);
                x = 2 * x - total;
            }
        }
        
        // Reverse to get forward operations
        reverse(ops.begin(), ops.end());
        
        cout << ops.size() << "
";
        for(int op : ops){
            cout << op << " ";
        }
        cout << "
";
    }
    
    return 0;
}