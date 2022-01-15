// #include <boost/multiprecision/cpp_int.hpp>
// using namespace boost::multiprecision;
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

unordered_map<char,vector<string>> key;
    key['2'] = {"a","b","c"};
    key['3'] = {"d","e","f"};
    key['4'] = {"g","h","i"};
    key['5'] = {"j","k","l"};
    key['6'] = {"m","n","o"};
    key['7'] = {"p","q","r","s"};
    key['8'] = {"t","u","v"};
    key['9'] = {"w","x","y","z"};
    
void solve()
{
    ll n, a, b, i, half, j;
    cin >> n >> a >> b;
    half = n / 2;
    ll countMin, countMax;
    if (b > a)
    {
        countMax = n - a - 1;
        countMin = b - 2;
    }
    else
    {
        countMax = n - a;
        countMin = b - 1;
    }

    if (countMin < (n / 2 - 1) || countMax < (n / 2 - 1))
    {
        deb(-1) return;
    }
    else
    {
        cout << a << " ";
        half--;
        i = b + 1;
        while( i <= n && half > 0)
        {
            if(i==a)
            {
                i++;
                continue;
            }
             cout << i << " " ;
             i++;
             half--;
        }
        if (half > 0)
        {
            j = a + 1;
            while (half > 0 && j<=n)
            {
                if(j==b)
                {
                    j++;
                    continue;
                }
                cout << j << " ";
                half--;
                j++;
            }
        }
        half=n/2;
        cout<<b<<" ";
        half--;
        i = a - 1;
        while(i >= 1 && half > 0 )
        {
            if(i==b)
            {
                i--;
                continue;
            }
            cout<<i<<" ";
            i--;
            half--;
        }
        if(half > 0)
        {
            j=b-1;
            while(half>0 && j>=1)
            {
                cout<<j<<" ";
                half--;
                j--;
            }
        }
    }
    cout<<"\n";
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