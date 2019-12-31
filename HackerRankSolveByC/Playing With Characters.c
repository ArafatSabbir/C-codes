/*-----------------------------------------
Sabbir Ahmed
Comilla University,Bangladesh
https://www.linkedin.com/in/sabbirahmedcse/
-----------------------------------------*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_LEN 120

int main()
{
    char ch;
    char s[MAX_LEN];
    char sen[MAX_LEN];

    scanf("%c", &ch);
    scanf("%s\n", &s);  // single word input
    scanf("%[^\n]%*c", &sen); // multiple word with blank space

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}
