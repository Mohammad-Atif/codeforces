#pragma GCC optimize("O2")
#include <bits/stdc++.h>

using namespace std;
#define ll long long

#define pb push_back
#define deb(x) cout << x << "\n";
#define deB(x, y) cout << x << " " << y << "\n";
#define Deb(x, y, z) cout << x << " " << y << " " << z << "\n";
#define YES printf("YES\n");
#define Yes printf("Yes\n");
#define NO printf("NO\n");
#define No printf("No\n");
#define all(v) (v).begin(), (v).end()

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
    ll n, x, ans = 0, i, originalcount = 0, number;
    cin >> n >> x;
    vi ar(n);
    for (i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(all(ar));


    unordered_map<ll, ll> xorcount,counts;

    for (i = 0; i < n; i++)
    {
        counts[ar[i]]++;
        xorcount[ar[i]^x]++;
    }
    ll maxcount = -1, change=LONG_LONG_MAX, totalCount, tochange, tochange2;
    for (i = 0; i < n; i++)
    {
        totalCount = xorcount[ar[i]]+counts[ar[i]];

        tochange = xorcount[ar[i]];

        if (totalCount > maxcount && x!=0 )
        {
            maxcount = totalCount;
            change = tochange ;
        }
        else if(totalCount==maxcount && tochange<=change && x!=0)
        {
             maxcount = totalCount;
            change = tochange ;
        }
        else if(counts[ar[i]]>=maxcount)
        {
            maxcount=counts[ar[i]];
            change=0;
        }
      
    }
    deB(maxcount, change)
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    reto
}