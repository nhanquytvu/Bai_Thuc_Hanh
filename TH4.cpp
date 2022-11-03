#include<stdio.h>
void nhap(int a[100][100], int m, int n);
void xuat(int a[100][100], int m, int n);
void timMax(int a[100][100], int m, int n);
void timMin(int a[100][100], int m, int n);
int ktnt(int a);
void TongNT(int a[100][100], int m, int n);



int main()
{
	int a[100][100];

	int  m, n, i, j, k, l, max, min, ktnt;
	printf("\n NHap so dong m:");
	scanf("%d", &m);
	printf("\n NHap so cot n:");
	scanf("%d", &n);
	
	

	nhap(a,m,n);
	xuat(a,m,n);
	timMax(a,m,n);
	timMin(a,m,n);
	
    TongNT(a,m,n);
	
		
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
void timMax(int a[100][100], int m, int n)
{
	int max = a[0][0];
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(max<a[i][j])
			{
				max = a[i][j];
			}
		}
	}
	printf("\n Max = %d", max);
}

//min
void timMin(int a[100][100], int m, int n)
{
	int min = a[0][0];
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(min>a[i][j])
			{
				min = a[i][j];
			}
		}
	}
printf("\n Min = %d", min);	

}

     //dem va tinh tong cac phan tu nguyen to
int ktnt(int a)
{
	    int demktnt=0;
	    int i;
	        for ( i =2; i<=a; i++)
	            {
	            	if (a%i==0)
	            	demktnt++;
	            }
	return demktnt;
}
	
	
	
	
	
	
