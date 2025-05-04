// A string is said to be a palindrome if the reverse of the string is same as the string. For example, "abba" is palindrome, but "abbc" is not palindrome.
#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", s);

    int len = strlen(s);
    int is_palindrome = 1;

    for(int i=0; i < len / 2; i++)
    {
        if(s[i] != s[len - 1 -i])
        {
            is_palindrome = 0;
            break;
        }
    }
    if(is_palindrome)
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }
    return 0;
}