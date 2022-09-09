#include<stdio.h>
int main()
{
    float USD=76.23,INR;
    printf("Enter INR to convert into USD : ");
    scanf("%f",&INR);

    printf("%f INR equals to %f USD",INR,INR*USD);
    return 0;
}
