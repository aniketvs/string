#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str="ANIKET";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]>='A'&& str[i]<='Z')
        {
            str[i]+=32;
        }
        
    }
    cout<<str<<endl;
    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<str<<endl;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<str;
 
}