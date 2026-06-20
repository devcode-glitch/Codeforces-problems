#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int n = s.length();
  if(n == 5 && s!= "hello"){cout<<"NO
";return 0;}
  else if(n == 5 && s == "hello"){cout<<"YES
";return 0;}
  vector<char> check;
  int lc = 0;
  bool yes = false;
  for(int i=0;i<n;i++){
     char c = s[i];
     if(c!='h' && c!='e' && c!= 'l' && c!= 'o') continue;
     if(check.size() == 0 && c == 'h') check.push_back(c);
     else if(check.size()>0 && check.back() == 'h' && c == 'e') check.push_back(c);
     else if(check.size()>0 && (check.back() == 'e' || check.back() == 'l') && c == 'l' && lc<2) {++lc;check.push_back(c);}
     else if(check.size()>0 && check.back() == 'l' && c == 'o' && lc == 2) {check.push_back(c);yes = true;break;}
  }
  cout<<(yes? "YES
" : "NO
");
}