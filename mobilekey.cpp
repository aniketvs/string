#include<bits/stdc++.h>
using namespace std;
int mobile(int a[],string s){
    for (int i = 0; i < s.size(); i++)
    {
       cout<<a[s[i]-'A'];
    }
    
}
int main(){
    string s;
    cin>>s;
    int a[]={2,22,222,3,33,333,4,44,444,5,55,555,6,66,666,7,77,777,8,88,888,9,99,999};
       mobile(a,s);
}