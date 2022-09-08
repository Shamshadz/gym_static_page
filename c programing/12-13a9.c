/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q9)
*/
#include<stdio.h>

int hcf(int p, int q, int i){
    int n1, n2, gcd =1;
    if(p%i==0 && q%i==0){
        n1=p/i;
        n2=q/i;
        if(n1==n2){
          gcd = (i*gcd);
        }
        i=i-1;
    }
    hcf(n1, n2, i+1);
    return gcd;
}
int main()
{
    int a, b;
    printf("Enter the Two numbers to find GCD : ");
    scanf("%d %d", &a, &b);
    
    printf("%d", hcf(a,b,2));

   return 0;
}