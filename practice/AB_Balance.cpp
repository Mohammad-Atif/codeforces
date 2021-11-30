// #include <boost/multiprecision/cpp_int.hpp>
// using namespace boost::multiprecision;
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
    vector<int> abIndex,baIndex;
    int abCount=0,baCount=0,i,j,d;
    string s;
    cin>>s;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]=='a' && s[i+1]=='b') 
        {
            abCount++;
            abIndex.push_back(i);
        }
        else if(s[i]=='b' && s[i+1]=='a')
        {
            baCount++;
            baIndex.push_back(i);
        } 
    }
    if(abCount==baCount)
    {
        deb(s)
        return;
    }
    else
    {
        if(abCount>baCount)
        {
            d=abCount-baCount;
            i=s.length()-1;
            while(i>=0 && d>0)
            {
                if(s[i]=='b')
                {
                    s[i]='a';
                    d--;
                }
                i--;
            }
        }
        else
        {
            i=0;
            d=baCount-abCount;
            while(i<s.length() && d>0)
            {
                if(s[i]=='b')
                {
                    s[i]='a';
                    d--;
                }
                i++;
            }
        }
    }
    deb(s)

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