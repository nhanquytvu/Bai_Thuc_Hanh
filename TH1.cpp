#include <stdio.h>
#include <conio.h>
void hello();
long tinhgiaithua(int n);
int tong (int n);
int DienTichHCN (int n);
int timUSCLN (int a, int b);
int ktnt( int n);
void KTNT(int n);
void TongNT(int n);
void hoanvi(int*,int*);

int main()
{
	 hello();
	 int a, b, e, f, n, g, i, j, x, gt, sum, DT;
	 tinhgiaithua(gt);
	 tong(sum);
	 DienTichHCN(DT);
	 
	 //USCLN
	 printf("\n Nhap so nguyen duong thu nhat can tim uoc chung :"); 
	 scanf("%d",&e);
	 printf("\n Nhap so nguyen duong thu hai can tim uoc chung :"); 
	 scanf("%d",&f);
	 printf("\n UOc chung lon nhat cua %d va %d la %d",e,f,timUSCLN(e,f));
	
	//ktnt
	 printf("\n Nhap so nguyen duong can kiem tra :"); 
	 scanf("%d",&g);
	 if (ktnt(g)==1) 
	 printf("\n So nguyen duong %d la so nguyen to",g);
	 else 
	 printf("\n So nguyen duong %d khong phai so nguyen to",g);
	
	//hoan vi
	 printf("\n Nhap so nguyen a can hoan vi ="); 
	 scanf("%d",&i);
	 printf("\n Nhap so nguyen b can hoan vi ="); 
	 scanf("%d",&j);
	 hoanvi(&i,&j);
	 printf("\n Sau khi hoan vi thi a=%d va b=%d",i, j);
	
	
	printf("\n Nhap so nguyen duong n:"); 
	scanf("%d", &n);
	while (n<1 || n>20)
	{
	  printf("\n Nhap sai roi! Nhap lai n :"); 
	  scanf("%d",&n);
	}
	    ktnt(n);
	    KTNT(n);
	    TongNT(n);

	 
	
	 return 0;
}
// 1. hello world kieu void
void hello()
{
	printf("Hello World!");
}

// 2. tinh giai thua ~ kieu tra ve long
long tinhgiaithua(int n)
    {
     printf( "\n Nhap so n: ");
     scanf("%d",&n);
       if (n==0)
return 1;
        
     long giaithua = 1;
        for(int i=1; i<=n; i++)
        giaithua=giaithua*i;
     printf("\n Giai Thua cua mot so nguyen duong %d la %d", n, giaithua);
return giaithua;
	}
// 3. tinh tong 2 so nguyen duong
int tong (int n)
    {
	int a, b;
	int tong=0;
     printf("\n Nhap so nguyen duong a:");
     scanf(" %d", &a);
     printf("\n Nhap so nguyen duong b:");
     scanf(" %d", &b);
     tong=a+b;
     printf("\n Tong 2 so nguyen duong a va b la %d + %d = %d", a, b, tong);
return 0;
     }
 // 4. tinh dien tich hinh chu nhat
int DienTichHCN (int n)
    {
	 int a, b;
	 int DT=1;
     printf("\n Nhap chieu dai a la:");
     scanf(" %d", &a);
     printf("\n Nhap chieu rong b la:");
     scanf(" %d", &b);
     DT=a*b;
     printf("\n Dien Tich HCN co chieu dai a la %d va chieu rong b la %d = %d", a, b, DT);
return 0;
     }

// 5. tim USCLN cua hai so nguyen
int timUSCLN (int a, int b)
{
	int x;
	if (a==0 || b==0) 
	    x=a+b;
	else while (a!=b)
	{
		if (a>b) 
	      a-=b;
		else b-=a;
	}
	    x=a;
	return x;
}

// 6. kiem tra so nguyen to
int ktnt (int a)
{
	int i,dem=0;
	for(i=2;i<=a;i++)
	{
		if (a%i==0) dem++;
	}
	return dem;
}

// 7. hoan vi a va b
void hoanvi(int *a, int *b)
{
	int tam=0;
	tam=*a;
	*a=*b;
	*b=tam;
}

// 8.1 kiem tra so n co phai SNT
void KTNT (int n)
{
	if (ktnt(n)==1) 
	    printf("\nSo nguyen duong n la so nguyen to");
	else                  
	    printf("\nSo nguyen duong n khong la so nguyen to");
}

// 8.2 Tinh tong cac so nguyen to tu 1 den n
void TongNT(int n)
{
    int i,tongSNT=0;
	for (i=1;i<=n;i++)
	{
   	  if (ktnt(i)==1) 
		tongSNT = tongSNT + i;
	}	
    printf("\n Tong cac so nguyen to tu 1 den %d = %d",n,tongSNT);
}
