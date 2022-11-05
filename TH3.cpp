#include "stdio.h"
void Nhapmang1c ( int a[10], int n);
void Xuatmang1c ( int a[10], int n);
void tim_max (int a[10], int n);
void Tich_mang(int a[10], int n);
int ktnt( int a);
void TongNT(int a[10], int i);
void timx (int a[10], int n ,int x);
void sapxep (int a[10],int n);
void chenx(int a[10],int n, int x);
void Xoa(int a[10], int n);



int main()
    {   int n;
	    do {
    	     printf("\n Nhap so nguyen duong n:");
    	     scanf("%d", &n);
           }  while(n<=1 || n>20);
	 
    	
	  
     int a[10], i, j, k, f, max, x, Tong, ktnt, dem;
         printf("\n Nhap so phan tu n:=");
         scanf("%d", &n);
         Nhapmang1c(a,n);
         Xuatmang1c(a,n);
         tim_max(a,n);
         Tich_mang(a,n);
         TongNT(a,n);
         printf("\n\n Nhap gia tri x ="); 
		 scanf("%d",&x);
	     timx(a,n,x);
	     sapxep(a,n);
     	 chenx(a,n,x);
         Xoa(a,n);
        
	 
     

    }
    // nhap mang 1 chieu
void Nhapmang1c ( int a[10], int n)
     {
     	for (int i=0; i<n; i++)
     	{
     		printf("\n Nhap so phan tu a[%d]= ",i);
     		scanf("%d", &a[i]);
        }
     }
     // xuat mang 1 chieu
void Xuatmang1c ( int a[10], int n) 
{
     	printf("\n\n Cac phan tu co trong mang la:");
     	for (int i=0; i<n; i++)
     	printf("%d ; " ,a[i]);
     	
}
	   
     // tim gia tri lon nhat
void tim_max (int a[10], int n)
{
     	int i,j, max=0;
	 for(i=0;i<n;i++)
	 {
		if (max <= a[i]) 
		max = a[i];
		if (max <= a[i]) 
		j=i;
	 }
      printf("\n Gia tri lon nhat trong mang la: %d",max);
}
  
	 // tich
void Tich_mang(int a[10], int n)
{
       int Tich=1;
       for(int i = 0; i<n ; i++)
       Tich=Tich*a[i];
       printf("\n Tich trong mang la: %d",Tich);
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
	
void TongNT(int a[10], int n)
{ 
        int i,j,dem=0;
	 int tong=0;
  	 int demktnt=0;
	 for(i=0;i<n;i++)
	    {
 		  if (ktnt(a[i])==1) 
		      demktnt++; 
		  if (ktnt(a[i])==1) 
		      tong=tong+a[i];
	
		
	}
	printf("\n \n Co %d phan tu la so nguyen to trong mang a",demktnt);
	printf("\n \n Tong cac phan tu la so nguyen to trong mang a= %d",tong);
}

    //tim phan tu bang x
void timx (int a[10], int n ,int x)
{
	int i,dem=0;
	for (i=0;i<n;i++)
	{
		if (a[i]==x) 
		  printf("\n\n Gia tri %d cua phan tu a[%d] bang gia tri cua x",x,i);
		if (a[i]==x) 
		  dem++;
	}
    if (dem==0) printf("\n\n Khong co gia tri cua phan tu nao trong mang a bang x");
}


    //sap xep mang tang dan
void sapxep (int a[10],int n)
{
  int MIN;
    for(int i=0; i<n-1; i++)
	{
        for(int j=i+1;j<n;j++)
		{
           if(a[i]>a[j])
			{
              MIN=a[i];
              a[i]=a[j];
              a[j]=MIN; 
            }
        }
    }
    printf("\n\n Sap xep lai mang theo gia tri tang dan :");
    for(int i=0;i<n;i++)
	{
printf("\n a[%d]=%d",i,a[i]);
    }
}

    //chen phan tu vao x
void chenx(int a[10],int n, int x)
{
     printf("\n\n Chen gia tri %d cua x vao phan tu a[%d]",x,n);
     a[n]=x;
     printf("\n\n Mang a sau khi chen x:");
     for(int i=0;i<n+1;i++)
     {
     	printf("\n\n a[%d]=%d",i,a[i]);
     }
}

    //xoa cac phan tu tai vi tri i cu the
void Xoa(int a[10], int n)
{
	int k, dem =0;
	printf("\n \n Nhap gia tri k de xoa gtri phan tu tuong ung =");
	scanf("%d",&k);
	for (int f= 0; f<n; f++)
	{
	    for(int i=0; i<n; i++)
	       {
		      if (a[i]==k)
		      { 
		        dem++;
		        for ( int j=i; j<n-1;j++)
		            {
		            	a[j]=a[j+1];
		            }  
		        n--;
			  }
	       }	
		
    }
	if (dem==0)
	{
		printf("\n \n  Khong co phan tu nao trong mang bang k, mang khong doi!");
		printf("\n \n mang a:");
		for ( int i = 0; i<n; i++)
		   {
		   	printf("\n \n a[%d]= %d", i, a[i]);
		   }
	}
	else
	{
		printf("\n \n Mang a sau khi xoa phan co gia tri bang k:");
		for( int i=0; i<n; i++)
		{
			printf("\n \n a[%d] = %d", i, a[i]);
		}
		
	}
}
