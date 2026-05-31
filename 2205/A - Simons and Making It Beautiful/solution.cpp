#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[505];
int n;
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(arr[i]==n){
            swap(arr[1],arr[i]);
        }
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"
";
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
}