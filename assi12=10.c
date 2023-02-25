#include<stdio.h>
void reverse(int );
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    printf("the reverse number is:");
    reverse(num);
}
void reverse(int num)
{
    if(num>0)
    {
        printf("%d",num%10);
        num=num/10;
        reverse(num);
        
    }
}
