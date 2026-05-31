#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,d;
        cin>>n>>m>>d;
        int s = (d/m )+1;
        int boxes = (n-1+s)/s;
        cout<<boxes<<endl;
    }
}