/******************************************************************************
 
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
 
*******************************************************************************/
#include <stdio.h>
 
int main()
{   int t;
    scanf("%d",&t);
    while(t--){
        
    int n;
    scanf("%d",&n);
    int ans,a[n];
    
    for(int i=0;i<n;++i){
        int x;
        scanf("%d",&x);
        a[i] = x;
        if(i!=0){
            ans ^= x;
        }
        else ans = x;
    }
    int ans2;
    for(int i=0;i<n;++i){
        //printf("%d ",a[i]);
        if(i!=0){
            ans2 ^= (a[i] ^ ans);
        }
        else ans2 = a[i]^ans;
    }
    //printf("
");
    ans2 == 0? printf("%d
",ans) : printf("-1
");
    }
}