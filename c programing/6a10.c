/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q10)
   */
#include<stdio.h>

int main()
{
   int x, y;
   printf("enter a point :(x,y)\n");
   scanf("%d %d", &x, &y);
    if(x==0 && y!=0){
        printf("point lie on y-axis\n");
    }
    else if(x==0 && y==0){
        printf("point is on origin\n");
    }
    else if(x!=0 && y==0){
        printf("point lie on x-axis\n");
    }
    else{
        printf("it doesn't lie on x-axis nor on y-axis\n");
    }

   return 0;
}