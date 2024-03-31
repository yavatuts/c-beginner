#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int salary=0, maxSalary=0, employee=0, maxEmployee=0, n;
    printf("Enter number of Employees: ");
    scanf("%i", &n);
    for(int i=0; i<n; i++) {
        printf("Enter Employee Number : ");
        scanf("%i", &employee);
        printf("Enter Employee Salary : ");
        scanf("%i", &salary);
        if(salary > maxSalary) {
            maxSalary = salary;
            maxEmployee = employee;
        }
        if(salary <= 400000)
            printf("Tax for Employee %i with Salary of %i : NOTHING\n", employee, salary);
        else if(salary >= 400001 && salary <= 500000)
            printf("Tax for Employee %i with Salary of %i : %i\n", employee, salary, salary*10/100);
        else if(salary >= 500001 && salary <= 700000)
            printf("Tax for Employee %i with Salary of %i : %i\n", employee, salary, salary*15/100);
        else
            printf("Tax for Employee %i with Salary of %i : %i\n", employee, salary, salary*17/100);
    }
    printf("\n-------\n, MAX : \n");
    printf("Employee %i with Salary of %i\n", maxEmployee, maxSalary);
}
