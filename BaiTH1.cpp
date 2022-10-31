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

void hello()
{
	printf("Hello World!");
}

// tinh giai thua ~ kieu tra ve long
long tinhgiaithua(int n)
    {
    printf( "\n Nhap so n: ");
    scanf("%d",n);
       if (n==0)
    return 1;
        
    long giaithua = 1;
        for(int i=1; i<=n; i++)
        giaithua=giaithua*i;
    printf("\n Giai Thua cua mot so nguyen duong n la %d", giaithua);
    return giaithua;
	}


