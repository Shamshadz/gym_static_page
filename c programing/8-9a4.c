/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q4)
*/
#include<stdio.h>

int main()
{
    int n;
    printf("Enter n upto which you want table\n");
    scanf("%d", &n);

    for(int i =1; i<=n;i++){
        for(int j=1;j<=10;j++){
            int T = j*i;
            printf("%d * %d = %d\n", j, i, T);
        }
    }

   return 0;
}