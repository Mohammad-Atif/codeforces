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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll count=0,ans=0,start=0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='*')
        {
            s[i]='x';
            ans++;
            break;
        }
       
    }
    for(ll i=n-1;i>=0;i--)
    {
        if(s[i]=='*')
        {
            s[i]='x';
            ans++;
            break;
        }
       
    }
    for(ll i=0;i<n;i++)
    {
        
        if(s[i]!='x')
        count++;
        else 
        {
            start++;
            if(start>1)
            {
                for(ll j=i-k;j>i-count;j=j-k)
                {
                    if(s[j]=='*')
                    ans++;
                    else if(s[j]=='.')
                    ans+=2;                    
                }
            }
            count=0;
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