#include<stdio.h>
#include<stdlib.h>
int main(void)
{
struct CollegeDatabase
{
  char CollegeName[30];
  char Adress[30];

  struct Department
  {
   char Department[30];
   char NoOfSection[30];
   char NoOfTeachers[40];
   char NoOfStudents[30];
  }depart;
};
   int n;
   struct CollegeDatabase CD;
  FILE *fptr,*fp2;


   if ((fptr = fopen("CollegeDatabase.txt","w")) == NULL){
       printf("Error! opening file");

       Program exits if the file pointer returns NULL.
      exit(1);
 }

printf("Enter a student detailes:\n");
{
printf("\nDetails of College #%d\n");
printf("Enter the College Detailes:\n");
printf("College Name:");
gets(CD.CollegeName);
printf("Adress:");
gets(CD.Adress);
printf("Enter the Department Detailes:\n");
printf("Department:");
gets(CD.depart.Department);
printf("NoOfSection:");
gets(CD.depart.NoOfSection);
printf("NoOfTeaches:");
gets(CD.depart.NoOfTeachers);
printf("NoOfStudents:");
gets(CD.depart.NoOfStudents);
{

  fwrite(&CD, sizeof(struct CollegeDatabase),1, fptr);

  fclose(fptr);
}
}
printf("College Deatiles are:\n");
 fptr = fopen("CollegeDatabase.txt","r");

if(fptr==NULL)
{

    printf(stderr,"\n error opening ");
    exit(1);
}

      fread(&CD, sizeof(struct CollegeDatabase), 1, fptr);

      printf("CollegeName=%s\nAddress=%s\nDepartment=%s\nNoOfSections=%s\nNoOfTeachers=%s\nNoOfStudents=%s\n",CD.CollegeName,CD.Adress,
      CD.depart.Department,CD.depart.NoOfSection,CD.depart.NoOfTeachers,CD.depart.NoOfStudents);
fscanf()
        fclose(fptr);
        return 0;

}
