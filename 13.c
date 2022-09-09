#include<stdio.h>
int main()
{
    int n,a,b,num;
    printf("Enter a three digits number to rotate the digits : ");
    scanf("%d",&n);
    a=n/10;
    b=n%10;
    printf("After shifting one digit toward right %d",b*100+a);
    return 0;
}
