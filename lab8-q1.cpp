//To find the sum of elements of an array
#include<iostream>
using namespace std;

//Function to find the sum of the elements
int add(int arr[]){
	int sum;
	sum=0;
	for(int i=0;i<5;i++){
		sum=sum+arr[i];
		}
	return sum;
}
	
	
//write the main funtion
int main(){
	int z;
	int arr[5]={25,56,2,8,98};
	add(arr);
	cout<<add(arr)<<endl;
	
return 0;
}
	

