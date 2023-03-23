#include <stdio.h>
#include <string.h>

#define size 256

int main() 
{
    char str[100];
    int i, len;
    int freq[size] = {0};
    char max_char;
    int max_freq = 0;
    printf("Enter a string: ");
    gets(str);
    len = strlen(str);
    for(i = 0; i < len; i++) 
	{
        freq[(int)str[i]]++;
    }

    for(i = 0; i < size; i++) 
	{
        if(freq[i] > max_freq) 
		{
            max_freq = freq[i];
            max_char = (char)i;
        }
    }
    printf("Maximum occurring character: '%c'\nfrequency: %d\n", max_char, max_freq);
    return 0;
}
