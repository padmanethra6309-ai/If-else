#include<stdio.h>
int main()
{
    int a;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    if(a=0)
    {
        printf("Zero");
    }
    else if(a>0)
    {
        printf("The number is positive");

    }
    else
    {
        printf("The number is negative");

    }
    return 0;
}