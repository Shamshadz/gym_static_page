/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q1)
*/
#include<stdio.h>

int fact(int n){
    if (n == 0)  
    return 1;  
  else  
    return(n * fact(n-1));  
}
int main()
{
    int n = 5;
    int sum = 0;
    for(int i =1; i<=5;i++){
        sum += (fact(i)/i);
    }
    printf("Sum of 1!/1+2!/2+3!/3+4!/4+5!/5 is : %d\n", sum);

   return 0;
}