#include<stdio.h>

int main()
{
 int a,b,c;
 printf("Enter 3 numbers");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b && a>c){
  printf("Mxaimum number is a = %d\n",a);
  }
  else if(b>c){
      printf("Minimum number is c = %d\n",c);
  }
  else{
      printf("Minimum number is b = %d\n",b);
  }

//  else if(b>a && b>c)
//   printf("Mxaimum number is b = %d\n",b);
//  else
//    printf("Mxaimum number is c = %d\n",c);
//  if(a<b && a<c)
//   printf("Minimum number is a = %d\n",a);
//  else if(b<a && b<c)
//   printf("Minimum number is b = %d\n",b);
//  else
//    printf("Minimum number is c = %d\n",c);

   return 0;
}