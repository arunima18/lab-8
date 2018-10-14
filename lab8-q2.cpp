/*  Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question) */

#include<iostream>
using namespace std;
int largest(int arr[]){
	int i=0;
	if(arr[i]>arr[i+1]){
		if (arr[i]>arr[i+2]){
			
			if (arr[i]>arr[i+3]){
				if (arr[i]>arr[i+4]){
					cout<<arr[i]<<endl;
					}
				}
			}
		}
	return arr[i]; 
}
int main(){
	int arr[]={45,3,78,7,100};
	int z=largest(arr);
	
	/*int a=smallest(arr);
	cout<<a<<endl;
	int b=mean(arr);
	cout<<b<<endl;
	int c=median(arr);
	cout<<c<<endl;
	int d=frequency(arr);
	cout<<d<<endl; */
return 0;
}
