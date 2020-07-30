// Ashish Kumar 138614
#include<stdio.h>
#include<stdlib.h>
 void  print_freq(char  *line)
{
  int res[256]={0},i;
  while(*line)
  {
   if(*line!=' '){
   res[*line]++;}
   line++;
  }
  printf("Frequecy of alphabets in string are: \n");
  for(i=0;i<256;i++)
   {
    if(res[i]!=0)
    {
     printf("%c: %d times\n",(char)i,res[i]);
    }
   }
}

int main(){
 char str[100];
 scanf("%[^\n]s",str);
 print_freq(str);
}
