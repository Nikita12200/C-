#include<iostream>
using namespace std;

struct Node{
	int info;
	Node*next;
}*start,*newptr,*save,*ptr;

Node*create_new_node(int);
void insert_beg(Node*);
void display(Node*);


Node*create_new_node(int n){
	ptr=new Node;
	ptr-> info=n;
	ptr->next=NULL;
	return ptr;
}
void insert_beg(Node*np){
	if(start==NULL){
		start=np;
	}
	else{
		save=start;
		start=np;
		np->next=save;
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
	start=NULL;
	int inf;
	char ch='Y';
	while(ch=='y'||ch=='y'){
		cout<<"Enter the information for new node: ";
		cin>>inf;
		newptr=create_new_node(inf);
		if(newptr!=NULL){
			cout<<"\n Node created succesfully  :-|";
		} 
		else{
			cout<<"\n CAnnot created !!!ABORTING";
			exit(1);
		}
		
		cout<<"\n\n Now inserting the new node at beginning of list......\n";
		insert_beg(newptr);
		cout<<"\n Now the list created is: \n";
		 display(start);
		 cout<<"\nPress Y or y to enter new nodes, N to exit....";
         cin>>ch;
	}
	return 0;
	
}












