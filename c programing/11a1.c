/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q1)
*/
#include<stdio.h>

float sum(float a, float b);

int main()
{
    float a, b;
    printf("Enter the two number to add\n");
    scanf("%f %f", &a, &b);
    float add;
    add = sum(a,b);
    printf("%f\n", add);

   return 0;
}
float sum(float a , float b){
    float sum = a + b ;
    return sum;
}