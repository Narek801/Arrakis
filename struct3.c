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
    St result;

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

    strcpy(result.name, students[0].name);
    strcpy(result.surname, students[1].surname);
    result.age = (students[0].age + students[1].age) / 2;
    strcpy(result.subject, "Math");  

    printf("%s %s, %d, %s\n", result.name, result.surname, result.age, result.subject);
}