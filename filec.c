#include<stdio.h>
#include<ctype.h>
void main()
{
   FILE *fp1,*fp2;
   char sf[50],df[100],ch;
   printf("Enter source file name: ");
   gets(sf);
   printf("Enter destinantion file: ");
   gets(df);
   fp1=fopen(sf,"r");
   if(fp1==NULL)
   	printf("File doesnot exist");
   else
   {
	fp2=fopen(df,"w");
	while((ch=fgetc(fp1))!=EOF)
	{
	   if(islower(ch))
	    ch=toupper(ch);
	    fputc(ch,fp2);
	}
   }		 
}
/*input- programming is easy
output- PROGRAMMING IS EASY*/
