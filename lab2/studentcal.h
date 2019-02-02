int scanroll;
int addnewstd(struct student *s)            //Adding a new student data function in a file
{
    struct student *t;
  FILE *fk=fopen("output.txt","r");   
  while(!feof(fk))
     {
             fscanf(fk,"%d",&scanroll);
             fscanf(fk,"%s",&t->name);
             fscanf(fk,"%d",&t->sub1);
             fscanf(fk,"%d",&t->sub2);
             if(s->rollno==scanroll)
               {
                printf("Rollno already exist !!");
                return;
               } 
     }  
  fclose(fk);
  fk=fopen("output.txt","a");
  fprintf(fk,"\n%d",s->rollno);  
  fprintf(fk,"\n%s",s->name);
  fprintf(fk,"\n%d",s->sub1);
  fprintf(fk,"\n%d",s->sub2);
  fclose(fk);    
}
void display()                              //display all student data that are present in a file
{
     struct student *s=malloc(sizeof(struct student));
     FILE *fk=fopen("output.txt","r");
     while(!feof(fk))
     {
             fscanf(fk,"%d",&s->rollno);
             fscanf(fk,"%s",&s->name);
             fscanf(fk,"%d",&s->sub1);
             fscanf(fk,"%d",&s->sub2);             
             printf("Rollno:%d\nName:%s\nSub 1:%d\nSub 2:%d\n",s->rollno,s->name,s->sub1,s->sub2);
             if(feof(fk))
               break;
     }
             fclose(fk);
 }
void retrieve(int rollno)                      //Searching of data function using rollno of student
{
     int i=0;
     struct student *s=malloc(sizeof(struct student));
     FILE *fk=fopen("output.txt","r");
     while(!feof(fk))
     {
             fscanf(fk,"%d",&s->rollno);
             fscanf(fk,"%s",&s->name);
             fscanf(fk,"%d",&s->sub1);
             fscanf(fk,"%d",&s->sub2);
             if(rollno==s->rollno)
             printf("\nName:%s\nSub 1:%d\nSub 2:%d",s->name,s->sub1,s->sub2);                    
      }
      if(feof(fk))
             {
                 printf("Rollno not found !!!");
             } 
      fclose(fk);
 }
int update(int rollno)
{
       struct student *t=malloc(sizeof(struct student));
  FILE *fk=fopen("output.txt","r");   
FILE *ft=fopen("temp.txt","w");   
  while(!feof(fk))
     {
             fscanf(fk,"%d",&t->rollno);
             fscanf(fk,"%s",&t->name);
             fscanf(fk,"%d",&t->sub1);
             fscanf(fk,"%d",&t->sub2);
             if(t->rollno==rollno)
               {
                   printf("\nEnter new data to be updated..\n ");
                   //printf("Enter new name :");
                   //scanf("%s",&t->name);
                   printf("\nEnter new sub1 marks :");
                   scanf("%d",&t->sub1);                 
                   printf("\nEnter new sub2 marks :");
                   scanf("%d",&t->sub2);                                  
                   fprintf(ft,"\n%d",t->rollno);
                   fprintf(ft,"\n%s",t->name);
                   fprintf(ft,"\n%d",t->sub1);
                   fprintf(ft,"\n%d",t->sub2);
               } 
               else
               {                   
                   fprintf(ft,"\n%d",t->rollno);
                   fprintf(ft,"\n%s",t->name);
                   fprintf(ft,"\n%d",t->sub1);
                   fprintf(ft,"\n%d",t->sub2);
               }
               if(feof(fk))
               break;
     }  
  fclose(fk);
  fclose(ft);
  remove("output.txt");
  rename("temp.txt","output.txt");
}
int delete(int rollno)
{
       struct student *t=malloc(sizeof(struct student));
       FILE *fk=fopen("output.txt","r");   
       FILE *ft=fopen("temp.txt","w");   
       while(!feof(fk))
       {                
             fscanf(fk,"%d",&t->rollno);
             fscanf(fk,"%s",&t->name);
             fscanf(fk,"%d",&t->sub1);
             fscanf(fk,"%d",&t->sub2);
             if(t->rollno!=rollno)
               {                   
                   fprintf(ft,"\n%d",t->rollno);
                   fprintf(ft,"\n%s",t->name);
                   fprintf(ft,"\n%d",t->sub1);
                   fprintf(ft,"\n%d",t->sub2);
               }
               if(feof(fk))
               break;
     }  
  fclose(fk);
  fclose(ft);
  remove("output.txt");
  rename("temp.txt","output.txt");
}
