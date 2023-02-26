#include<stdio.h>
#include<stdlib.h>
#define TABLE_SIZE ;
//structure of has table node
struct node
{
            int data;
           struct node *next;
};
//arry of pinter of node type
struct node *head[TABLE_SIZE]={NULL},*c;
//insertion or buiding of hash table

void insert()
{
  int i,key;
  printf("\nenter a value to insert into hash table\n");
  scanf("%d",&key);
  i=key%TABLE_SIZE ;
  struct node *newnode=(struct node *)malloc(sizeof(struct node));
  newnode->data=key;
  newnode->next=NULL;
  if(head[i]==NULL)
  head[i]= newnode;
  else
  {
    c=head[i];
    while(c->next !=NULL)
    {
      c=c->next;
    }
    c->next=newnode;
  }
}
//function to search an element in the hash table
void search ()
{
  int key ,index ;
  printf("\nenter the element to search \n");
  scanf("%d",&key);
  index=key%TABLE_SIZE ;
  if(head[index]==NULL){
  printf("\n search element not found\n");}
  else{
    for(c=head[index];c!=NULL;c=c->next)
    {
      if(c->data==key)
    
    {
      printf("search element found in the list at index %d\n ",index);
      break;
    }
  }
     if(c==NULL)
     printf("\nsearch element not found \n");
   }

   }
//function to display the has table
void display(){
  int i;
  for(i=0;i<TABLE_SIZE ;i++){
    printf("\n");
    if(head[i]==NULL){
      continue;
    }
    else{
              for(c=head[i];c!=NULL;c=c->next)
              printf("->%d",c->data);
    }
  }
}
int main()
{
  int opt,key;
  while(1)
  {
    printf("\npress 1.Insert\t 2.Display \t3. Search \t4.Exit");
    switch(opt){
      case 1:
      insert();
      break;
      case 2:
      display();
      break;
      case 3:
      search();
      break;
      case 4:
      exit(0);
    }
  }
}