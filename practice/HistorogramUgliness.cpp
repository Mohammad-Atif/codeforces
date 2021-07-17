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
    ll n,i;
    cin>>n;
    vi ar(n);
    for(i=0;i<n;++i)
    cin>>ar[i];
    ll ans=0;
    ar.insert(ar.begin(),0);
    ar.push_back(0);
    i=1;
    while(i<n-1)
    {
        
            if(ar[i]!=ar[i+1])
            {
                if(ar[i]>ar[i+1])
                {
                    ans+=(ar[i]-ar[i+1]);
                    ar[i]=ar[i+1];
                }
                else
                {
                    ans+=ar[i+1]-ar[i];
                    ar[i+1]=ar[i];
                }
            }
        
        i+=2;
    }
    for(i=2;i<n-1;i++)
    {
        if(ar[i]!=ar[i-1])
        ans+=abs(ar[i]-ar[i-1]);
    }
    deb(ans)


}


int main()
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<ceil((0+1)/2);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }   
    reto
}