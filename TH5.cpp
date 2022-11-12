#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
int xoa(char s[100], int vitrixoa);
int xoakt(char s[100]);
int chuanhoa(char s[100]);
int demtu(char s[100]);
int demktu(char s[100]);
void ghepktu(char s[100], char s2[100]);
int main()
{
	char s[100], s2[100];
    printf("\n Nhap chuoi:");
	gets(s);
	
	//xoa ki tu s;
	chuanhoa(s);
	printf("\n Chuoi chuan hoa:");	
	puts(s);
    demtu(s);
	demktu(s);
	ghepktu(s,s2);	
}

// xoa ki tu
int xoa(char s[100], int vitrixoa)
{
	int n=strlen(s);
	for(int i=vitrixoa; i<n; i++)
	    {
		s[i]=s[i+1];   
	    s[n-1]='\0';
	    }
}

int xoakt(char s[100])
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
int chuanhoa(char s[100])
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
int demtu(char s[100])
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
int demktu(char s[100])
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
void ghepktu(char s[100],char s2[100])
{
	int i, j, size, size1, size2;
	   fflush(stdin);
	   printf("\n Nhap chuoi S1:");
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
     	
     	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
