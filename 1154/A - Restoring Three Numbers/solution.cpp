#include<stdio.h>
void solve(){
    long long a,b,c,d,arr[4];
    for(int i=0;i<4;i++){
        scanf("%lld",&arr[i]);
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4-i-1;j++){
            if(arr[j]>arr[j+1]){
                long long temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("%lld %lld %lld",arr[3]-arr[0],arr[3]-arr[1],arr[3]-arr[2]);
    return;
}
int main(){
    solve();
}