#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;string s;
   cin>>n>>s;
   int A = 0,D = 0;
   for(char c :  s){
      A += c == 'A';
      D  += c == 'D';
   }
   if(A == D){
     cout<<"Friendship
";
   }
   else{
       cout<< (A > D? "Anton" : "Danik")<<"
"; 
   }
}