#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    string s;
    cout<<"Enter a string:\n";
    getline(cin,s);
    
    int count = 0;
    int n = s.length();
    for(int i=0;i<n/2;i++){
        if(s[i]==s[n-i-1]){
            count++;
        }
    }
    
    string r = "";
    
    for(int i =n-1;i>=0;i-- ){
        r+=s[i];
    }
    
    cout<<"the reverse of the string that you entered is: "<<endl<<r<<endl;
    
    if(count == n/2){
        cout<<"Therefore "<<s<<" is a Palindrom";
    }
    else{
        cout<<"Therefore "<<s<<" is Not a Palindrom";
    }

    return 0;
}

