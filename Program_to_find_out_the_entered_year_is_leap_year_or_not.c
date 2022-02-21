#include<stdio.h>  
int main() 
{
    int r; 
    scanf("%d",&r); 
    if(((r%4==0)&&(r%100!=0))||((r%400==0))) 
    printf("True"); 
    else 
    printf("False"); 
    return 0;
}