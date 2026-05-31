#include<iostream>
#include<bits/stdc++.h>
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        bool flag = false;
        while(n%2==0){
            n/=2;
        }
        cout<<((n>1)? "YES":"NO")<<endl;     
    }
}