#pragma GCC optimize("O2")
#include<bits/stdc++.h>

using namespace std;
#define ll long long

#define pb push_back
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n";
#define YES printf("YES\n");
#define Yes printf("Yes\n");
#define NO printf("NO\n");
#define No printf("No\n");
#define all(v) (v).begin(),(v).end()

#define cont continue;
#define reto return 0;
#define sz size()
#define spmod 1116295198451
#define mod 1000000007
#define md 998244353 
#define N 200009



int main()
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll> ar(4);
        for(ll i=0;i<4;++i)
        cin>>ar[i];
        ll max=-1,maxi,secmax=-1,secmaxi;
        for(ll i=0;i<4;++i)
        {
            if(ar[i]>max)
            {
                max=ar[i];
                maxi=i;
            }
        }
        for(ll i=0;i<4;++i)
        {
            if(ar[i]>secmax && ar[i]<max)
            {
                secmax=ar[i];
                secmaxi=i;
            }
        }
        if(maxi<2 && secmaxi>=2)
        YES
        else if(maxi>=2 && secmaxi<2)
        YES
        else 
        NO

        


    }
    
    reto
}