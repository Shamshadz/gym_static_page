/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q5)
   */
#include <stdio.h>

int main()
{
    char name[20];
    printf("Enter user name\n");
    scanf(" %s", &name);
    float units, rupees, n;
    printf("Enter units consumed\n");
    scanf("%f", &units);

    if (units <= 200)
    {
        rupees = units * 0.8;
        printf("charges for %f units consumed is %f Rs\n", units, rupees);
    }
    else if (units > 200 && units <= 300)
    {
        rupees = 100 + (units - 200) * 0.9;
        rupees += 160;
        printf("charges for %f units consumed is %f Rs\n", units, rupees);
    }
    else if (units > 300 && units <= 450)
    {
        rupees = 100 + (units - 300) * 1;
        rupees += 250;
        printf("charges for %f units consumed is %f Rs\n", units, rupees);
    }
    else if (units > 450)
    {
        rupees = (units - 450) * 1;
        rupees += 400;
        rupees = 100 + rupees + rupees * 0.15;
        printf("charges for %f units consumed is %f Rs\n", units, rupees);
    }
    else
    {
        printf("Enter valid input");
    }

    return 0;
}