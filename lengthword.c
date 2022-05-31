#include <stdio.h>
#include <string.h>
#define STRING_MAX_SIZE 50

int main()
{
    char givenString[STRING_MAX_SIZE];
    printf("Enter a string : ");
    fgets(givenString, STRING_MAX_SIZE, stdin);
    int i;
    int endIndex;
    int startIndex = 0;
    for (i = 0; i < strlen(givenString); i++)
    {
        if (givenString[i] == ' ' || i == strlen(givenString) - 1)
        {
            endIndex = i;
            printf("%.*s = %d\n", (endIndex - startIndex), givenString + startIndex, (endIndex - startIndex));
            startIndex = i + 1;
        }
    }

    return 0;
}

