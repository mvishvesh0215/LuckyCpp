// file handling : write mode

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr = fopen("Sunbeam.txt","w");

    char f_name[10],l_name[10];
    int salary;

    printf("Enter the first name, last name and salary :");
    scanf("%s%s%d",&f_name,&l_name,&salary);

    fprintf(fptr,"%s  %s  %d",f_name,l_name,salary);
   
    fclose(fptr);
    return 0;
}