#include<stdio.h>
void print_rev(int );
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    print_rev(num);
}
void print_rev(int num)
{
    printf("%d ",num);
    if(num)
       print_rev(num-1);
    else
       return ;
}