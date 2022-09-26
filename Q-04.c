#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the values of a and b: ");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Values of a and b after swapping (without using third variable) is a=%d and b=%d",a,b);
    return 0;
}

