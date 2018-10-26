//To find the largest and smallest element of an array
#include<iostream>
using namespace std;

//Function for largest element
int largest(int arr[],int n){
	cout<<"The largest element of the array is "<<arr[n-1]<<endl;
}
//function for smallest element
int smallest(int arr[],int n){
	cout<<"The smallest element of the array is "<<arr[0]<<endl;
}
//main function
int main(){
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"Enter the "<<i+1<<" th value of the array"<<endl;
		cin>>arr[i];
		}
	//sort the elements is ascending order
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int k=arr[i];
				arr[i]=arr[j];
				arr[j]=k;
			}
		}
	}
	int z=largest(arr,n);
	int x=smallest(arr,n);
return 0;
}
