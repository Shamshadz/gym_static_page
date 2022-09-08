/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q6)
*/
#include<stdio.h>

int main()
{
    int n , sum =0;
    printf("Enter n to print first natural number and its sum\n");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        printf("%d ", 2*i);
        sum += 2*i;
    }
    printf("\n%d", sum);

   return 0;
}