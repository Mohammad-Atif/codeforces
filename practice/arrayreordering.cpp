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

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main()
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll cases,n;
    cin>>cases;
    while(cases--)
    {
        cin>>n;
        vector<ll> ar(n);
        for(ll i=0;i<n;i++)
        cin>>ar[i];

        sort(all(ar),greater<ll>());
        ll ans=0;
        for(ll i=0;i<n-1;i++)
        {
            for(ll j=i+1;j<n;j++)
            {
                if(gcd(ar[i],2*ar[j])>=2)
                ans++;
            }
        }
        deb(ans)
    }
    
    reto
}