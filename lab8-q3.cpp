//To find the kth smallest and largest element of an array

#include<iostream>
using namespace std;

//Function to find the kth smallest value
int ksmall(int arr[],int n,int k){
	cout<<arr[k-1]<<" is the "<<k<<" th smallest element of the array"<<endl;
}

//Function to find the kth largest value
int klarge(int arr[],int n,int k){
	cout<<arr[n-k]<<" is the "<<k<<"th largest element of the array"<<endl;
}
//main function
int main(){
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int k;
	cout<<"Enter the k value"<<endl;
	cin>>k;
	int arr[n];
	cout<<"Donot repeat any number"<<endl;
	for(int i=0;i<n;i++){
		cout<<"Enter the"<<i+1<<" th element "<<endl;
		cin>>arr[i];
		}
	
	//Sort the elements in ascending order
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int k=arr[i];
				arr[i]=arr[j];
				arr[j]=k;
			}
		}
	}
	//Check the elements in order
	cout<<"Your array is in ascending order is ";
	for(int i=0;i<n;i++){
		
		cout<<arr[i];
		}
	cout<<endl;
	//Call the function
	int z=ksmall(arr,n,k);
	int x=klarge(arr,n,k);
return 0;
}



