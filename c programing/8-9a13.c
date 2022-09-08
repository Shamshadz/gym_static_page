/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q13)
*/
#include<stdio.h>
#include<math.h>

int main()
{
    int n, r, a, sum =0;
    printf("Enter First term of series\n");
    scanf("%d", &a);

    printf("Enter the Number of terms\n");
    scanf("%d", &n);

    printf("Enter the ratio of G.P\n");
    scanf("%d", &r);

    printf("printing G.P\n");

    for(int i=0;i<n;i++){
       int t = a*pow(r,i);
       printf("%d ", t);

       sum += t;
    }
    printf("\nThe Sum of G.P is %d\n", sum);

   return 0;
}