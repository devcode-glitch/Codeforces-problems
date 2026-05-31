#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    int len;
    cin>>len>>s;
    if(len!=5){
        cout<<"NO"<<endl;
        return;
    }
    else{
        int count[256]={0};
        for(int i=0;i<len;i++){
            count[s[i]]++;
        }
        if(count['T']==1 && (count['i']==1) && (count['m']==1) && (count['u']==1) && (count['r']==1)){
            cout<<"YES
";
        }
        else{
            cout<<"NO
";
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
}