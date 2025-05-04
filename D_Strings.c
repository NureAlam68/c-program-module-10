// Given two strings A and B. Print three lines contain the following:

// The size of the string A and size of the string B separated by a space
// The string produced by concatenating A and B (A + B).
// The two strings separated by a single space respectively, after swapping their first character.
#include <stdio.h>
#include <string.h>
int main()
{
    char A[11], B[11];
    scanf("%s", A);
    scanf("%s", B);

    int lenA = strlen(A);
    int lenB = strlen(B);
    printf("%d %d\n", lenA, lenB);

    printf("%s%s\n", A, B);

    // Step 3: Swap first characters and print
    char firstA = A[0], firstB = B[0];

    A[0] = firstB;
    B[0] = firstA;

    printf("%s %s\n", A, B);
    return 0;
}