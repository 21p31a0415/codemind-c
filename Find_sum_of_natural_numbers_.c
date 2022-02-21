#include<stdio.h> 
int main() 
{
    int num; 
    scanf("%d",&num); 
    int sum=0; 
    for(int i=num;i>0;--i)
    sum+=i; 
    printf("%d",sum); 
    return 0;
}