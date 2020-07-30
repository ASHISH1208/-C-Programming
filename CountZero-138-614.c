//Ashish Kumar 138614
#include<stdio.h>
#include<stdlib.h>
int CountZeroBits(unsigned char * a)
{
	long digit,countnum0s=0,countnum1s=0,numBits;
        unsigned char *b=a;
	if(b[0]=='0'&&b[1]=='x'){b=a+2; digit=strtol(b,'\0',16);numBits=(sizeof(digit));printf("%s\t,%ld\t,%ld\n",b,numBits,digit);}//

        else if(b[0]=='o'){b=a+1;numBits=(sizeof(b)*3);digit=strtol(b,'\0',8);}// Nos. of 0's bits can be either based on trailing and with previous one.

	else if(b[0]=='0'&&b[1]=='b'){b=a+2;digit=strtol(b,'\0',2);} // Nos. of 0's bits is clear
	
	else { digit =atoi(a);}
	 while(digit)
	 {
	  if(digit&1){countnum1s++;}
          else{countnum0s++;}
          digit>>=1;
	 }
         if(a[0]=='0'||a[0]=='o'&&a[1]=='x'){return numBits-countnum1s;}
         else return countnum0s;
}
int main(){
	unsigned char str[100];
	scanf("%s",str);
	printf("%d\n",CountZeroBits(str));
}
