#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int count = 0;
        int n;
        cin>>n;
        int arr[n];
        if(n==1){
            int x;
            cin>>x;
            cout<<n<<endl;
        }
        else{
            for(int j=0;j<n;j++){
                cin>>arr[j];
            }
            int max = -1;
            for(int j=0;j<n;j++){
                if(arr[j]>max){
                    max = arr[j];
                }
            }
            for(int j=0;j<n;j++){
                if(arr[j]==max){
                    count++;
                }
            }
            cout<<count<<endl;
        }
    }
}