// Given a string S. Print the origin string after replacing the following:

// Replace every comma character ',' with a space character.
// Replace every capital character in S with its respective small character and Vice Versa.
#include <stdio.h>
int main()
{
    char s[100001];
    scanf("%s", s);

    for(int i=0; s[i] != '\0'; i++)
    {
        if(s[i] == ',')
        {
            s[i] = ' ';
        } else if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        } else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
    printf("%s\n", s);
    return 0;
}