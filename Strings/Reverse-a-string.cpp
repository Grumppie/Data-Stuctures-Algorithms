#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    string s;
    cout<<"Enter a String"
    cin>>s;
    int n = s.length();
    for(int i =0;i<n/2;i++){
        swap(s[i],s[n-i-1]);
    }
    cout<<"the reversed string is: ";
    cout<<s;
    return 0;
}

