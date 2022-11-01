#include <stdio.h>
void hello();
long tinhgiaithua(int n);
nt tong (int n);
int DienTichHCN (int n);

//  xay dung ham in Hello World ~ kieu void

int main()
{
	 hello();
	 tinhgiaithua( 10 );
	 tong(10);
	 DienTichHCN(10);
	 return 0;
}
void hello()
{
	printf("Hello World!");
}

// tinh giai thua ~ kieu tra ve long

long tinhgiaithua(int n)
    {
    printf( "\n Nhap so n: ");
    scanf("%d",&n);
       if (n==0)
    return 1;
        
    long giaithua = 1;
        for(int i=1; i<=n; i++)
        giaithua=giaithua*i;
    printf("\n Giai Thua cua mot so nguyen duong n la %d", giaithua);
 return giaithua;
	}

// tinh tong 2 so nguyen duong

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
 // tinh dien tich hinh chu nhat
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
// tim USCLN cua 2 so nguyen a,b

