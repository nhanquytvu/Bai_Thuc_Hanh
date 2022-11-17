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
{ char s[50], s2[50];

    printf("\n Nhap chuoi:");
	gets(s);
	
	//xoa ki tu s;
	chuanhoa(s);
	printf("\n Chuoi chuan hoa:");	
	puts(s);
    demtu(s);
	demktu(s);
	ghepktu(s,s2);
	if (kiemtradoixung(s)){
		printf("\n Chuoi s1 la chuoi doi xung!");
	}else{
		printf("\n Chuoi s1 la chuoi khong doi xung!");
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
    
