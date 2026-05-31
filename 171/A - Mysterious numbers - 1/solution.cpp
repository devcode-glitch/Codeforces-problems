#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int z = 0;
    while(y!=0){
        z*=10;
        z+=(y%10);
        y/=10;
    }
    cout<<z+x<<endl;
}