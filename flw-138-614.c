// Ashish Kumar 138614
#include<stdio.h>

int  FindLongestWord(const char *pStr,  char *pWord)
{
 int len=0,maxlen=0,i,pos=0,j=0;
 char *ptr=NULL;
ptr=pStr;

 while(*ptr)
 {  
  len++;
  if(*ptr==' ')
  {
   if(maxlen<len){pos=j+1;maxlen=len;printf("hello");
   len=0;
  }
  ptr++;j++;
 }
 for(i=0;i<maxlen;i++)
{
 pWord[i]= *(pStr+pos+i);
}
pWord[maxlen]='\0';
printf("%d\t%d\t%s",pos,maxlen,pWord+pos);
return maxlen;
}
int main()
{
 char string[100];
 char pWord[100];
 scanf("%[^\n]s",string);
 printf("Maximum length of %s  is %d\n",pWord,FindLongestWord(string,pWord));
}
