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
#define newline printf("\n");

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
    ll n,i,current,prev;
    cin>>n;
    vi ar(n);
    for(i=0;i<n;i++)
    cin>>ar[i];
    prev=ar[n-1];
    vi ans(n,0);
    if(prev!=0)
    {
        ans[n-1]=1;
        prev--;
    }
    for(i=n-2;i>=0;i--)
    {
        current=max(ar[i],prev);
        if(current>0)
        {
            ans[i]=1;
            prev=current;
        }
        prev--;
    }

    for(i=0;i<n;i++)
    cout<<ans[i]<<" ";
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