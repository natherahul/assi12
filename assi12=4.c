#include<stdio.h>
void odd_rev(int );
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    odd_rev(num);
}
void odd_rev(int num)
{
    if(num%2!=0)
       printf("%d ",num);
    if(num)
        odd_rev(num-1);
    else
        return;
}