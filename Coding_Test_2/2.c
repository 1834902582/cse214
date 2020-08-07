#include<stdio.h>
#include<stdlib.h>
typedef srtuct Node node;
struct Node{
int value;
node *next;
};
node *head=NULL;
void menu();
void create();
void display();
void insert_back();
void delete_at();
int back(node *temp);
void merge();
node* delete_value(node *temp,int key);




int main (){

menu();
return 0;

}
void menu(){
int choice;
    do
    {
        system("cls");
        printf("\nMain Menu\n");
        printf("\nChoose one option from the following list ...\n");
        printf("\n===============================================\n");
        printf("1. Insert Back\n");
        printf("2. Delete Value\n");
        printf("3. Delete At\n");
        printf("4. Back\n");
        printf("5. Merge\n");
        printf("6. Display\n");
        printf("7. Close\n");
        printf("\n");
        printf("\nEnter your choice:\n");
        scanf("%d", &choice);

         if(choice<=0 || choice>11)
        {
            printf("Invalid Choice.\nPlease Insert Between 1 to 8\n");
            getchar();
            printf("\nPress Enter to Continue");
            getchar();

        }
        else if(choice==1)
        {
            printf("~~~~\n Singly  Linked List.\n~~~~");

       insert_back ();
            getchar();
            printf("\n\nPress Enter to Continue");
            getchar();
        }
        else if(choice==2)

        {
             delete_value();
            getchar();
            printf("\nPress Enter to Continue");
            getchar();
        }
        else if(choice==3)
        {
        delete_at();
            getchar();
            printf("\nPress Enter to Continue");
            getchar();
        }
        else if(choice==4)
        {
          printf("List Back: %d\n",back(head));
            getchar();
            printf("\nPress Enter to Continue");
            getchar();
        }
        else if(choice==5)
        {

            merge();
            getchar();
            printf("\nPress Enter to Continue");
            getchar();
        }
        else if(choice==6)
        {
        display();
        }

    }
while(choice!=7);
}



void create(){
node *temp,*newhead;
temp=(node*)malloc(sizeof(node));
if(temp==NULL){
printf("Empty\n");
}
printf("Enter the value:");
scanf("%d", &temp->value);
temp->next=NULL;
if(head==NULL){
    head=temp;
}
else{
    newhead=head;
    while(newhead->next!=NULL){
        newhead=newhead->next;
    }
    newhead->next=temp;
}
}

void display(){
node *temp, *head;
if(head==Null){
    printf("Empty\n");
    return;
}
while(temp!=NULL){
    printf("%d\n", temp->value);
    temp=temp->value;
}
}
void insert_back(){
node *new_head;
node *temp=(node*)malloc(sizeof(node));
if(temp==NULL){
    printf("Empty\n");
    return;
}

printf("Enter the value:");
scanf("%d", &temp->value);
temp->next=NULL;
if(head==NUll)
{
    head=temp;
}
else{

    new_head=head;
    while(new_head->next!=NULL){

    new_head=new_head->next;
}
  new_head->next=temp;
}
}
void delete_at(){

int i, pos;
node *temp,*t;
if(temp==NULL){
    printf("Empty\n");
    return;
}
else
printf("Enter the position:\n");
scanf("%d",&pos);
if(pos==0)
{
t=head;
head=head->next ;
printf("nThe deleted element is:%d",t->value  );
free(t);
}
else
{
t=head;
for(i=0;i<pos;i++) {
temp=t;
t=t->next ;
if(t==NULL)
{
printf("nPosition not Found:n");
return;
}
}
temp->next =t->next ;
printf("nThe deleted element is:%d",t->value );
free(t);
    }
}


node* delete_value(node *temp,int key){
if(temp){
node *head=temp, *prev;
while(temp){
if(temp->value==key){
  if(head==temp){
   head=temp->next;
   free(temp);
   return temp;
  }
  else{
   prev->next=temp->next;
   free(temp);
   return head;
  }
}
prev=temp;
temp=temp->next;
}

printf("Node not found\n");
return head;
}
printf("Underflow Linked List\n");
return temp;
}
int back(node *temp){
if (temp!=NULL){
        while(temp->next!=NULL){
            temp=temp->next;
        }
    return temp->value;
}
return 0;
}


void merge()
{
    node *list1=create();
    node *list=create();
    	node *temp1 = head1;
        node *temp2 = head2;
    	head1=NULL;
    	Head2=NULL;
    	struct node *list1 = NULL;
    	struct node *list2 = NULL;

    	while(temp1!=NULL && temp2!=NULL)
    	{

        		list1=temp1->next;

        		temp1->next=temp2;

        		if(list1!=NULL)
        		{
            			list2=temp2->next;
            			temp2->next=list1;
		        }
        		temp1=list1;
        		temp2=list2;
    	}
}
