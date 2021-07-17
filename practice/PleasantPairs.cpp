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
    ll n;
    cin>>n;
    vi ar(n);
    for(ll i=0;i<n;i++)
    cin>>ar[i];
    ll ans=0;
    ll i=0,j=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;i+j<2*n;j++)
        {
            if(ar[i]*ar[j]==i+j+2)
            {
                ans++;
            }
            
        }
    }
    deb(ans)
}


int main()
{ 
    ios_base::sync_with_stdio(false);   
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }   
    reto
}