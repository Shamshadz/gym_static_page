/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q2)
*/
#include <stdio.h>
#include <math.h>
float fx(float x){
 return (cos(x));
}
float fxh_add(float x, float h){
 return (cos(x+h));
}
float fxh_sub(float x, float h){
 return(cos(x-h));
}
float fx2h_add(float x, float h){
 return (cos(x+2*h));
}
int main(){
 float x, x1, x2, x3, x4, h;
 printf("For function: cos(x)\n");
 printf("Enter the value of x:\n");
 scanf("%f", &x);
 printf("Enter the value of h:\n");
 scanf("%f", &h);
 x1 = fxh_add(x, h);
 x2 = fxh_sub(x, h);
 x3 = fx(x);
 x4 = fx2h_add(x, h);
 printf("Differentiation using two point = %.3f\n", (x1-x2)/(2*h));
 printf("Differentiation using three point = %.3f", ((4*x1) - (3*x3) - x4)/
(2*h));
 return 0;
}