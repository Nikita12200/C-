#include<iostream>
using namespace std;

struct Node{
	int info;
	Node*next;
}*top,*newptr,*save,*ptr;

Node*create_new_node(int n){
	ptr=new Node;
	ptr-> info=n;
	ptr->next=NULL;
	return ptr;
}
void push(Node*np){
	if(top==NULL)
	{
		top=np;
	}
	else
	{
		save=top;
		top=np;
		np->next=save;
	}
}
void pop(){
	if(top==NULL)
	{
		cout<<"UNDERFLOW";
	}
	else{
		ptr=top;
		top=top->next;
		delete ptr;
	}
}
void display(Node*np){
	while(np!=NULL){
		cout<<np->info<<"->";
		np=np->next;
	}
	cout<<"!!\n";
}
int main(){
	
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
			push(newptr);
			cout<<"\nNow the new linked list is: \n";
			display(top);
			cout<<"\nPress Y or y to enter new nodes, N to exit....";
			cin>>ch;
		}
		cout<<"want to delete an element from stack:\n ";
		char ans;
		cin>>ans;
		if(ans=='y'||ans=='Y'){
			pop();
			display(top);
		} 
		return 0;
}
