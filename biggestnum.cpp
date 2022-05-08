#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
using namespace std;
int main(){
    string s="53281";
    int z,a[5],i=0;
    int x= stoi(s);
    while (x>0)
    {  
        z=x%10;
        a[i]=z;
        x=x/10;
        i++;
        
    }
    for (int i = 0; i <5; i++)
    {
        cout<<a[i];
    }
    
    int y=-1;
    for (int i = 0; i < 5; i++)
    {for (int j = i+1; j < 5; j++)
    {
      
    }
    
        
    }
    

}