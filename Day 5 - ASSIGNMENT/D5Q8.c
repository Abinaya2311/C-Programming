#include <stdio.h>

struct student {
    char name[50];
    int grade;
};

int main() {
    int n, i, a = 0, b = 0, c = 0, d = 0, f = 0;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student s[n];
    for(i = 0; i < n; i++) {
        printf("Enter student %d name: ", i+1);
        scanf("%s", s[i].name);
        printf("Enter student %d marks: ", i+1);
        if (scanf("%d", &s[i].grade) != 1) {
            printf("Invalid input. Please enter a valid mark.\n");
            i--;
            continue;
        }
        if(s[i].grade >= 90 && s[i].grade <= 100) {
            a++;
        } else if(s[i].grade >= 78 && s[i].grade <= 89) {
            b++;
        } else if(s[i].grade >= 65 && s[i].grade <= 77) {
            c++;
        } else if(s[i].grade >= 50 && s[i].grade <= 64) {
            d++;
        } else {
            f++;
        }
    }

    for(i = 0; i < n; i++) {
        printf("\nStudent %d details:\n", i+1);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %d\n", s[i].grade);
    }
    printf("\nTotal number of A's: %d\n", a);
    printf("Total number of B's: %d\n", b);
    printf("Total number of C's: %d\n", c);
    printf("Total number of D's: %d\n", d);
    printf("Total number of F's: %d\n", f);

    return 0;
}
