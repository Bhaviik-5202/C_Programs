// A1Employee.c
#include <stdio.h>

struct employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct employee e = {101, "Bhavik", 45000};

    printf("ID=%d\nName=%s\nSalary=%.2f", e.id, e.name, e.salary);
    return 0;
}
