/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q7) Write a program in C to read any day number in integer and display day
name in the word.
   */
#include <stdio.h>
void main()
{
   int dayno;
   printf("Input Day No : ");
   scanf("%d",&dayno);
   switch(dayno)
   {
	case 1:
	       printf("Monday \n");
	       break;
	case 2:
	       printf("Tuesday \n");
	       break;
	case 3:
	       printf("Wednesday \n");
	       break;
	case 4:
	       printf("Thursday \n");
	       break;
	case 5:
	       printf("Friday \n");
	       break;
	case 6:
	       printf("Saturday \n");
	       break;
	case 7:
	       printf("Sunday  \n");
	       break;
	default:
	       printf("Invalid day number. \nPlease try again ....\n");
	       break;
      }
}
