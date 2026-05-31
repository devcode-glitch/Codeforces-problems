#include <bits/stdc++.h>
#define endl "
"
using namespace std;
using ll = long long;
void solve() {
    int n,zc=0,zi=0;
    cin>>n;
    vector<int> arr(n+1);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(arr[i] == 0) {++zc; zi = i;}
    }
    if(zc == 0){
        cout<<1<<endl;
        cout<<1<<" "<<n<<endl;
    }
    else if(zc == n){
        cout<<n-1<<endl;
        int start = n;
        while(start>3){
            cout<<start-1<<" "<<start<<endl;
            --start;
        }
        cout<<1<<" "<<2<<endl;
        cout<<1<<" "<<2<<endl;
        }
    else if(zc == 1){
        if(arr[1] == 0){
            cout<<2<<endl;
            cout<<zi<<" "<<zi+1<<endl;
            cout<<1<<" "<<n-1<<endl;
        }
        else if(arr[n] == 0){
            cout<<2<<endl;
            cout<<zi-1<<" "<<zi<<endl;
            cout<<1<<" "<<n-1<<endl;
        }
        else{
            cout<<2<<endl;
            cout<<zi-1<<" "<<zi<<endl;
            cout<<1<<" "<<n-1<<endl;
        }
    }
    else{
        if(arr[1]!=0){
            cout<<2<<endl;
            cout<<2<<" "<<n<<endl;
            cout<<1<<" "<<2<<endl;
        }
        else{
            if(arr[n]!=0){
                cout<<2<<endl;
                cout<<1<<" "<<n-1<<endl;
                cout<<1<<" "<<2<<endl;
            }
            else{
                cout<<3<<endl;
                cout<<1<<" "<<n/2<<endl;
                cout<<2<<" "<<(n-n/2)+1<<endl;
                cout<<1<<" "<<2<<endl;
            }
        }
    }     
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test = 1;
    cin>>test;
    while (test--){
        solve();
    }           
}