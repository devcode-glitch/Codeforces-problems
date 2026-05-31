#include<iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
    int n,x,R0 = 0,R1 = -1e18;;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        R0 += a*(b-1);//represents the distance travelled by the frog
        R1 = max(R1,a*b-c);//repesents the actual progress the frog has made
    }
     x-=R0;
    if(x<=0){
        cout<<"0"<<endl;
    }
    else if(R1<=0){
        //meaning the number of rollbacks is negative or zero even for the maximum possible case , implying no change in the position of the frog
        cout<<"-1"<<endl;
    }
    else{
        int term = (x+R1-1)/R1;
        cout<<term<<endl;
    }
}
signed main()
{
    int t;
    cin>>t;
    while(t--){solve();}
}