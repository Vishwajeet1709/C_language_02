#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    printf("After changing last digit to zero %d",n/10*10);
    return 0;

}
