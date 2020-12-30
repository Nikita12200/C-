#include<iostream>
using namespace std;

int insert_in_cqueue(int[],int);
void display_cqueue(int [], int,int);
int del_from_cqueue(int []);




const int size=7;

int CQueue[size], front=-1, rear=-1;
int main()
{
	int Item , result, num;
	do
	{ 
		cout<<"\t\t\t MENU FOR CIRCULAR QUEUE:\n";
		cout<<"\t 1.Insert\n";
		cout<<"\t 2.Delete\n";
		cout<<"\t 3.Display\n";
		cout<<"\t 4.Exit\n";
		
		
		cout<<"Enter your choice in number(1-4)\n";
		cin>>num;
		switch(num)
		{
			case 1: cout<<"\n Enter the number for insertion: ";
			cin>>num;
			result=insert_in_cqueue(CQueue, num);
			if(result==-1){ cout<<"OVERFLOW!!!!\n";  }
		
			break;
			case 2: Item =del_from_cqueue(CQueue);
			
			break;
			case 3: display_cqueue(CQueue,front, rear);
			break;
			case 4: break;
			default: cout<<"ALERT !! NOT A VALID CHOICE";
			break;
		}
	}while(num!=4);
	return 0;
}


int insert_in_cqueue(int CQueue[], int ele)
{
	if((front==0 &&rear==size-1) || (front==rear+1))
	{
		return -1;
	}
	else if(rear==-1)
	{
		front=rear=0;
	}
	else if(rear==size-1)
	{
		rear=0;
	}
	else
	{
		rear++;
	}
	CQueue[rear]=ele;
	return 0;
}

void display_cqueue(int CQueue[], int front , int rear)
{
	int i=0;
	cout<<"\n CIRCULAR QUEUE:\n"<<"(front is showm as >>>, rear as <<< and free space as --\n)";
	if(front==-1)
	{
		return;
	}
	if(rear>=front)
	{
		for(i=0;i<front;i++)cout<<"-";
		cout<<">>>";
		for(i=front;i<rear;i++)cout<<CQueue[i]<<"<-";
		cout<<CQueue[rear]<<"<<<"<<endl;
	}
	else
	{
		for(i=0;i<rear;i++) cout<<CQueue[i]<<"<-";
		cout<<CQueue[rear]<<"<<<";
		for(;i<front;i++) cout<<"-";
		cout<<">>>";
		for(i=front;i<size;i++) cout<<CQueue[i]<<"<-";
		cout<<"\t.. wrap around...";
	}
	
}


int del_from_cqueue(int CQueue[])
{
	int ret;
	if(front==-1)return-1;
	else
	{
		ret=CQueue[front];
		if(front==rear) front=rear=-1;
		else if(front==size-1) front=0;
		else front++;
	}
	return ret;
}































