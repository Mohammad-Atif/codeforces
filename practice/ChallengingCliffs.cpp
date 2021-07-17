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
    for(i=0;i<n;i++)
    cin>>ar[i];
    sort(all(ar),greater<ll>());
    ll minimum=LONG_LONG_MAX,x,y;
    for(i=n-2;i>=0;i--)
    {
        if((ar[i]-ar[i+1])<minimum)
        {
            x=i;
            y=i+1;
            minimum=ar[i]-ar[i+1];
        }
    }
   
    ll toggle=0;
    cout<<ar[y]<<" ";
    ll j=n-1;
    i=0;
    while(i<n/2 || j>n/2)
    {
        if(i>n/2)
        toggle=1;
        if(j<n/2)
        toggle=0;
        if(toggle==0)
        {
            if(i==x || i==y)
            {
                i++;
                if(i>n/2)
                toggle=1;
                cont
            }
        }
        else
        {
            if(j==x || j==y)
            {
                j--;
                if(j<n/2)
                toggle=0;
                cont
            }
        }
        
        if(toggle==0)
        {
            cout<<ar[i]<<" ";
            i++;
        }
        else
        {
            cout<<ar[j]<<" ";
            j--;
        }
        toggle=(toggle+1)%2;
    }
    cout<<ar[x]<<"\n";
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