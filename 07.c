#include<stdio.h>
int main()
{
    int a,b,i=1;
    printf("Enter a number to find the position of first \"1\" LSB : ");
    scanf("%d",&a);
    while(i)
    {
        b=a%2;
        a=a/2;
        if(b==1)
        {
        printf("Position of first \"1\" LSB is %d",i);
        break;
        }
        i++;
    }
    return 0;
}
