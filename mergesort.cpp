#include<iostream>
using namespace std;

void merge(int *a,int s,int e){
	
	int mid=(s+e)/2;
	int i=s;
	int j=mid+1;
	int k=s;
	int temp[100];
	while(i<=mid && j<=e){
		if(a[i]<a[j]){
			temp[k++]=a[i++];
		}
		else{
			temp[k++]=a[j++];
		}
	}
	while(i<=mid){
		temp[k++]=a[i++];
	}
	while(j<=e){
		temp[k++]=a[j++];
	}
	//copy the element back to array
	for(int i=s;i<=e;i++){
		a[i]=temp[i];
	}
}

void mergesort(int a[],int s,int e){
	//base case
	if(s>=e){
		return;
	}
	int mid=(s+e)/2;
	mergesort(a,s,mid);
	mergesort(a,mid+1,e);
	merge(a,s,e);
}


int main(){
	int n;
	cout<<"ENTER ARRAY SIZE:\n";
	cin>>n;
	int a[n];
	cout<<"ENETR ARRAY ELEMENTS:\n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"ARRAY BEFORE SORTING:\n";
	for(int i=0;i<n;i++){
		cout<<a[i]<<"->";
	}
	cout<<"\nARRAY AFTER SORTING:\n";
	mergesort(a,0,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<"->";
	}
	return 0;
}
















