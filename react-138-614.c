// Ashish Kumar 138614

#include<stdio.h>
#include<stdlib.h>

typedef struct POINT{
 int x;
 int y;
}POINT;

typedef struct RECT{
 POINT ul;
 POINT br;
}RECT;

int  IsPointOnRect(RECT r, POINT pt)
{
 int res=0;
 if((r.ul.x==pt.x&&r.br.y==pt.y) || (r.ul.y==pt.y&&r.br.x==pt.x))
 {
  res=1;
  } 

return res;
}
int  IsPointOnOrInRect(RECT r, POINT pt)
{
int res=0;
if((pt.x>=r.ul.x&&pt.x<=r.br.x)&&(pt.y<=r.ul.y&&pt.y>=r.br.y))
 {
  res=1;
  } 
 return res;
}

int main()
{
int res1,res2;
RECT rect;
POINT p1,p2, pt;
printf("Enter Upper left and bottom right points\t");
scanf("%d %d %d %d",&rect.ul.x,&rect.ul.y,&rect.br.x,&rect.br.y);
printf("Enter points coordinate\t");
scanf("%d %d",&pt.x,&pt.y);
res1 = IsPointOnRect(rect, pt);
if(res1==1){
printf("point pt lies on the boundary of rectangle\n");
}
else{ 
printf("point pt doesn't lies on the boundary of rectangle\n");
}
res2 =IsPointOnOrInRect(rect, pt);
if(res2==1){
printf("point pt lies within or on the boundary of rectangle\n");
}
else {
printf("point pt outside lies on the boundary of rectangle\n");
}
}
