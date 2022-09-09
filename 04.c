#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any two values : ");
    scanf("%d%d",&a,&b);
    printf("You have entered A = %d, and B = %d \n",a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("After swapping, A = %d, and B = %d",a,b);
    return 0;
}
