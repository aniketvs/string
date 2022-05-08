#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int g,int c,int n){
    int s=1;
    int l=a[0];
    for(int i=1;i<n;i++){
        
        if(g<=a[i]-l){
            l=a[i];
            s++;
        }
    }
    return (s>=c);
}
int aggcow(int a[],int n,int c){
  sort(a,a+n);
 
  int l=a[0];
  int h=a[n-1];
  int ans=-1;
  int m,g;
  while (l<=h)
  {
  
      m=(l+h+1)/2;
     
      g=m-1;
    
      if(check(a,g,c,n)){
        ans=g;
        l=m+1;

      }else{
        h=m-1;
      }
  }
  return ans;
  
}
int main(){
    int t;
    cout<<"enter atest case"<<endl;
    cin>>t;
    while (t--)
    {
        int n,c;
        cout<<"enter a n"<<endl;
        cin>>n;
        cout<<"enter a c"<<endl;
        cin>>c;

        int a[n];
        cout<<"enter a n stall"<<endl;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<"done"<<endl;
        cout<< aggcow(a,n,c);
    }
    
}