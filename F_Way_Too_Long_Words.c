// Given a string S. Print the origin string if it's not too long otherwise, print the special abbreviation
#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    char s[101];

    for (int i = 0; i < t; i++)
    {
        scanf("%s", s);
        int len = strlen(s);

        if (len <= 10)
        {
            printf("%s\n", s);
        }
        else
        {
            printf("%c%d%c\n", s[0], len - 2, s[len - 1]);
        }
    }
    return 0;
}