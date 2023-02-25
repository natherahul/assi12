#include<stdio.h>
void even_rev(int );
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    printf("%d even natural numbers in reverse order are:",num);
    even_rev(num);
}
void even_rev(int n)
{
    if(n%2==0)
        printf("%d ",n);
    if(n>1)
        even_rev(n-1);
    
        
}