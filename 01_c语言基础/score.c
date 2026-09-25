#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    float score;
};

int main() {
    int n;
    struct Student *students;

    printf("How many students? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: Invalid number.\n");
        return 1;
    }

    students = (struct Student *)malloc(n * sizeof(struct Student));

    if (students == NULL) {
        printf("Error: Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter score for student %d: ", i + 1);
        scanf("%f", &students[i].score);
    }

    printf("\n--- Score Report ---\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Score: %.1f\n", students[i].name, students[i].score);
    }

    free(students);
    students = NULL;

    return 0;
}