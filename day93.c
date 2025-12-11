#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Input students
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    // Find topper
    int topperIndex = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[topperIndex].marks) {
            topperIndex = i;
        }
    }

    // Print topper details
    printf("\nTopper: %s (Marks: %d)\n", s[topperIndex].name, s[topperIndex].marks);

    return 0;
}
