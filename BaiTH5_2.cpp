#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <cstdlib>
int xoakt(char s[50]);
int xoa(char s[90], int vitrixoa);
int chuanhoa(char s[50]);
int demtu(char s[50]);
int demktu(char s[50]);
void ghepktu(char s[50], char s2[50]);
int kiemtradoixung(char s[50]);
int main()
{ char s[50], s2[50], key;
while(true)
{
system("cls");
printf("************************************\n");
printf("**      THAO TAC TREN CHUOI        **\n");
printf("** 1. Nhap va chuan hoa chuoi      **\n");
printf("** 2. Dem so tu trong  	chuoi      **\n");
printf("** 3. Ghep chuoi                   **\n");
printf("** 4. Kiem tra doi xung            **\n");
printf("** 5. In chuoi dao nguoc           **\n");
printf("** 0. Thoat                        **\n");
printf("*************************************\n");
fflush(stdin);
printf("\n \t\t AN PHIM CHON: ");
scanf("%d",&key);
switch(key)
{
case 1:
fflush(stdin);
//goi ham de thuc hien cong viec tuong ung
	char s[50], s2[50];
	printf("\n Nhap chuoi: ");
	gets(s);
//	xoakt(s);
	chuanhoa(s);
	printf("\n Chuoi chuan hoa:");
	puts(s);
printf("\nBam phim bat ky de tiep tuc!");
getch();
break;
case 2:
//goi ham thuc de hien cong viec tuong ung
demtu(s);
printf("\nBam phim bat ky de tiep tuc!");
getch();
break;
case 3:
//goi ham thuc de hien cong viec tuong ung
ghepktu(s,s2);
printf("\nBam phim bat ky de tiep tuc!");
getch();
break;

case 4:
printf("\nBam phim bat ky de tiep tuc!");
//goi ham thuc de hien cong viec tuong ung
break;
case 5:
printf("\nBam phim bat ky de tiep tuc!");
//goi ham thuc de hien cong viec tuong ung
getch();
break;
case 0:
exit(1);
default:
printf("\nKhong co chuc nang nay!");
printf("\nBam phim bat ky de tiep tuc!");
getch();
break;
}
}
}


// xoa ki tu
int xoa(char s[90], int vitrixoa)
{
	int n=strlen(s);
	for(int i=vitrixoa; i<n; i++)
	    
		s[i]=s[i+1];   
	    s[n-1]='\0';
	    
}

int xoakt(char s[50])
{
	for(int i=0; i<strlen(s); i++)
	   {
	    if (s[i]==' '&& s[i+1]==' ')
	        {
	        	xoa(s,i);
	        	i--;
	        }
	    if ( s[0]==' ')
	       xoa(s,0);
	    if (s[strlen(s)-1]==' ')
	       xoa(s, strlen(s)-1);
       }
}

// chuan hoa
int chuanhoa(char s[50])
{
	int i=0;
	strlwr(s);
	xoakt(s);
	s[0]=s[0]-32;
	for(int i=0; i<strlen(s); i++)
	   {
	   	  if(s[i]==' '&& s[i+1]!=' ')
	   	       s[i+1]=s[i+1]-32;
	   	}
}

// dem tu
int demtu(char s[50])
{
	int demtu=1;
	strlwr(s);
	for (int i=0; i<strlen(s); i++)
	    {
		   if (s[i]==' ')
		      demtu++;
		}
	    printf("\n So tu %d",demtu);
}

// dem ktu
int demktu(char s[50])
{
	int demkytu=0;
	char c,c1;
	printf("\n Nhap mot ki tu:= ");
	scanf("%c",&c);
	     fflush(stdin);
	strupr(s);
    for ( int i=0; i< strlen(s); i++)
         {
         	if(s[i]==toupper(c))
         	   demkytu++;
          }
          printf("\n So ky tu %d", demkytu);
}

//ghep
void ghepktu(char s[50],char s2[50])
{
	int i, j, size, size1, size2;
	   fflush(stdin);
	   printf("\n Nhap chuoi S2:");
	   gets(s2);
	   chuanhoa(s2);
	   size1 = strlen(s);
	   size2 = strlen(s2);
	   size = size1 + size2;
	   j=0;
// s[size1]=" "
     for (i = size1; i<size; i++)
     {
     	s[i] = s2[j];
     	    j++;
      }
        s[i] = '\0';
      printf("\n Ket qua sau khi ghep chuoi la: \n ");
      printf("%s",s);
}

//ktra doi xung
int kiemtradoixung(char s[50])
{
		// 1 -> doi xung
	// 0 -> khong doi xung
	// TITT
	size_t len = strlen(s);
	for(int i=0; i<len/2; i++){
		if(s[i]!=s[len-i-1])
			return 0;
	}
	return 1;
}
