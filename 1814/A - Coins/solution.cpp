#include<stdio.h>
int main(){
    int tt;
    scanf("%d",&tt);
    while(tt--){
        long long n,k;
        scanf("%lld %lld",&n,&k);
        printf((n%2 == 0)||((n-k)%2==0)? "YES
":"NO
");
    }
}