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



int main()
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll cases,n,q,l,r,i;
    cin>>cases;
    while(cases--){
        cin>>n>>q;
        string s;
        cin>>s;
        while(q--)
        {
            cin>>l>>r;
            ll lpos=0,rpos=0;
            for(i=0;i<l-1;i++)
            {
                if(s[i]==s[l-1])
                lpos=1;
            }
            for(i=r;i<n;i++)
            {
                if(s[i]==s[r-1])
                rpos=1;
            }
            if(lpos || rpos)
            YES
            else
            NO

        }
    }
    
    reto
}