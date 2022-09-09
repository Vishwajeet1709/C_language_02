#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Two Numbers : ");
    scanf("%d%d",&a,&b);

    printf("Before Swapping A = %d, and B = %d \n",a,b);
    c=a;
    a=b;
    b=c;

    printf("After Swapping A = %d, and B = %d",a,b);
    return 0;
}
