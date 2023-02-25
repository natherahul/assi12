#include<stdio.h>
void odd_natural(int );
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    odd_natural(num);
}
void odd_natural(int num)
{
    if(num)
    {

        odd_natural(num-1);
    }
    else
        return;
    if(num%2!=0)
        printf("%d ",num);
}