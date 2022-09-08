/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q10)
   */
#include<stdio.h>
 
int main()
{
 int a[8] = {500, 100, 50};
 int Amount, i, temp;
 
 printf("\n Please Enter the Amount of Cash  =  ");
 scanf("%d", &Amount);
 
 temp = Amount;
  
 for(i = 0; i < 8; i++)
 {
 	printf("\n %d Notes is = %d", a[i], temp / a[i]);
 	temp = temp % a[i];
 }

 return 0;
}