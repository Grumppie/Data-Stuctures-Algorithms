#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Emter the Number of terms: ";
    cin>>n;
    
    int a[n];
    
    cout<<"Enter 0,1,2 randomly to store in the array \n";
    
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    
    
    int p,q,r;
    p=0;
    
    for(int i =0;i<n;i++){
        if(a[i]==0){
            int temp = a[i];
            a[i] = a[p];
            a[p] = temp;
            p++;
        }
    }
    q=p;
    
    for(int i =0;i<n;i++){
        if(a[i]==1){
            int temp = a[i];
            a[i] = a[q];
            a[q] = temp;
            q++;
        }
    }
    r = q;
    
    for(int i =0;i<n;i++){
        if(a[i]==2){
            int temp = a[i];
            a[i] = a[r];
            a[r] = temp;
            r++;
        }
    }
    
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

