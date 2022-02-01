#include<stdio.h>
int main(void)
{
struct Student
{
 char Name[30];
 char ID[20];
 char Branch[30];
};

struct Staff
{
 char Id[30];
 char Experience[40];
 };

 struct NonStaff
 {
 char NId[30];
 char Department[30];
 };

 struct Admin
 {
 struct Student std[3];
 struct Staff staff[3];
 struct NonStaff nonstaff[3];
 };


 struct Admin *ptr=NULL;
 struct Admin b[3];
 ptr=b;

 for(int i=0;i<2;i++)
{
printf("\nDetails of student #%d\n",(i+1));
 printf("\nEnter Student Name\n");
 scanf("%s",ptr->std[i].Name);
 printf("\nEnter Student ID\n");
 scanf("%s",ptr->std[i].ID);
 printf("\nEnter Student Branch\n");
 scanf("%s",ptr->std[i].Branch);
 printf("\nEnter Staff Detailes\n");
 printf("\nEnter StaffId\n");
 scanf("%s",ptr->staff[i].Id);
 printf("\nEnter Staff Experience\n");
 scanf("%s",ptr->staff[i].Experience);
  printf("\nEnter Staff Detailes\n");
 printf("\nEnter Non Staff Id\n");
 scanf("%s",ptr->nonstaff[i].NId);
 printf("\nEnter Non Staff Department\n");
 scanf("%s",ptr->nonstaff[i].Department);
 ptr++;

 }
 ptr=b;
 printf("\n Result via admin\n");
 for(int i=0;i<2;i++)
 {
 printf("\n Detailes of Student #%d\n",(i+1));
 printf("Name:%s\n",ptr->std[i].Name);
 printf("StudentID:%s\n",ptr->std[i].ID);
 printf("Branch:%s\n",ptr->std[i].Branch);
 printf("StaffID:%s\n",ptr->staff[i].Id);
 printf("Experience:%s\n",ptr->staff[i].Experience);
 printf("NonStaffID:%s\n",ptr->nonstaff[i].NId);
 printf("Department:%s\n",ptr->nonstaff[i].Department);
 ptr++;
 }
 return 0;

}

