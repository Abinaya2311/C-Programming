#include <stdio.h>
#include <stdlib.h>

struct person 
{
    char name[50];
    int age;
};

int main() 
{
    struct person *ptr; 
    struct person p;
    ptr = &p; 
    printf("Enter name: ");
    scanf("%s", ptr->name);
    printf("Enter age: ");
    scanf("%d", &ptr->age);
    printf("\nName: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    return 0;
}
