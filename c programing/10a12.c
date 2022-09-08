/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q12)
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int count = 1;
    int j = 0;
    printf("Enter the string\n");
    scanf ("%[^\n]%*c", str);

    while( str[j] != '\0')
    {
        if( str[j] ==' ' || str[j] =='\n' || str[j] =='\t'){
            count++;
        }
        j++;
    }
    printf("No. of words in string %s is : %d", str, count);

    return 0;
}