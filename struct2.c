#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    char surname[20];
    int age;
    char subject[20];
} St;

int main() {
    St students[2];

    for (int i = 0; i < 2; ++i) {
        printf("Student %d:",i + 1); 
        // Name
        scanf("%s", students[i].name);
        // Surname 
        scanf("%s", students[i].surname);
        // Age
        scanf("%d", &students[i].age);
        // Subject
        scanf("%s", students[i].subject);
    }

    (students[0].age > students[1].age) ? printf("Older student: %s\n", students[0].name) : printf("Older student: %s\n", students[1].name);
}