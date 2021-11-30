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
    ll n,ans=0,i,evenIndexes,oddIndexes,even=0,odd=0;
    cin>>n;
    vi ar(n);
    for(i=0;i<n;i++)
    cin>>ar[i];

    if(n%2==0)
    {
        evenIndexes=oddIndexes=n/2;
    }
    else
    {
        evenIndexes=n/2;
        oddIndexes=evenIndexes+1;
    }


    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        even++;
        else
        odd++;
    }

    if(even>=oddIndexes)
    {
        ans+=oddIndexes;
    }
    else
    ans+=even;
    
    if(odd>=evenIndexes)
    {
        ans+=evenIndexes;
    }
    else
    ans+=odd;

    deb(ans)
    
    
}


int main()
{ 
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }   
    reto
}