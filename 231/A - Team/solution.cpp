#include<bits/stdc++.h>
int main(){
    int tt;
    std::cin>>tt;
    int c = 0;
    while(tt--){
        int oc = 0,zc=0;
        int x,y,z;
        std::cin>>x>>y>>z;
        oc+=(x==1);
        oc+=(y==1);
        oc+=(z==1);
        zc+=(x==0);
        zc+=(y==0);
        zc+=(z==0);
        c+=(oc>zc);
    }
    std::cout<<c<<"
";
}