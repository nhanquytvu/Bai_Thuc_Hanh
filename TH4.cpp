#include<stdio.h>
void nhap(int a[10][10], int m, int n);
void xuat(int a[10][10], int m, int n);


int main()
{
	int a[10][10];

	int m, n, i, j, k, l ;
	printf("\n NHap so dong m:");
	scanf("%d", &m);
	printf("\n NHap so cot n:");
	scanf("%d", &n);

	nhap(a,m,n);
	xuat(a,m,n);
	
return 0;
}

//nhap ma tran ~ mang 2 chieu
void nhap(int a[10][10], int m, int n)
{	
	for (int i=0;i<m;i++)
	   {
	   	  for (int j=0;j<n;j++)
	   	  {
	   	  printf("\n Nhap a[%d][%d]:", i, j);
	   	  scanf("%d",*a+i*n+j);
	   	  }
	  }
}

//xuat ma tran theo cot n ~ mang 2 chieu
void xuat(int a[10][10], int m, int n)
{
	for (int i=0;i<m;i++)
	   {
	   	  for (int j=0;j<n;j++)
	   	  {
	   	  	printf("%10d -- --", *(*a+i*n+j));
	   	  	printf("\n");
	   	  }
	   	}
	   	}

	
	
	
	
	
	
	
