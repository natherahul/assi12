#include<stdio.h>
void natural(int );
int main()
{
    int num,k;
    printf("enter the number:");
    scanf("%d",&num);
    printf("\nnatural numbers from 1 to %d are:",num);
    natural(num);
}
void natural(int num)
{
    if(num)
        natural(num-1);
    else
        return;
        
    printf("%d ",num);
}
