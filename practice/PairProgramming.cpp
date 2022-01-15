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
    ll k, n, m, i, j, l;
    cin >> k >> n >> m;
    vi mono(n), poly(m);
    for (i = 0; i < n; i++)
        cin >> mono[i];
    for (i = 0; i < m; i++)
        cin >> poly[i];

    i = 0;
    j = 0;
    vi ans;
    while (i < n && j < m)
    {
        if (mono[i] <= poly[j])
        {
            if (mono[i] == 0)
            {
                ans.push_back(0);
                k++;
                i++;
            }
            else
            {
                if (mono[i] > k)
                {
                    deb(-1) return;
                }
                else
                {
                    ans.push_back(mono[i]);
                    i++;
                }
            }
        }
        else
        {
            if (poly[j] == 0)
            {
                ans.push_back(0);
                j++;
                k++;
            }
            else
            {
                if (poly[j] > k)
                {
                    deb(-1) return;
                }
                else
                {
                    ans.push_back(poly[j]);
                    j++;
                }
            }
        }
    }

    while (i < n)
    {
        if (mono[i] == 0)
        {
            ans.push_back(0);
            k++;
            i++;
        }
        else
        {
            if (mono[i] > k)
            {
                deb(-1) return;
            }
            else
            {
                ans.push_back(mono[i]);
                i++;
            }
        }
    }

    while (j < m)
    {
        if (poly[j] == 0)
        {
            ans.push_back(0);
            j++;
            k++;
        }
        else
        {
            if (poly[j] > k)
            {
                deb(-1) return;
            }
            else
            {
                ans.push_back(poly[j]);
                j++;
            }
        }
    }

    for(i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    deb(" ")
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    reto
}