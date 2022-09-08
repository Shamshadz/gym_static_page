/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q1) Write a C program to accept two integers and check whether they are
equal or not.
   */
#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter two integers to check wheather they are equal or not\n");
    scanf("%d %d", &a, &b);
    if(a==b){
        printf("Two integers are equal\n");
    }
    else{
        printf("Two integers are not equal\n");
    }


   return 0;
}