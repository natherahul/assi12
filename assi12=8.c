#include<stdio.h>
#include<conio.h>
#include<math.h>
int binary(int);
int main()
{
    int num ;
    printf("enter the number:");
    scanf("%d",&num);
    printf("the binary number is:");
    binary(num);
}
int binary(int num)
{
   if(num>0)
   {
        binary(num/2);
        printf("%d",num%2);
   }
    
}