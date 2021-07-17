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
    ll n,k;
    cin>>n>>k;
    ll count;
    // if(n%3==0)
    // count=n/3;
    // else
    // {
    //     if(n%3>=2 && n>=3)
    //     count=n/3+1;
    //     else
    //     count=n/3;
    // }
    // if(k>count)
    // {
    //     deb(-1)
    //     return;
    // }
    count=0;
    vi ar(n);
    for(ll i=0;i<n;i++)
    ar[i]=i+1;
    count=0;
    for(ll i=2;i<n && count<k;i+=2,count++)
    {
        swap(ar[i],ar[i-1]);
    }
    if(count==k)
    {
        for(ll i=0;i<n;i++)
        cout<<ar[i]<<" ";
    }
    else
        cout<<-1;
    
    cout<<"\n";

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