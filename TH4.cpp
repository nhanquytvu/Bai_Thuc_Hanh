#include<stdio.h>
void nhap(int a[100][100], int m, int n);
void xuat(int a[100][100], int m, int n);
void timMax(int a[100][100], int m, int n);
void timMin(int a[100][100], int m, int n);
int ktnt(int a);
void TongNT(int a[100][100], int m, int n);
void timx (int a[100][100], int m, int n ,int x);



int main()
{
	int a[100][100];

	int  m, n, i, j, k, x , l, max, min, ktnt;
	printf("\n NHap so dong m:");
	scanf("%d", &m);
	printf("\n NHap so cot n:");
	scanf("%d", &n);
	
	

	nhap(a,m,n);
	xuat(a,m,n);
	timMax(a,m,n);
	timMin(a,m,n);
	
    TongNT(a,m,n);
	timx(a,m,n,x);
		
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

void TongNT(int a[100][100], int m, int n)
{ 
        int i,j,dem=0;
	 int tong=0;
  	 int demktnt=0;
	 for(i=0;i<n;i++)
	    { 
	      for(int j=0; j<n; j++)
	      {
	      
 		  if (ktnt(a[i][j])==1) 
		      demktnt++; 
		    if (ktnt(a[i][j])==1) 
		       tong=tong+a[i][j];
          }

	    }
    printf("\n \n Co %d phan tu la so nguyen to trong mang a",demktnt);
    printf("\n \n Tong cac phan tu la so nguyen to trong mang a= %d",tong);
}

//tim va in phan tu x trong ma tran
    //tim phan tu bang x
void timx (int a[100][100], int m, int n ,int x)
{    
     printf("\n\n Nhap x="); 
		 scanf("%d",&x);
	int i,dem=0;
	for (i=0;i<n;i++)
	{
		 for(int j=0; j<n; j++)
		 {
		 
		if (a[i][j]==x) 
		  printf("\n\n Gia tri %d cua phan tu a[%d][%d] bang gia tri cua x",x,i,j);
		if (a[i][j]==x) 
		  dem++;
	     }  
	}
    if (dem==0) printf("\n\n Khong co gia tri cua phan tu nao trong mang a bang x");
}
