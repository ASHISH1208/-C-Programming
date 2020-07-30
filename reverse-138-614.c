// Ashish Kumar 138614
#include<stdio.h>
#include<string.h>
void  ReverseString(char *pStr)
{

 int len = strlen(pStr);
 char *fptr=pStr,*lptr=pStr+len-1,*tptr;
 while((*fptr)!=(*lptr))
 {
   *tptr=*fptr;
   *fptr++=*lptr;
   *lptr--=*tptr;
 }
fptr=tptr=lptr=NULL;
printf("%s\n",pStr);
}

int main()
{
 char str[100];
 scanf("%[^\n]s",str);
 ReverseString(str);
}
   

