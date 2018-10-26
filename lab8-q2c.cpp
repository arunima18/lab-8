//To find the median of the elements of an array

#include<iostream>
using namespace std;


//Write function to find median

int median(int arr[],int n){
	//If n is even, print the average of middle two elements
	if(n%2==0){
		float k=arr[n/2]+arr[(n/2)-1];
		float x=k/2.0;
		cout<<"The median value is "<<x<<endl;
	}
	//If n is odd,print the middle element
	else{
		int m=arr[(n-1)/2];
		cout<<"The median value is "<<m<<endl;
	}
}

//Main function
int main(){
	int n;
	
	
	//take size of array
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int arr[n];
	//take inputs for array from user
	for(int i=0;i<n;i++){
		cout<<"Enter the"<<i+1<<"th value"<<endl;
		cin>>arr[i];
	}
	
	//sort the elements of array in ascending order
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int k=arr[i];
				arr[i]=arr[j];
				arr[j]=k;
			}
		}
	}
	
	
	//Call the median function
	float z=median(arr,n);

return 0;
}
		


