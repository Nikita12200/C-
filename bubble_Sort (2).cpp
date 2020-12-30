#include<iostream>
using namespace std;

void bubble_sort(int arr[ ], int n)
{
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}


int main(){

	int n;
	cout<<"enter size\n";
	cin>>n;
		int arr[n];
		cout<<"enter array elements\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"->";
	}
	cout<<endl;
	bubble_sort(arr,n);
	cout<<"after sorting\n";
	for(int i=0;i<n;i++){
			cout<<arr[i]<<"->";
	}
  return 0;
}
