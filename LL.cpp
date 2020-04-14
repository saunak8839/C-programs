#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct Node{
	int value;
	struct Node* next;
};
Node* head=NULL;
void printList(Node* temp){
	while(temp!=NULL){
		printf("%d->",temp->value);
		temp=temp->next;
	}
}
void input(int data){
	Node* temp=(Node*)malloc(sizeof(struct Node));
	Node* last=NULL;
	temp->value=data;
	temp->next=NULL;
	if(head==NULL){
		head=temp;
	}
	else{
		last=head;
		while(last->next!=NULL)//traversing to end of the list
			last=last->next;
		last->next=temp;
	}
	
}
int main(){
	int n,i,num;
	printf("Enter number of elements\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num);
		input(num);
	}
	printList(head);
	printf("\n");
	printf("Enter new node\n");
	scanf("%d",&num);
	input(num);
	printf("Updated linked list:\n");
	printList(head);
	return 0;
}

