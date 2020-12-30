#include<iostream>
using namespace std;
int pop(int[],int&);
int push(int[],int&,int);
void display(int[],int);
const int size=50;
int main()
{
	int stack[size], Item, top=-1,res;
	char ch='y';
	while(ch=='y' ||ch=='Y')
	{
		cout<<"\n Enter ITEM for insertion:";
		cin>>Item;
		res=push(stack, top, Item);
		if(res==-1){
			cout<<"OVERFLOW!!ABORTING\n";
			exit(1);
		}
		cout<<"\n The stack now is:\n";
		display(stack,top);
		cout<<"\n want to insert more elements?(y/n)";
		cin>>ch;
	}
	cout<<"Now deletion begins from here..\n";
	ch='y';
    while(ch=='y'||ch=='Y')
    {
    	res=pop(stack , pop);
    	if(res==-1)
    	{
    		cout<<"UNDERFLOW!!!ABorting..\n";
    		exit(1);
		}
		else
		{
			cout<<"\n element deleted is:"<<res<<endl;
			cout<<"\n the stack nw is:\n";
			display(stack,pop);
		}
		cou<<"\n want to delete more elements?(y/n)...\n";
		cin>>ch;
	}
	return 0;
}
int push(int stack[],int&top,int ele)
{
	if(top==size-1) return-1;
	else
	{
		top++;
		stcak[top]=ele;
	}
	return 0;
}
int pop(int stack[],int&top)
{
	int ret;
	if(top==-1)return -1;
	else
	{
		ret=stack[top];
		top--;
	}
	return ret;
}
void display(int stack[], int top)
{
	if(top==-1) return;
	cout<<stack[top]<<"<--"<<endl;
	for(int i=top-1;i>=0;i--)
	cout<<stack[i]<<endl;
}













