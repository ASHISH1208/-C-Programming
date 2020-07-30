// Ashish Kumar 138614
#include<stdio.h>
int  word_count(char  *line)
{
 int count_words=0;
 while(*line)
 {
  if((*line ==' ' )|| (*line =='\t')|| (*(line+1) =='\n') || (*(line+1)=='\0'))
   {
    count_words++;
   }
   line++;
 }
return count_words;
}

int main()
{
 char sent[100];
 scanf("%[^\n]s",sent);
 printf("%d",word_count(sent));
}

