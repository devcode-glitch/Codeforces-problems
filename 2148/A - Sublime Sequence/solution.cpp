#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i =0;i<t;i++){
        int x,n;
        cin>>x>>n;
        int sum =0;
        for(int j =0;j<n;j++){
            sum+=x;
            x=x*(-1);
        }
        cout<<sum<<endl;
    }
    return 0;
}