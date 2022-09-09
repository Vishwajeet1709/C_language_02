#include<stdio.h>
int main()
{
    int a,x,y;
    printf("Enter a three digit number : ");
    scanf("%d",&a);
    x=a/100;
    a-=x*100;
    y=a/10;
    a-=y*10;

    printf("Sum of digits you have entered = %d",a+y+x);
    return  0;
}
