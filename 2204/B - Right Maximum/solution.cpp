#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main ()
{
    int t;
    cin>>t;
    while(t--){
        int n,max_int =-1,count=0;
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x>=max_int){
                max_int = x;
                count++;
        }
    }
    cout<<count<<endl;
}
}