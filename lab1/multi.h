#define s 50
int multi(int m1[s][s],int m2[s][s],int m3[s][s],int r1,int c1,int r2,int c2)
{
	int i,j,k;
	for(i=0;i<r1;i++)
		for(j=0;j<c2;j++)
			for(k=0;k<c1;k++)
				m3[i][j]+=m1[i][k]*m2[k][j];
}
