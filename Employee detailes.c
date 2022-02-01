#include<stdio.h>
int main(void)
{
struct Employee
{
  char Name[30];
  char ID[30];

  struct Department
  {
   char Department[30];
   char Salary[30];
  }depart;

  struct Division
  {
  char Designation[30];
  char Experience[30];
  }div;
};
 struct Employee emp;
{
printf("Enter the Employee Detailes:\n");
printf("Name:");
gets(emp.Name);
printf("Id:");
gets(emp.ID);
printf("Enter the Department Detailes:\n");
printf("Department:");
gets(emp.depart.Department);
printf("Salary:");
gets(emp.depart.Salary);
printf("Enter the Division Detailes:\n");
printf("Designation:");
gets(emp.div.Designation);
printf("Experience:");
gets(emp.div.Experience);
// displaying detailes

printf("\nEmployee Detailes:\n");
printf("Name:%s\n",emp.Name);
printf("ID:%s\n",emp.ID);

printf("\nDepartment Detailes:\n");
printf("Deapartment:%s\n",emp.depart.Department);
printf("Salary:%s\n",emp.depart.Salary);

printf("\nDesignation Detailes:\n");
printf("Designation:%s\n",emp.div.Designation);
printf("Experience:%s\n",emp.div.Experience);
}
}
