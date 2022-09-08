/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q6)
*/
#include<stdio.h>

int main()
{
    int c=1, n=4;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ", c);
            c++;
        }
        printf("\n");
    }

   return 0;
}