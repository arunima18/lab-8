//Write a program to merge 2 arrays (just one after another into another array), find maximum of 2 arrays [maximum element of all the elements in both the arrays], find minimum of 2 arrays [similar to maximum]. (Use functions for each)

#include<iostream>
using namespace std;



//Function to find maximum of all the elements
int largest(int arr3[],int k){
	
	cout<<"The largest element is "<<arr3[k-1]<<endl;
}
//Function to write minimum of all the elements
int smallest(int arr3[],int l){
	cout<<"The smallest element is "<<arr3[0]<<endl;
}

//declare array of size equal to sum of size of the first two arrays
int main(){
	int n,m;
	int i;
	//Enter size of first array
	cout<<"Enter the size of the first array"<<endl;
	cin>>n;
	int arr1[n];
	for(i=0;i<n;i++){
		cout<<"Enter the "<<i+1<<" th value of first array"<<endl;
		cin>>arr1[i];
	}
	//Enter size of second array
	cout<<"Enter the size of the second array"<<endl;
	cin>>m;
	
	int arr2[m];
	for(i=0;i<m;i++){
		cout<<"Enter the "<<i+1<<" th value of second array"<<endl;
		cin>>arr2[i];
	}
	
	
	//Merge the above two arrays and declare a third array
	int arr3[n+m];
	for( i=0;i<n;i++){
		arr3[i]=arr1[i];
		}
	for( i=n;i<(m+n);i++){
		arr3[i]=arr2[i-n];
		}
	//Print the new array
	cout<<"Your required array is ";
	for( i=0;i<(m+n);i++){
	cout<<arr3[i];
	}
	cout<<endl; 
	//Sort the array in ascending order
	for( i=0;i<(m+n);i++){
		for(int j=i+1;j<(m+n);j++){
			if(arr3[i]>arr3[j]){
				int k=arr3[i];
				arr3[i]=arr3[j];
				arr3[j]=k;
			}
		}
	}
	//Print the new array in ascending order to check
	cout<<"Your array in ascending order is ";
	for(i=0;i<(m+n);i++){
		cout<<arr3[i];
		}
	cout<<endl;
	//Call function to calculate largest
	int z=largest(arr3,(m+n));
	//Call function to calculate smallest
	int x=smallest(arr3,(m+n));
return 0;
}
