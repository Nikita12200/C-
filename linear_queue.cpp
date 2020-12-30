#include<iostream>
using namespace std;

int remove(int[]);
int insert(int[], int);
void display(int[], int, int);


const int size=50;
int queue[size], front=-1,rear=-1;
int main()
{
	
	int Item , result;
	char ch='y';
	
	while(ch=='y' || ch=='Y')
	{
		cout<<"\n Enter item to insert:";
		cin>>Item;
		result=insert(queue,Item);
		if (result==-1)
		{
			cout<<"OVERFLOW!!!\n";
			exit(1);
		}
		cout<<"\n The queue from front to rear is:\n";
		display(queue,front,rear);
		cout<<"\n Want to insert more elements ?(y/n)";
		cin>>ch;
	}
	cout<<"Now deletion of elements begin...\n";
	ch='y';
	while(ch=='y' ||ch=='Y')
	{
		result=remove(queue);
		if(result==-1)
		{
			cout<<"UNDERFLOW!!!";
			exit(1);
		}
		else
		{
			cout<<"\n element deleted is :"<<result<<endl;
			cout<<"The queue from front to rear is:\n";
			display(queue,front,rear);
		}
		cout<<"\n Want to delete more elements?(y/n)...";
		cin>>ch;
	}
	return 0;
}

int insert(int queue[], int ele)
{
	if(rear==size-1)
	return -1;
	else if(rear==-1)
	{
		front=rear=0;
		queue[rear]=ele;
	}
	else
	{
		rear++;
		queue[rear]=ele;
	}
	return 0;
}
int remove(int queue[])
{
	int ret;
	if(front==-1)
	{	
	return -1;
	}
	else
	{
		ret=queue[front];
		if(front==rear){   front =rear=-1;   }
		else {front++;}
	}
	return ret;
}

void display(int squeue[], int front, int rear)
{
	if(front==-1)
	{return;}
	for(int i=front;i<rear;i++)
	{
		cout<<queue[i]<<" --";
	}
	cout<<queue[rear]<<endl;
}







