# include <stdio.h>   
int main()   
{   
 int i, Number, Sum = 0 ;   
 scanf("%d", &Number) ;   
 for(i = 1 ; i < Number ; i++)   
  {   
   if(Number % i == 0)   
     Sum = Sum + i ;   
  }    

 if (Sum == Number)   
    printf("True") ;   
 else   
    printf("False") ;   

return 0 ;   
}