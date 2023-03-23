#include <stdio.h>
#include <string.h>

#define NAMES 100
#define LENGTH 50

int main() {
    char names[NAMES][LENGTH];
    char temp[LENGTH];
    int i, j, n;
    char ascending;

    printf("Enter array size (up to %d elements can be fit): ", NAMES);
    scanf("%d", &n);
    printf("Enter %d names:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    printf("Sort in ascending (a) or descending (d) order: ");
    scanf(" %c", &ascending);
    for (i = 0; i < n - 1; i++) 
	{
        for (j = i + 1; j < n; j++) 
		{
            if ((ascending == 'a'  && strcmp(names[i], names[j]) > 0)
                || (ascending == 'd' && strcmp(names[i], names[j]) < 0)) 
			{
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("Sorted names:\n");
    for (i = 0; i < n; i++) 
	{
        printf("%s\n", names[i]);
    }

    return 0;
}
