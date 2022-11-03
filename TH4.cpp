#include<stdio.h>
void nhap(int a[100][100], int m, int n);
void xuat(int a[100][100], int m, int n);
int timMax(int x[100][100], int m, int n);
int timMin(int x[100][100], int m, int n);


int main()
{
	int a[100][100];

	int  m, n, i, j, k, l, max, min ;
	printf("\n NHap so dong m:");
	scanf("%d", &m);
	printf("\n NHap so cot n:");
	scanf("%d", &n);
	
	

	nhap(a,m,n);
	xuat(a,m,n);
	timMax(a,m,n);
	timMin(a,m,n);
		printf("\n Max = %d", timMax(a, m, n));
		printf("\n Min = %d", timMin(a, m, n));
return 0;
}

//nhap ma tran ~ mang 2 chieu
void nhap(int a[100][100], int m, int n)
{	
	for (int i=0;i<m;i++)
	   {
	   	  for (int j=0;j<n;j++)
	   	  {
	   	     printf("\n Nhap a[%d][%d]:", i, j);
	   	     scanf("%d",&a[i][j]);
	   	  }
	  }
}

//xuat ma tran theo cot n ~ mang 2 chieu
void xuat(int a[100][100], int m, int n)
{
	printf("\n Mang: \n");
	for (int i=0;i<m;i++)
	   {
	   	  for (int j=0;j<n;j++)
	   	  {
	   	  	printf("%d", a[i][j]);
	   	  	printf("\n");
	   	  }
	   	}
}
// max min
//max
int timMax(int x[100][100], int m, int n)
{
	int max = x[0][0];
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(max<x[i][j])
			{
				max = x[i][j];
			}
		}
	}


	return max;
}

//min
int timMin(int x[100][100], int m, int n)
{
	int min = x[0][0];
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(min>x[i][j])
			{
				min = x[i][j];
			}
		}
	}
	
	return min;
}
	
	
	
	
	
	
