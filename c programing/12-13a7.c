/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q7)
*/
#include<stdio.h>
int naturalno(int a){
    for(int i=1;i< a;i++){
        printf("%d ", i);
    }
}
int main()
{
    int n =50;
    printf("The first 50 natural numbers is :\n");
    printf("%d", naturalno(n));

   return 0;
}