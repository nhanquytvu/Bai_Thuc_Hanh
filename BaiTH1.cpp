#include <stdio.h>
void hello();
long tinhgiaithua(int n);

//  xay dung ham in Hello World ~ kieu void

int main()
{
	 hello();
	 tinhgiaithua( 10 );
	 
	 return 0;
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

