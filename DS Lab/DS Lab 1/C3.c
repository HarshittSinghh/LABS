#include <stdio.h>
struct Employee
{
    int emp_id;
    char name[50];
    char designation[50];
    float basic_salary;
    float hra_percentage;
    float da_percentage;
    float gross_salary;
};
int main()
{
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct Employee employees[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Emp-id: ");
        scanf("%d", &employees[i].emp_id);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Designation: ");
        scanf("%s", employees[i].designation);
        printf("Basic Salary: ");
        scanf("%f", &employees[i].basic_salary);
        printf("HRA %%: ");
        scanf("%f", &employees[i].hra_percentage);
        printf("DA %%: ");
        scanf("%f", &employees[i].da_percentage);

        float hra_amount = (employees[i].hra_percentage / 100) * employees[i].basic_salary;
        float da_amount = (employees[i].da_percentage / 100) * employees[i].basic_salary;
        employees[i].gross_salary = employees[i].basic_salary + hra_amount + da_amount;

        printf("\n");
    }
    printf("Employee Information:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Employee %d:\n", i + 1);
        printf("Emp-id: %d\n", employees[i].emp_id);
        printf("Name: %s\n", employees[i].name);
        printf("Designation: %s\n", employees[i].designation);
        printf("D.A: %f\n", employees[i].da_percentage);
        printf("H.R.A: %f\n", employees[i].hra_percentage);
        printf("Gross Salary: %f\n", employees[i].gross_salary);
        printf("\n");
    }
    return 0;
}
