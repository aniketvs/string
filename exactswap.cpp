#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;

    
    s="bdeee";
   
       vector<long long> count(26,0);
        long long ans=0;
        long long n=s.size();
        for(int i=0;i<s.length();i++){
            count[s[i]-'a']++;
        }
        ans=n*(n-1)/2;
        bool flag=false;
        for(int i=0;i<26;i++){
            if(count[i]>1)flag=true;
            ans=count[i]*(count[i]-1)/2;
        }
     cout<<ans;
}