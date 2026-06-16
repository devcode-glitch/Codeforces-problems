#include<stdio.h>
using namespace std;
int main(){
   int n;
   scanf("%d",&n);
   if((3*n)&1){
      printf("%d
",0);
   }
   else{
     long long ans = 1;
     int step = n/2;
     ans = (ans<<step);
     printf("%lld
",ans);
   }
}