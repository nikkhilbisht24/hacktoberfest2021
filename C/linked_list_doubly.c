#include <stdio.h> 
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};


int main(){
    struct node *head,*newnode,*temp;
    head=0;
    int choice=1;
    while(choice){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d",&newnode->data);
        newnode->prev=0;
        newnode->next=0;
        if(head==0){
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        printf("Do you wanna continue (0,1): ");
        scanf("%d",&choice);
    }

    temp=head;
    printf("The entered data is: ");
    while(temp!=0){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}