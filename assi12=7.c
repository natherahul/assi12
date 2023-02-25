#include<stdio.h>
void square(int );
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    printf("square of first %d number is: ",num);
    square(num);
}
void square(int n)
{
    if(n>1)
        square(n-1);
    printf("%d ",n*n);
}
