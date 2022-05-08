#include<bits/stdc++.h>
using namespace std;
int p=31;
const int n=1e9+7;
const int N=1e5+7;
vector<long long> power(N);
int main(){
    string t="AABAAALLBAABAABABAIKAJKLCNLKNLAABAAJKNCSBABKNCLABAISAABAMKLCSPANCJNKJCNKAJIOINA";
    string s="AABA";
    int tl=t.size();
    int sl=s.size();
    power[0]=1;
    for (int i = 1; i < N; i++)
    {
        power[i]=(power[i-1]*p)%n;
    }
    vector<long long >h(tl+1,0);

    for (int i = 0; i < tl; i++)
    {
     h[i+1]=(h[i]+(t[i]-'A'+1)*power[i])%n;
    }
    long long hs=0;
    for (int i = 0; i < sl; i++)
    {
      hs=(hs+(s[i]-'A'+1)*power[i])%n;
    }
    for(int i=0;i+sl-1<tl;i++){
        int cur=(h[i+sl]-h[i]+n)%n;
        if(cur==(hs*power[i])%n){
            cout<<"found "<<i<<endl;
        }
    }
    


}