// Ashish Kumar 138614


#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
 int data;
 struct Node *link;
}N;

N*  insertAtPosition(N* root,int pos,int info)
{ 
  int index=1;
  N* temp = root;
  N* new=(N*) malloc (sizeof(N));
 new->link=NULL:
  if(new==NULL){
   printf("Memory cant allocated\n");
   exit(0);
  }
  new->data=info;
  new->link=NULL;
 if(temp == NULL||pos==1)
 {
   new->link=root;
   return new;
 }
 else
 while(temp->link) 
 {
  if(pos<index)
  {
   new->link=temp->link;
   temp->link=new;
  }
 index++;
 }
 temp->link=new;
 return root;
}

N*  insertAfterNode(N* root,int node_val,int info)
{
  N* temp = root;
  N* new=(N*) malloc (sizeof(N));
  new->link=NULL;
  if(new==NULL){
   printf("Memory cant allocated\n");
   exit(0);
  }
  new->data=info;
  new->link=NULL;
 if(temp == NULL)
 {
   new->link=root;
   return new;
 }
 else
 while((temp->link)&&(temp->data==node_val))
 {
  new->link=temp->link;
  temp->link=new;
 }
 temp->link=new;
return new;
}

N*  deleteAtPosition(N* root,int pos)
{
 int index=2,flag=0;
  N * curr =root,*temp=root->link;
  if(temp==NULL)
  {
   printf("No Node exist\n");
   exit(0);
  }
  else 
  {
   if(pos==1)
   {
    root=root->link;
    temp=curr=NULL;
    return root;
   }
  else{
   while(curr->link)
  {
   if(pos==index)
   {
    curr->link=temp->link;
    temp=NULL;
    flag=1;
   }
    if(flag==1)
   {
   break;
   }
   curr=temp;
   temp=temp->link;
   index++;
  }
  }
 }
return root;
}
N*  deleteAfterNode(N* root,int val)
{
 int index=2,flag=0;
  N * curr =root;
 N*temp=root->link;
  if(temp==NULL)
  {
   printf("No Node exist\n");
   exit(0);
  }
  else 
  {
   if(temp==NULL)
   {
    root->link=NULL;
    return root;
   }
  else{
       while (curr->link)
       {
        if(curr->link->data==val)
         {
          temp=curr->link;
          curr->link=temp->link;
          temp=NULL;
         }
        }
      }
    }
 return root;
}


N* reverse(N*root)
{
 N* temp=NULL, *next=NULL;
 while(root)
{
 next=root->link;
 root->link=temp;
 temp=root;
 root=next;
}
return temp;
}

N* merge (N* link1, N* link2)
{
  N* temp= link1;
  if(link1==NULL){return link2;}
  else if(link2==NULL){return link1;}
  while(temp->link)
  {
   temp=temp->link;
  }
  temp->link=link2;
 return link1;
}

void sortedInsert(N *root,  N* new) 
{ 
     N* curr=NULL; 
    if (root == NULL || (root->data >= new->data))
    { 
        new->link = root; 
        root = new; 
    } 
    else
    { 
        curr = root; 
        while (curr->link!=NULL && 
               curr->link->data < new->data) 
        { 
            curr = curr->link; 
        } 
        new->link = curr->link; 
        curr->link = new; 
    } 
} 
N* insert_sort(N* root){
  if(root==NULL)
   {
    printf("No sorting for non existing list\n");
    exit(0);
   }
  N *sorted = NULL; 
  N *curr = root; 
  while (curr != NULL) 
    {  
        N *next = curr->link;
        sortedInsert(sorted, curr); 
        curr = next; 
    } 
    root = sorted; 
} 

N* gen2ll(N*root,N*other)
{
 N* fast=root;
N*slow=root;
 if(root==NULL||root->link==NULL){
    return root;
  }
 while(fast->link)
{
 fast=fast->link->link;
 slow=slow->link;
}
if(fast==NULL)
{
 other=slow;
}
else if(fast->link==NULL)
 {
 other=slow->link;
 }
return root;
}

void display(N*root)
{
N* temp=root;
if(temp==NULL||temp->link==NULL)
{
exit(0);
}
else{
 while(temp)
{
printf("%d->",temp->data);
temp=temp->link;
}
}
}

int main()
{
    int choice,pos,data,node_data;
    N* root =(N*)malloc(sizeof(N));
    N* sec = (N*)malloc(sizeof(N));
    N* thi = (N*)malloc(sizeof(N)); 
  
    root->data = 10; 
    root->link = sec;
    sec->data = 2;  
    sec->link = thi;
    thi->data = 8; 
    thi->link=NULL;
   N* root1=(N*)malloc(sizeof(N));
    N* sec1= (N*)malloc(sizeof(N));
    N* thi1= (N*)malloc(sizeof(N)); 
  
    root1->data = 11; 
    root1->link = sec1;
    sec1->data = 6;  
    sec1->link = thi1;
    thi1->data = 13;
    thi1->link=NULL;
while(1){
printf("=========================================================================");
printf("1.InsertAt Pos 2. InsertAfterNode 3. deleteAt Position 4.deleteAfterNode 5. Reverse 6.Merge 7.insertionsort 8.generateLL\n");
printf("enter your choice:\t");
scanf("%d",&choice);
switch(choice){
case 1:
 printf("Enter position");
 scanf("%d",&pos);
 printf("enter data to insert\t");
 scanf("%d",&data);
 root=insertAtPosition(root,pos,data);
 display(root);
 break;
case 2: printf("Enter Node_data after that new node will be inserted\n");
 scanf("%d",&node_data);
 printf("enter data to insert\t");
 scanf("%d",&data);
 root= insertAfterNode(root,node_data,data);
display(root);
 break;
case 3:
 printf("Enter position to be deleted\n");
 scanf("%d",&pos);
root=deleteAtPosition(root,pos);
display(root);
break;
case 4: 
printf("Enter position after that node will be deleted\n");
 scanf("%d",&pos);
root=deleteAfterNode(root,pos);
display(root);
break;
case 5:
printf("reversal of likedlist is:\n");
root=reverse(root);
display(root);
break;
case 6:
printf("merge of two linked list is\n");
root=merge(root,root1);
display(root);
break;
case 7:
printf("sort of linked list is\n");
root=insert_sort(root);
display(root);
exit;
case 8:
printf("generate two Linked Lists\n");
N* other=NULL;
root=gen2ll(root,other);
display(root);
display(other);
break;
default: exit(0);
}
} 
} 
  



 
    
 

