#include <iostream>

using namespace std;

int main()
{
    int n,min,max;
    cout<<"Enter the total number of elements: ";
    cin>>n;
    
    int arr[n];
    
    cout<<"Enter "<<n<<" Numbers to store in array\n";

    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    
    min =arr[0];
    max = arr[0];
    
    for(int i =0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        else if(arr[i]<min){
            min = arr[i];
        }
    }
    
    cout<<"Maximum term and Minimum term in the array are : "<<max<<" "<<min;
    
    return 0;
}

