void average(int rollno)                      //average calculation function
{
      int avg,sum=0;
      struct student *s=malloc(sizeof(struct student));
      FILE *fk=fopen("output.txt","r");
      while(!feof(fk))
      {
             fscanf(fk,"%d",&s->rollno);
             fscanf(fk,"%s",&s->name);
             fscanf(fk,"%d",&s->sub1);
             fscanf(fk,"%d",&s->sub2);
             if(rollno==s->rollno)
             {
                   avg=0;
                   sum=0;               
                   sum=s->sub1+s->sub2;
                   avg=sum/2;
                   //fprintf(fk,"\n%d",avg);
                   printf("\nAverage is :%d",avg);                      
             }                         
      }
             fclose(fk);
}