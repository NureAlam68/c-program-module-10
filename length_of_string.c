// #include <stdio.h>
// int main()
// {
//     char str[100];
//     scanf("%s", &str);
//     int count = 0;
//     for(int i = 0; str[i] != '\0'; i++)
//     {
//         count++;
//     }
//     printf("%d", count);
//     return 0;
// }


// use strlen function
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%s", str);
    int strl = strlen(str);
    printf("%d", strl);
    return 0;
}