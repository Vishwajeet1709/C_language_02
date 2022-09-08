#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Your entered number without last digit is %d",a/10);
    return 0;
}
