#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function to find topper and return structure
struct Student findTopper(struct Student s[], int n) {
    int topIndex = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    return s[topIndex];  // return the structure
}

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    // Get topper structure from function
    struct Student topper = findTopper(s, n);

    // Print topper
    printf("\nTop Student: %s | Roll: %d | Marks: %d\n",
           topper.name, topper.roll, topper.marks);

    return 0;
}
