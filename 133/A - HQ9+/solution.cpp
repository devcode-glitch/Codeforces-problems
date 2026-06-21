#include<bits/stdc++.h>
using namespace std;
int main(){
 string s;
 cin>>s;
 bool flag = false;
 for(char c : s){
 if(flag) break;
 flag = (c == 'H' || c == 'Q' || c == '9');
 }
 flag? cout<<"YES
" : cout<<"NO
";
}