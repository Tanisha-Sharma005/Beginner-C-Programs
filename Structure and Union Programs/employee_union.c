// Program to demonstrate use of union for employee data

#include <stdio.h>

union Employee {
    int emp_id;
    float salary;
};

int main() {
    union Employee e;

    printf("Enter employee ID: ");
    scanf("%d", &e.emp_id);

    printf("Employee ID: %d\n", e.emp_id);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    printf("Salary: %.2f\n", e.salary);

    // Showing how union works - only one member holds value at a time
    printf("\nAfter storing salary, employee ID becomes: %d\n", e.emp_id);

    return 0;
}
