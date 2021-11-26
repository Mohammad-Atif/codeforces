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
    ll a,b;
    cin>>a>>b;
   

    if(a==0 || b==0)
    {
        deb(0)
        return;
    }
    
    if(a+b<4)
    {
        deb(0)
        return;
    }

     if(a==b)
    {
        deb(a/2)
        return;
    }

    ll teams=0,small=min(a,b),big=max(a,b);
    
 
    
        ll canbe=big/3;
        if(canbe>small)
        teams=small;
        else
        {
            teams=canbe;
            if((small-canbe)+(big%3)>=4)
            teams++;
        }
        
    
    deb(teams)
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