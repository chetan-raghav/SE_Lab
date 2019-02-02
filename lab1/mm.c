/* 
	Matrix multiplication program
	Date :8/01/2019
	Author :Chetan Raghav
	Version :1.0
*/
#include<stdio.h>
#include<stdlib.h>
#include"validate.c"
#include"multi.h"
#include"display.h"
#define s 50
int main()
{
	int r1,c1,r2,c2,i,j;
	printf("Enter the size of matrix 1: ");
	scanf("%d%d",&r1,&c1);
	if(r1<1||c1<1)               //checking for zero matrix
	{
		printf("Matrix can not be of zero size!!");
		exit(0);
	}
	printf("\nEnter the size of matrix 2 :");
	scanf("%d%d",&r2,&c2);
	if(r2<1||c2<1)
	{
		printf("matrix can't be of zero size!!");
		exit(0);
	}
	int m1[s][s],m2[s][s],m3[s][s]={0};
	if(c1!=r2)                     //checking if matrices are multiplication compatible
	{
		printf("Matrix multiplication not possible !!");
		exit(0);
	}
	else
	{
		printf("Enter matrix 1 :");
		for(i=0;i<r1;i++)       //taking input matrix1
			for(j=0;j<c1;j++)
				scanf("%d",&m1[i][j]);
		printf("Enter matrix 2 :");
		for(i=0;i<r2;i++)       //input matrix2
			for(j=0;j<c2;j++)
				scanf("%d",&m2[i][j]);
		multi(m1,m2,m3,r1,c1,r2,c2);
		display(m3,r1,c2);
	}

}
