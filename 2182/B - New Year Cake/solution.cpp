#include<iostream>
#include<bits/stdc++.h>
#define long long int
using namespace std;
int compute(int white,int dark){
    //start with large flavour for odd layers, white for odd;
    //small flavour for even layers, chocolate for even
    int count = 0,cake =1,layer=1;
    while(true){
        if(layer%2!=0){
            if(white>=cake){
                white-=cake;
                count++;
            }
            else{
                break;
            }
        }
        else{
            if(dark>=cake){
                dark-=cake;
                count++;
            }
            else{
                break;
            } 
        }
        cake*=2;
        layer++;
    }
    return count;
}
void solve(){
    int a,b;
    cin>>a>>b;
    if(a==1 && b==1){
        cout<<1<<endl;
        return;
    }
    else if((a==1 && b>=2)||(b==1 && a>=2)){
        cout<<2<<endl;
        return;
    }
    else{
        int layer_count_1 = compute(max({a,b}),min({a,b}));
        int layer_count_2 = compute(min({a,b}),max({a,b}));
        cout<<((layer_count_1>layer_count_2)? layer_count_1:layer_count_2);
    }
    cout<<endl;
 
}
signed main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}