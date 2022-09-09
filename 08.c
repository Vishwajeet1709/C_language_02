#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n&1==1)
        printf("%d is a odd number.",n);
    else
            printf("%d is a even number.",n);
    return 0;
}
