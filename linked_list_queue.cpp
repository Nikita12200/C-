#include<iostream>
using namespace std;
struct Node{
	int info;
	Node*next;
}*front,*newptr,*save,*ptr,*rear;

Node*create_new_node(int n){
	ptr=new Node;
	ptr-> info=n;
	ptr->next=NULL;
	return ptr;
}
void insert(Node*np){
	if(front==NULL){
		front=rear=np;
	}
	else{
		rear->next=np;
		rear=np;
	}
}
void delnode_Q(){
	if(front==NULL){
		cout<<"UNDERFLOW";
	}
	else{
		ptr=front;
		front=front->next;
		delete ptr;
	}
}
void display(Node*np){
	while(np!=NULL){
		cout<<np->info<<"->";
		np=np->next;
	}
	cout<<"\n";
}

int main(){
	front=rear=NULL;
	int inf;
	char ch='y';
	while(ch=='Y'||ch=='y'){
		cout<<"Enter info for the new code: ";
		cin>>inf;
		newptr=create_new_node(inf);
		if(newptr==NULL){
			cout<<"\ncannot create new node!!ABORTING\n";
			exit(1);
			}
			insert(newptr);
			cout<<"\nNow the new linked list is: \n";
			display(front);
			cout<<"\nPress Y or y to enter new nodes, N to exit....";
			cin>>ch;
		}
	   char ans;
	   ans='y';
		while(ans=='y'||ans=='Y'){
		
		cout<<"want to delete an element from stack:\n ";
	
		cin>>ans;
            delnode_Q();
			display(front);
	}
		return 0;
}













