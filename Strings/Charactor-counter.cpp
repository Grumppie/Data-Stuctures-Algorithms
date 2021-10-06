#include <iostream>
#include<cstring>
using namespace std;

int main()
{
   string s;
   getline(cin,s);
   int l = s.length();
   int count =0;
   string final = "";
   int i=0;
   int j=0;
   while(i<l){
   for(j=count;j<l&&s[j]==s[i];j++){
        
            count++;
        
        }
        int charcount = count - i;
    
        if(charcount!=1){
            final = final + s[i];
            final = final + char(charcount+'0');
            final+= " ";
        }
        else{
            final += s[i];
            final+= " ";
        }
    
    i = count;
    }

   
   cout<<final;
   
   
}

