/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q3)
*/
#include<stdio.h>

void swap(int *p, int *q){
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
int main()
{
    int a, b;
    a =25;
    b =34;

    printf("Before swaping a = %d and b = %d\n", a, b);
    
swap(&a, &b);
    printf("After swaping a = %d and b = %d\n", a, b);

   return 0;
}