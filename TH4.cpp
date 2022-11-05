#include <stdio.h>

void nhap       (int a[40][40], int m, int n);
void xuat       (int a[40][40],int m, int n);
void max        (int a[40][40],int m,int n);
void min        (int a[40][40],int m,int n);
int dem         (int n);
void snt        (int a[40][40],int m,int n);
void timx       (int a[40][40],int m, int n);
void yenngua    (int a[40][40],int m, int n);
void sx         (int a[40][40],int m,int n);
void tong       (int a[40][40],int m,int n);
void chan       (int a[40][40],int m,int n);
void le         (int a[40][40],int m,int n);
int main()
{
	int a[40][40];//Khai bao ma tran a
	int m,n; 
    printf("Nhap so dong: ");
	 scanf("%d", &m);
    while (m<0||m>40)
    {
    	printf("\nNhap so qua lon! Nhap lai so dong:"); 
		scanf("%d", &m);
    }
    printf("\n Nhap so cot: "); 
	scanf("%d",&n);
    while (n<0||n>40)
    {
    	printf("\n Nhap so qua lon! Nhap lai so cot:"); 
		scanf("%d", &n);
    }
    
    nhap(a,m,n);
    xuat(a,m,n);
    max(a,m,n);
    min(a,m,n);
    snt(a,m,n);
    timx(a,m,n);
    yenngua(a,m,n);
    sx(a,m,n);
    tong(a,m,n);
    chan(a,m,n);
    le(a,m,n);
}

//Nhap
void nhap (int a[40][40], int m, int n)
{
     for(int i=0;i<m;i++)
     {
	    for(int j=0;j<n;j++)
	    {
		   printf("\n Nhap a[%d][%d]=",i,j); 
		   scanf("%d",&a[i][j]);
		}
	 }
}

//Xuat
void xuat (int a[40][40], int m, int n)
{
     for(int i=0;i<m;i++)
     {
	    for(int j=0;j<n;j++)
	    {
		   printf("   %d   ",a[i][j]);
		   
		}
		printf("\n \n");
	 }
}

//Max
void max (int a[40][40],int m,int n)
{
    int tam=0,x,y;
    for(int i=0;i<m;i++)
     {
	    for(int j=0;j<n;j++)
	    {
	       if (a[i][j]>=tam) 
	       {
		   tam = a[i][j];
		   x=i;
		   y=j;
		   }
		}
	}
	printf("\n Max trong mang a la a[%d][%d] = %d \n",x,y,a[x][y]);
}

//Min
void min (int a[40][40],int m,int n)
{
    int tam,x,y;
    tam=a[0][0];
    for(int i=0;i<m;i++)
     {
	    for(int j=0;j<n;j++)
	    {
	       if (a[i][j]<=tam) 
	       {
		   tam = a[i][j];
		   x=i;
		   y=j;
		   }
		}
	}
	printf("\n Min trong mang a la a[%d][%d] = %d \n",x,y,a[x][y]);
}

// ktnt
int dem(int n)
{
	int dem1=0;
    for(int i=1;i<=n;i++)
    {
	   if (n%i==0) dem1++;
	}
	return dem1;
}

//ktnt va TongSNT
void snt (int a[40][40],int m,int n)
{
     int x=0,tong=0;
     for(int i=0;i<m;i++)
     {
	    for(int j=0;j<n;j++)
	    {
		   if(dem(a[i][j])==2) 
		   {
		     printf("\n Gia tri %d cua phan tu a[%d][%d] la so nguyen to\n",a[i][j],i,j);
		     tong = tong + a[i][j];
		     x++;
		   }
		}
	 }
	 if (x==0) 
	 printf("\n Khong co gia tri nao trong ma tran a la so nguyen to");
	 else      
	 printf("\n Vay co %d gia tri trong a la so nguyen to va TongSNT : %d",x,tong);  
}



void timx (int a[40][40],int m, int n)
{
     int x, y=0;
     printf("\n \n Nhap gia tri x ="); 
	 scanf("%d",&x);
     for(int i=0;i<m;i++)
     {
	    for(int j=0;j<n;j++)
	    {
		   if (a[i][j] == x) 
		   {
		      printf("\n \n Gia tri x co trong ma tran tai vi tri a[%d][%d]",i,j);
		      y++;
		   }
		}
	 }
	 if (y==0) 
	 printf ("\n \n Gia tri cua x khong co trong ma tran a !");
}

//tim gia tri la yen ngua
void yenngua (int a[40][40],int m, int n)
{
	 int x,y,max;
	 int dem=0,dem1=0;
     for (int k=0;k<m;k++)
     {
     	max=a[k][0];
	    for(int i=0;i<n;i++)
        {
	       if ( a[k][i]<=max) 
	       {
		           max = a[k][i];
		           x=i;
		   }
		}
		for (int j=0;j<m;j++)
		{
		   if (max < a[j][x]) 
		    {
			  dem++;
			}
		}
	    if (dem==0)
			  {    
			  printf ("\n \n Phan tu a[%d][%d] la YEN NGUA !",k,x);
			       dem1++;
		      }
	    dem=0;
	 } 
	 if (dem1==0) 
	 printf("\n \n Khong co gia tri nao la YEN NGUA trong ma tran a !");
}

//Sap xep ma tran a tang dan tu tren xuong & tu trai qua phai
void sx (int a[40][40],int m,int n)
{
	int tam,tam1;
	//sap xep theo thu tu tang dan tu tren xuong
    for(int i=0;i<n;i++)
    {
	   for(int j=0;j<m-1;j++)
	   {
	      for(int k=j+1;k<m;k++)
	      {
		     if (a[j][i]>a[k][i])
		     { 
		        tam=a[j][i];
		        a[j][i]=a[k][i];
		        a[k][i]= tam;
			 }
		  }
		
	   }
	}
	//sap xep theo thu tu tang dan tu trai qua phai
	for(int l=0;l<m;l++)
    {
	   for(int p=0;p<n-1;p++)
	   {
	      for(int q=p+1;q<n;q++)
	      {
		     if (a[l][p]>a[l][q])
		     { 
		        tam1=a[l][p];
		        a[l][p]=a[l][q];
		        a[l][q]= tam1;
			 }
		  }
		
	   }
	}
	printf("\n\n Mang sau khi sap xep la : \n\n");
	for(int r=0;r<m;r++)
     {
	    for(int s=0;s<n;s++)
	    {
		   printf("  %d  ",a[r][s]);
		}
		printf("\n \n");
	 }  
	 
}

//Tinh tong cac phan tu nam tren duong cheo chinh

void tong(int a[40][40],int m,int n)
{
	 int x=0;
	 for(int i=0;i<m;i++)
	 {
	 	for(int j=0;j<n;j++)
	 	{  
		   if (i==j) x=x+a[i][j]; 		
	 	}
	 }
	 printf("\n \n Tong cac phan tu nam tren duong cheo chinh cua ma tran a = %d",x);
}


//Dem cac so chan nam trong tam ggiac duoi cua duong cheo chinh
void chan(int a[40][40],int m,int n)
{
	int dem=0;
	for(int i=0;i<m;i++)
	{
	 	for(int j=0;j<n;j++)
	 	{
		   if (i==j) 
		   {
		   	  for(int k=j+1;k<n;k++)
		   	  {
		   	  	 if (a[i][k]%2==0) 
					  dem++;
		   	  }
		   }
		}
    }
    if (dem==0) 
	printf("\n \n Khong co so chan nam trong tam giac tren cua duong cheo chinh trong ma tran a !");
    else        
	printf("\n \n Co %d phan tu la so chan nam trong tam giac tren cua duong cheo chinh trong ma tran a (khong ke duong cheo chinh) !",dem);
}


void le(int a[40][40],int m,int n)//In ra cac so le trong tam giac tren cua duong cheo phu
{
	printf("\n \n Cac so le nam trong tam giac duoi cua duong cheo phu :");
	printf("\n \n");
	for(int i=0;i<m;i++)
	{
	 	for(int j=0;j<n;j++)
	 	{
		   if (j+i==n-1)
		   {
		       for(int k=j;k<n;k++)
		   	   {
		   	   	  if (a[i][k]%2==1) 
		   	   	  {
		   	   	  	 printf("  %d  ",a[i][k]);
		   	   	  }
		   	   	  
			   }
		   }
	    }
    }
}
