/******************************************************************************
 
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
 
*******************************************************************************/
#include <stdio.h>
#define in(a) scanf("%d",&a)
#define out(a) printf("%d ",a)
int main()
{
    int t;
    in(t);
    while(t--){
        int n;
        in(n);
        for(int i=0;i<n;++i){
            int x;
            in(x);
            out(n - x + 1);
        }
        printf("
");
        
    }
}