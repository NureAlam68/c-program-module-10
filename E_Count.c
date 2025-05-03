// Given a string S. Print the summation of its digits.
#include <stdio.h>
int main()
{
    char str[1000001];
    scanf("%s", str);
    int strl = strlen(str);

    int sum = 0;
    for(int i=0; i < strl; i++)
    {
        sum += str[i] - 48;
    }
    printf("%d", sum);
    return 0;
}