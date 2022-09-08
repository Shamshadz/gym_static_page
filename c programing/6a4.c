/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q4)
   */
  #include<stdio.h>
  
  int main()
  {
     int units, r;
     printf("Enter the units consumed\n");
     scanf("%d", &units);
     if(units<100){
         r = units*0.8;
         printf("The electricity bill for %d units consumed is Rs.%d", units, r);
     }
     else{
         r = (units - 99)*0.9;
         r += (99*0.8);
         printf("The electricity bill for %d units consumed is Rs.%d", units, r);
     }
  
     return 0;
  }