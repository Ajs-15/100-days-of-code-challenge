#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee empWrite, empRead;
    FILE *fp;

    // Input employee details
    printf("Enter Employee Name: ");
    scanf("%s", empWrite.name);

    printf("Enter Employee ID: ");
    scanf("%d", &empWrite.id);

    printf("Enter Salary: ");
    scanf("%f", &empWrite.salary);

    // --- WRITE TO BINARY FILE ---
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    fwrite(&empWrite, sizeof(empWrite), 1, fp);
    fclose(fp);

    // --- READ FROM BINARY FILE ---
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    fread(&empRead, sizeof(empRead), 1, fp);
    fclose(fp);

    // Display read data
    printf("\n--- Employee Data Read From File ---\n");
    printf("Name: %s\n", empRead.name);
    printf("ID: %d\n", empRead.id);
    printf("Salary: %.2f\n", empRead.salary);

    return 0;
}
