/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q18)
*/
#include<stdio.h>

int main()
{
    int n, *fact, f=1;

    printf("Enter the n to find its factorial\n");
    scanf("%d", &n);
    fact = &f;
    
    for(int i=1;i<=n;i++){
        *fact = (*fact)*i;
    }
    printf("Factorial of '%d' is : %d\n", n, *fact);

   return 0;
}