#include <stdio.h>
int main() {
    int n,dup,f0,f1;
    printf("Enter number of elements:");
    scanf("%d",&n);
    f0=0;
    f1=1;
    printf("%d  ", f0);
    for(int i=1;i<=n-1;i++){
        printf("%d  ",f1);
        dup=f1;
        f1=f1+f0;
        f0=dup;
    }
return 0;
}
