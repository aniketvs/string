#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int m,int n ,int mid){
    int sum=0;
    for(int i=0;i<n;i++){
        if(a[i]>mid){
            sum+=a[i]-mid;
        }
        
    }
    if(sum>=m){
        return true;
    }else{
        return false;
    }
}
int ekospoj(int a[],int n,int m){
    
    int s=0;
    int r=a[n-1];
    int ans=*max_element(a,a+n);
    while (s<=r)
    {
        int mid;
        mid=(s+r)/2;
     
        if(check(a,m,n,mid)){
            ans=mid;
            s=mid+1;
        }else{
            r=mid-1;
        }
          
       
    }
    return ans; 
}
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   cout<< ekospoj(a,n,m)<<endl;
}