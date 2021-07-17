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

ll digsum(long long n)
{
    ll sum=0,r;
    while(n)
    {
        r=n%10;
        sum+=r;
        n/=10;
    }
    return sum;
}


 
void solve()
{
    ll a=19,d=9,n,an,o,i,j;
    cin>>n;
    vector<ll> ar(n+1,0);
    ar[1]=19;
    for(i=2;i<=n;i++)
    {
        j=1;
        while(digsum(ar[i])!=10)
        {
            ar[i]=ar[i-1]+9*j;
            j++;
        }
    }
    deb(ar[n])

}


int main()
{ 
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    solve();
    
    reto
}