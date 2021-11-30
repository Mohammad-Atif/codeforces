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

bool compare(string s1,string s2)
{
    return s1[0]<s2[0];
}

void solve()
{
   ll n,m,i,j,flag,k;
   
   cin>>n>>m;
   vector<string> original(n),after(n-1);
   vi done(n-1,0);
   vector<char> first,second,other;
   for(i=0;i<n;i++)
   cin>>original[i];
   for(i=0;i<(n-1);i++)
   cin>>after[i];
   vector<string> both(original);
   both.insert(both.end(),after.begin(),after.end());
   vector<int> alphabets(123,0);
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
           alphabets[int(both[i][j])]++;
       }

   }
   string ans="";
   for(i=97;i<=122;i++)
   {
       if(alphabets[i]%2==1)
       {
           ans.push_back(char(i));
       }
   }
   cout<<ans<<endl;

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