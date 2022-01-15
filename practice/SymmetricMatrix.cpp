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

void solve()
{
    ll n, m, ul, ur, l, r;
    cin >> n >> m;
    vector<vector<ll>> ar;
    for (int i = 0; i < n; i++)
    {
        cin >> ul >> ur;
        cin >> l >> r;
        ar.push_back({ul, ur, l, r});
    }
    if (m % 2 == 1)
    {
        NO return;
    }
    ll flag = 1;
    for (auto i : ar)
    {
        if (i[1] == i[2])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        NO else YES
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