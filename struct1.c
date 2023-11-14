#include <stdio.h>
#include <string.h>

typedef struct {
    int age;
    char name[20];
    char surname[20];
    char subject[20];
} A;

int main() {
    A student1 = {17, "Narek", "Hakobyan", "Geography"};
    A student2 = {19, "Vahe", "Amiryan", "Math"};
    A student3 = {22, "Ani", "Ayvazyan", "English"};

    printf("Student 1: %i, %s %s, %s\n", student1.age, student1.name, student1.surname, student1.subject);
    printf("Student 2: %i, %s %s, %s\n", student2.age, student2.name, student2.surname, student2.subject);
    printf("Student 3: %i, %s %s, %s\n", student3.age, student3.name, student3.surname, student3.subject);
}