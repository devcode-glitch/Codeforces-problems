#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "
"
#define yes cout<<"YES
"
#define no cout<<"NO
"
 
/*
GOLDEN RULES
PROBLEMS ARE SIMPLE
PROOFS ARE SIMPLE
IMPLEMENTATION IS SIMPLE
 
SIMPLIFY THE PROBLEM
DIVIDE INTO SMALL WHENEVER POSSIBLE
*/
 
/*
    First principles
    My string consists of only letters s and u
    A string is sus when 
           1) s occurs atleast 2 times
           2) the nearest occurence of s is equidistant from u 
      I am allowed to choose an index i and change that character to 's'
      I need to determine the min ops to make string s sus
      
 
      u u s u u u
      s u s u s s -> 3
 
      s u u u u u u
      s u s u s u s -> 3
    does making it alternating work ?
    a continuous block of s is not a problem ?
    but u is a problem 
 
    s s s u u u s s s 
    s s s s u u s s s
 
    u u s u u u
    s u s u s s
 
    u u u u u 
    s u s u s
 
    s u s u u s u u u s
    s u s u s s u s u s
 
    checking my idea
 
    u s u u u
    s s u s s
*/
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int u = 0 , S = 0;
    for(char c : s){
      u+=(c == 'u');
      S+=(c == 's');
    }
    if(S==s.length()){cout<<0<<endl;}
    else if (u == s.length()){
      cout<<s.length()/2 + 1<<endl;;
    }
    else{
      int ops = 0;
      int n = s.length();
      if(s[0] == 'u'){
        ++ops;
        s[0] = 's';
      }
      if(s[n-1] == 'u'){
        ++ops;
        s[n-1] = 's';
      }
      for(int i = 1;i<n-1;i++){
        if(s[i] == 'u'){\
          if(s[i-1] == 's' && s[i+1] == 's') continue;
          else if(s[i-1] == 's' && s[i+1] == 'u'){
            s[i+1] = 's';
            ++ops;
          }
          else if(s[i+1] == 's' && s[i-1] == 'u'){
            s[i-1] = 's';
            ++ops;
          }
        }
      }
      cout<<ops<<endl;
    }
  }
  return 0;
}