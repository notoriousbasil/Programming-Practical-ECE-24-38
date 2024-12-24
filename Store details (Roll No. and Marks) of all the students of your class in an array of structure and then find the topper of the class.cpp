#include <stdio.h>

struct Student {
    int rollNo;
    float marks;
};

int main() {
    struct Student students[50]; // Assuming a maximum of 50 students
    int numStudents, i, topperIndex;
    float highestMarks = 0.0;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    for (i = 0; i < numStudents; ++i) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll No.: ");
        scanf("%d", &students[i].rollNo);
        printf("Marks: ");
        scanf("%f", &students[i].marks);

        if (students[i].marks > highestMarks) {
            highestMarks = students[i].marks;
            topperIndex = i;
        }
    }

    printf("\nTopper of the class:\n");
    printf("Roll No.: %d\n", students[topperIndex].rollNo);
    printf("Marks: %.2f\n", students[topperIndex].marks);

    return 0;
}
