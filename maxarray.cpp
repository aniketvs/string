#include<bits/stdc++.h>
using namespace std;
int left(int a[],int t,int n){
    int k[n];
    int l=0;
   
    
    for (int i = t; i < n; i++)
    {
       k[i]=a[i]*l;
      
     
       l++;
    }
    int g=l;
     
    for (int  i = 0; i < t; i++)
    {
        k[i]=a[i]*g;
      
        g++;
    }
    int s=0;
    for (int i = 0; i < n; i++)
    {
        s=s+k[i];
    }

   return s;
    
    
    

}
int main(){
    int a[]={8,3,1,2};
    int n=sizeof(a)/sizeof(a[0]);
    int j[n];
   
      for (int i = 0; i < n; i++)
   {
      j[i]= left(a,i,n);
    }

    int min=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        min=max(j[i],min);
    }
    cout<<min;
    
}