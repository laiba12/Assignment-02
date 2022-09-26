#include<stdio.h>
int main()
{
    int b,a,c=0;
    printf("enter the value=");
    scanf("%d",&b);
    a=b%10;
    b=b/10;
    c=c+a;
    a=b%10;
    b=b/10;
    c=c+a;
    a=b%10;
    b=b/10;
    c=c+a;
    printf("sum of digits is=%d",c);
}

