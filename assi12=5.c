#include<stdio.h>
void even(int );

int main()
{
    int num;
    printf("how many even you want to print:");
    scanf("%d",&num);
    printf("first %d even natural numbers are:",num/2);
    even(num);
}
void even(int n)
{
    int i;
    if(n)
        even(n-1);
    else 
        return 1;
    if(n%2==0)
        printf("%d ",n);
    
}