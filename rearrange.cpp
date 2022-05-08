#include<bits/stdc++.h>
using namespace std;
bool rearange(string s){
     map<char,int> m;
  for(int i=0;i<s.length();i++){
      m[s[i]]++;

  }int n=s.length();
  char a[n];
  for(int k=0;k<n;k++){
      a[k]='0';
  }
  int i=0;
  map<char,int> ::iterator it;
 
  for(it=m.begin();it!=m.end();it++){
     int j=i;
      while (it->second!=0 and i<n)
      {
          a[i]=it->first;
        
          i=i+2;
          it->second--;
      }cout<<endl;
     while(a[j]!='0'){
         j++;
     }
      i=j;
  }
   for(int k=0;k<n;k++){
  cout<<a[k]<<" ";
  }
}
int main(){
    string s="bbbb";
   
    cout<<rearange(s);

}