/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q15) Write a program in C to add numbers using call by reference
*/
#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter the two no. to add : ");
    scanf("%d %d", &a, &b);
    int *p = &a; 
    int *q = &b;
    if(*p > *q){
        printf("The maximum no. is %d\n", *p);
    }
    else if(*q > *p){
        printf("The maximum no. is %d\n", *q);
    }
    else{
        printf("Both are equal\n");
    }

   return 0;
}