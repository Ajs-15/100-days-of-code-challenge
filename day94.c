#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function that takes structure as parameter
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student st;

    // Input student details
    printf("Enter student name: ");
    scanf("%s", st.name);
    
    printf("Enter roll number: ");
    scanf("%d", &st.roll);
    
    printf("Enter marks: ");
    scanf("%d", &st.marks);

    // Call the function
    printStudent(st);

    return 0;
}
