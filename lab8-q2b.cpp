//To find the mean of the elements of array

#include<iostream>
using namespace std;
//Function to find median
float mean(int arr[],int n){
	//First find the sum
	float sum=0;
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
		}
	//Find the median
	float x=sum/2;
	return x;
}
//Main function
int main(){
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"Enter the "<<i+1<<" th value of the array"<<endl;
		cin>>arr[i];
		}
	//Call the function
	float z=mean(arr,n);
	cout<<"The mean of the elements of the array is "<<z<<endl;
return 0;
}
