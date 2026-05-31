#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool flag = true;
        int arr[n];
        if(n==1){
            int x;
            cin>>x;
            cout<<n<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
            for(int i=0;i<n-1;i++){
                if(arr[i]<arr[i+1]){
                    flag = true;
                    continue;
                }
                else if(arr[i]>arr[i+1]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                cout<<n<<endl;
            }
            else if(!flag){
                cout<<1<<endl;
            }        
        }
    }
}