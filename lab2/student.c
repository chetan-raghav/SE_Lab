/*
Student result calculation
Date: 15/01/2019
Author: Chetan Raghav 
Version: 1.0
*/
#include<stdio.h>
#include<stdlib.h>
#include "validate.c"
struct student                     //Structure creation
{
	char name[50];
	int rollno;
	int sub1;
	int sub2;
};
#include "studentcal.h"
#include "average.h"
int main()
{
	FILE *fp = fopen("student.txt","r+");
	int i=0,j=0;
	int rn;
        int num_of_student,n;
    while(1)
   {
	printf("\n\t***MENU***\n");
	printf("Enter 1 to add a new student .\n");
	printf("Enter 2 to display details of all students.\n");
	printf("Enter 3 to retrieve the details of students from rollno.\n");
        printf("Enter 4 to calculate average marks of students from rollno.\n");
	printf("Enter 5 to update the data\n");
	printf("Enter 6 to delete the data\n");
	printf("Enter 7 to exit.\n");
	int ch,n;
        char temp[50];
	printf("\nEnter the option :");
        scanf("%d",&ch);
	struct student *s=malloc(sizeof(struct student));
        switch(ch)
	 {
          case 1:
            printf("Rollno:\n");
            scanf("%s",&temp);
            n=validate(temp);
	    if(!n)
	    printf("please enter valid rollno!!");
	  else
          {
            s->rollno=n;
            printf("\nName:");
            scanf("%s",&s->name);
            printf("\nSub 1:");
            scanf("%d",&s->sub1);
            printf("\nSub 2:");
            scanf("%d",&s->sub2);            
            addnewstd(s);
           }
            break;
          case 2:
            display();
            break;
          case 3:  
            printf("Enter rollno :");
            scanf("%s",&temp);
	    n=validate(temp);
	    if(n)
            {	
                rn=n;               
		retrieve(rn);	       
	    }
	    else
		printf("Enter the valid rollno!!!\n");
            break;
          case 4:
            printf("Enter rollno :");
            scanf("%s",&temp);
	    n=validate(temp);
	    if(n)
            {
         	rn=n;
                average(rn);
            }
            else
		printf("Please Enter valid Rollno!!!\n");
            break;
	  case 5:
           printf("Enter rollno :");
           scanf("%s",&temp);
           n=validate(temp);
           if(n)
            {
         	rn=n;
                update(rn);
            }
            else
		  printf("Please Enter valid Rollno!!!\n");
            break;
          case 6:
           printf("Enter rollno :");
           scanf("%s",&temp);
           n=validate(temp);
           if(n)
            {
         	rn=n;
                delete(rn);
            }
            else
		  printf("Please Enter valid Rollno!!!\n");
            break;      
          case 7: 
            exit(0);
            break;       
          default: 
            printf("Please choose valid option !!");
            break;                     
    }
}	
	fclose(fp);
}
