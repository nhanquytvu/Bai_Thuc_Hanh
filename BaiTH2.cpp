#include "stdio.h"
void Nhapmang1c ( int a[10], int n);
void Xuatmang1c ( int a[10], int n);
int tim_max (int a[], int n);
int Tich_mang(int a[], int n);
int main()
    {
    int a[10], n;
        printf("\n Nhap so phan tu n:=");
        scanf("%d", &n);
        Nhapmang1c(a,n);
        Xuatmang1c(a,n);
        tim_max(a,n);
        Tich_mang(a,n);
        
    
return 0;
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
int tim_max (int a[], int n)
     {
     	int i=1;
     	int max=a[0];
     	while (i<n)
     	  {
     	  	if (a[i]>max)
     	  	max=a[i];
     	  	i++;
     	  }
      printf("\n Gia tri lon nhat trong mang la: %d",max);
return max;
	 }  
	 // tich
int Tich_mang(int a[], int n)
	 {
       int Tich=1;
       for(int i = 0; i<n ; i++)
       Tich=Tich*a[i];
       printf("\n Tich trong mang la: %d",Tich);
return Tich;
     }
     //dem va tinh tong cac phan tu nguyen to
