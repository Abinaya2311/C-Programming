#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Uppercase string: %s\n", strupr(str));
    printf("Lowercase string: %s\n", strlwr(str));
    return 0;
}
