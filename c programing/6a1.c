/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q1) Write c program to find maximum and minimum number entered by user among three numbers.
   */
#include<stdio.h>

int main()
{
   int a, b, c;
   printf("Enter three numbers");
   scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c){
        if(b>c){
            printf("%d %d %d", a, b, c);
        }
        else{
            printf("%d %d %d", a, c, b);
        }
    }
    else if(b>a && b>c){
        if(a>c){
            printf("%d %d %d", b, a, c);
        }
        else{
             printf("%d %d %d", b, c, a);
        }
    }
    else{
        if(a>b){
            printf("%d %d %d", c, a, b);
        }
        else{
             printf("%d %d %d", c, b, a);
        }
    }

   return 0;
}