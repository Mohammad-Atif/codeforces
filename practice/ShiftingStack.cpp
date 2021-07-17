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
#define vi vector<ll>


void solve()
{
    ll n,i,dif;
    long double d;
    cin>>n;
    vi ar(n);
    for(i=0;i<n;++i)
    cin>>ar[i];
    for(i=n-1;i>0;i--)
    {
        if(ar[i]==0 && ar[i-1]==0 && n==2)
        {
            NO 
            return;
        }
        if(ar[i]<=ar[i-1])
        {
            if((ar[i-1]+ar[i])%2==1)
            {
                 d=(ar[i-1]+ar[i])/2;
            dif=ceil(d);
            }
           else 
            dif=((ar[i-1]+ar[i])/2)+1;
            if(ar[i-1]-abs(dif-ar[i])<=0 && i!=1 || (ar[i-1]-abs(dif-ar[i])<0 ) )
            {
                NO;
                return;
            }
            ar[i-1]=ar[i-1]-abs(dif-ar[i]);
            ar[i]=dif;
        }
    }
    YES
}

int main()
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    
    reto
}