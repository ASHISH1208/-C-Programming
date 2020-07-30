

//Ashish Kumar 138614



// data format for binary - start with 0b1111000.....
// For octal : o12113....
// for decimal:  1327137....
// for hexadecimal: - 0x1331ac.....



#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int CountZeroBits(unsigned char * a)
{
        int flag=0;
	long digit,countnum0s=0,countnum1s=0,numBits;
        unsigned char *b=a;
	if(b[0]=='0'&&b[1]=='x'){b=a+2; digit=strtol(b,'\0',16);flag=1; numBits= (floor(log10(digit) + 1))*4;}// haexadecimal has 4 bits to repersent

        else if(b[0]=='o'){b=a+1;digit=strtol(b,'\0',8);flag=1; numBits= (floor(log10(digit) + 1))*3;}// octal has 3 bits to repersent

	else if(b[0]=='0'&&b[1]=='b'){b=a+2;digit=strtol(b,'\0',2);} // Nos. of 0's bits is clear
	
	else { digit =atoi(a);}
     
	 while(digit&&flag==0)
	 {
	  if(!(digit&1)){countnum0s++;}
          digit>>=1;
	 }
         while(digit&&flag==1)
         {
          if(digit&1){countnum1s++;}
          digit>>=1; 
         }
         if(flag==1){countnum0s=numBits-countnum1s;}
        return countnum0s;
}
int main(){
	unsigned char str[100];
	scanf("%s",str);
	printf("%d\n",CountZeroBits(str));
}
