#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3];
	int i,j,m,n;
	printf("enter the  values");
	
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		scanf("%d \t %d",&a[i][j]);
		
	}
	for(i=0;i<3;i++){
	
	for(j=0;j<3;j++)
	{
		printf("matrix elements of A: %d \t",a[i][j]);
		
		
	}
	printf("\n");}
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		printf("matrix elements of B %d \t",b[i][j]);
		
	}
	printf("\n");
	for(i=0;i<m;i++){
	
	for(j=0;j<n;j++)
	{
	
	c[i][j]=a[i][j]+b[i][j];
	}
}
	{
		printf("addition of two matrix is: %d ",c[i][j]);
		
	}
	return 0;
}
