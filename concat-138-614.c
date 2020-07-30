// Ashish Kumar 138614
#include<stdio.h>
#define concat(STR1,STR2,delimiter) STR1 delimiter STR2

int main()
{
printf("%s\n", concat("class","dummy","_"));
printf("%s\n", concat("one","two","/"));
}
