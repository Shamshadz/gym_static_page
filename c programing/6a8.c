/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q8)
   */
  #include<stdio.h>
  #include<math.h>
  
 int main()
  {
     float x, y, radius, a, b, distance;
     printf("Enter coordinate of the center of circle (a,b)");
     scanf("%f %f", &a, &b);
     printf("Enter the coordinate (x,y) to check its position");
     scanf("%f %f", &x, &y);
     printf("Enter the radius");
     scanf("%f", &radius);

     distance = sqrt(pow((x-a),2) + pow((y-b),2));

     if(distance < radius){
         printf("The entered coordinate is inside the circle");
     }
     else if(distance > radius){
         printf("The entered coordinate is outside the circle");
     }
     else{
         printf("The entered coordinate is on the circle");
     }

     return 0;
  }