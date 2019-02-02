#define s 50
int display(int m3[s][s],int r1,int c2)
{
	int i,j;
	for(i=0;i<r1;i++)
		for(j=0;j<c2;j++)
			printf("\nmat[%d][%d] : %d",i,j,m3[i][j]);
	printf("\n");
	return 0;
}
