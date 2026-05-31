#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  while(n--){
    int x;
    int maxk = -1;
    cin>>x;
    for(int i=1;x>0;i++){
      if(i%3!=0 && i%10!=3){
        maxk = max(maxk,i);
        --x;
      }
    }
    cout<<maxk<<endl;
  }
}