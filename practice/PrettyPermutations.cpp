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
    ll n,i,j;
    cin>>n;
    vi ar(n);
    for(i=0;i<n;i++)
    ar[i]=i+1;
    i=0;
    while(i<n)
    {
        if(ar[i]==i+1 && i+1<n)
        {
            swap(ar[i],ar[i+1]);
            i+=2;
        }
        else if(ar[i]==i+1 && i+1>=n)
        {
            swap(ar[i],ar[i-1]);
            i+=2;
        }
    }
    for(i=0;i<n;i++)
    cout<<ar[i]<<" ";
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