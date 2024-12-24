#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct Student students[50]; // Assuming a maximum of 50 students
    int numStudents, i;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    for (i = 0; i < numStudents; ++i) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No.: ");
        scanf("%d", &students[i].rollNo);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nStudent Details:\n");
    printf("-------------------------------------\n");
    printf("Name\tRoll No.\tMarks\n");
    printf("-------------------------------------\n");
    for (i = 0; i < numStudents; ++i) {
        printf("%s\t%d\t%.2f\n", students[i].name, students[i].rollNo, students[i].marks);
    }

    return 0;
}
