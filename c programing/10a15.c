/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q15)
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char ch;
    int l;
    printf("Enter the string 1\n");
    scanf("%[^\n]%*c", &str);
    l = strlen(str);

    for (int i = 1; i < l; i++)
    {
        for (int j = 0; j < l-i; j++)
        {
            if (str[j] >= str[j + 1])
            {
                ch = str[j];
                str[j] = str[j + 1];
                str[j + 1] = ch;
            }
        }
    }
    printf("%s", str);

    return 0;
}