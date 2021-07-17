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


void solve()
{
    ll n,x,i,sum=0;
    cin>>n>>x;
    vector<ll> ar(n),ans;
    for(i=0;i<n;++i)
    cin>>ar[i];
    if(accumulate(all(ar),0)==x)
    {
        NO
        return;
    }
    i=0;
    while(i<n)
    {
        if(sum+ar[i]==x)
        {
            ans.push_back(ar[i+1]);
            ans.push_back(ar[i]);
            sum+=ar[i];
            sum+=ar[i+1];
            i+=2;
        }
        else
        {
            ans.push_back(ar[i]);
            sum+=ar[i];
            i++;
        }
    }
    YES
    for(i=0;i<n;i++)
    cout<<ans[i]<<" ";
    cout<<"\n";

}


int main()
{ 
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    ll cases;
    cin>>cases;
    while(cases--)
    {
        solve();
    }    
    reto
}