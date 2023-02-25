#include<stdio.h>
void octal(int);
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    printf("%d in octal is:",num);
    octal(num);
}
void octal(int num)
{
    if(num>0)
    {
        octal(num/8);
        printf("%d",num%8);
    }
}