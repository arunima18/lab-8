//To find the frequency of elements of an array

#include<iostream>
using namespace std;

//Function to find frequency

int frequency(int arr[],int n){
	int k;
	//initialise value of frequency to 1
	k=1;
	int i;
		for(i=0;i<n;i++){
			//if numbers are same, add the frequencies
			if(arr[i]==arr[i+1]){
				k=k+1;
				}
			//if number is different, again set the frequency to 1
			else{	
				cout<<"The frequency of "<<arr[i]<<" is "<<k<<endl;
				k=1;
				
				}
			
	}
}
		
//main function
int main(){
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int arr[n];
		for(int i=0;i<n;i++){
			cout<<"Enter the "<<i+1<<"th element of array"<<endl;
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
	//Print the elements in order to check
	for(int i=0;i<n;i++){
		cout<<arr[i];
		}
	cout<<endl;
	int z=frequency(arr,n);

return 0;
}
	

	
