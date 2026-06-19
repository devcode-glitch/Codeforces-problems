#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int zeroes = 0,ones = 0;
  for(int i=0;i+1<s.length();i++){
     if(s[i] == '0'){
       while(i<s.length() && s[i] == '0'){
         ++zeroes;
         ++i;
       }
       --i;
       if(zeroes >= 7){
        cout<<"YES
";
        return 0;
       }
       else zeroes = 0;
     }
  else{
     while(i<s.length() && s[i] == '1'){
         ++ones;
         ++i;
       }
       --i;
       if(ones >= 7){
        cout<<"YES
";
        return 0;
       }
       else ones = 0;
     }
  }
  cout<<"NO
";
}