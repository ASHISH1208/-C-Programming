//Ashish kumar 138614 
#include<stdio.h>
#include<stdlib.h>

int  GetUniqueElements( const int *ary,  int  count, int *outary)
{
   int i,c=0,j=0;
  for(i=0;i<count;i++)
   {
   if(*(ary+i)!=*(ary+i+1))
   {
    *(outary+j)=*(ary+i);
    c++;j++;
   }
  }
return c;
} 

int main() 
{ 
      int* ary=NULL;
      int n, i; 
      int * outary= NULL;
    printf("Enter number of elements:\t");
    scanf("%d",&n); 

    ary = (int*)malloc(n * sizeof(int)); 

    if (ary == NULL) { 
        printf("Memory not allocated.\n"); 
        exit(0); 
    } 
    else { 
  
        for (i = 0; i < n; ++i) { 
            scanf("%d",&ary[i]);
        } 
    } 
     int res=GetUniqueElements(ary,n,outary);
    printf("Number of unique elements are :%d\t",res);
    printf("\nUnique array elements are:\t"); 
     for(i=0;i<res;i++)
       {
         printf("%d\t",outary[i]);
       }
}
  
