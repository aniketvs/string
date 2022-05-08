#include<bits/stdc++.h>
using namespace std;


int main(){
    while (true)
    {int n;
    cin>>n;
    if(n==0){
        break;
    }else{
        int f,l;
         f=n;
        int a[f];
        for(int i=0;i<f;i++){
            cin>>a[i];
        }
        cin>>l;
        int b[l];
        for(int i=0;i<l;i++){
            cin>>b[i];
        }
        int s1=0,s2=0;
        int ans=0;
        int i=0,j=0;
        while (i<f and j<l)
        {
            if(a[i]<b[j]){
                s1+=a[i++];
            }else if(a[i]>b[j]){
              s2+=b[j++];
                          }
                          else{
                              ans+=max(s1,s2)+a[i];
                              s1=0;s2=0;
                              i++;
                              j++;
                          }

                          
        }
        while(i<f){
            s1+=a[i];
            i++;
        }
        while(j<l){
            s2+=b[j];
            j++;
        }
        ans+=max(s1,s2);
        cout<<ans<<endl;
        

    }
    }
    
}