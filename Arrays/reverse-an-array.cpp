#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the length of the array";
	cin>>n;
	
	int arr[n];
	cout<<"Enter all the "<<n<<" Elements of the array";
	
	for(int i =0;i<n;i++){
		cin>>arr[i];
	} 

	cout<<"the reversed array is: \n";

	for(int i =n-1;i>=0;i--){
		cout<<arr[i]<<" ";
	}

}
