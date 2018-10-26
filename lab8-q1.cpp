//To find sum of elements of an array

#include<iostream>
using namespace std;

//function to find sum
int add(int arr[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
		}
	return sum;
}
//main function
int main(){
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"Enter the "<<i+1<<" th element"<<endl;
		cin>>arr[i];
		}
	int z=add(arr,n);
	cout<<"The sum of all the elements of the given array is "<<z<<endl;
return 0;
}
