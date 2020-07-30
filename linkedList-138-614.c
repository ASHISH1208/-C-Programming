// Ashish Kumar 138614

// Ashish Kumar 138614

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
 int data;
 struct Node *link;
}*N;

N*  insertAtPosition(N* root,int pos,int info)
{ 
  int index=1;
  N* temp = root;
  N* new=(N*) malloc (sizeof(N*));
  if(new==NULL){
   printf("Memory cant allocated\n");
   exit(0);
  }
  new.data=info;
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

N*  insertAfterNode(N* root N* Gnode,int info)
{
  N* temp = root;
  N* new=(N*) malloc (sizeof(N*));
  if(new==NULL){
   printf("Memory cant allocated\n");
   exit(0);
  }
  new.data=info;
  new->link=NULL;
 if(temp == NULL||pos==1)
 {
   new->link=root;
   return new;
 }
 else
 while((temp->link)&&(temp==Gnode||temp->data==Gnode->data))
 {
  new->link=temp->link;
  temp->link=new;
 }
 temp->link=new;
return new;
}

N*  deleteAtPosition(N* root,int pos)
{
 int index;
  N * curr=*temp =root;
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
    temp=NULL;
    return root;
   }
  else{
   while(curr->link)
  {
   if(pos<index)
   {
    
    
 

