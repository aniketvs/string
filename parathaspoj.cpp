#include<bits/stdc++.h>
using namespace std;\
bool solve(int m,int a[],int p,int c){
    int t=0, par=0;
    for(int i=0;i<c;i++){
        t=a[i];
        int j=2;
        while (t<=m)
        {par++;
           t+=j*a[i];
           j++;
        }
      if(par>=p){
          return true;
      }
        
    }
    return false;
}
int roti(int a[],int p,int c){
    int l=0,u=1e8;
    int ans;
    while (l<=u)
    {
        int m=(l+u)/2;
        if(solve(m,a,p,c)){
           ans=m;
           u=m-1;

        }else{
            l=m+1;
        }
       
    }
return ans;
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {int p,c;
       cin>>p;
       cin>>c;
       int a[c];
       for(int i=0;i<c;i++){
           cin>>a[i];
       }
       cout<<roti(a,p,c)<<endl;
    }
    

}