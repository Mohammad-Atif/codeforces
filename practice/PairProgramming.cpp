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
    ll k,n,m,i,j,polysum,monosum;
    cin>>k>>n>>m;
    vi poly(n);
    vi mono(m);
    vi ans;
    for(i=0;i<n;i++ )
    cin>>poly[i];
    for(i=0;i<m;i++)
    cin>>mono[i];

    polysum=accumulate(all(poly),0);
    monosum=accumulate(all(mono),0);

    i=0;j=0;
    while(i<n && j<m)
    {
        if(polysum<=monosum )
        {
            if(k>=poly[i])
            {
                if(poly[i]==0)
                k++;
                ans.push_back(poly[i]);
                if(mono[j]>k)
                {
                    deb(-1)
                    return;
                }
                if(mono[j]==0)
                k++;
                ans.push_back(mono[j]);
                
            }
            else if(k>=mono[j])
            {
                if(mono[j]==0)
                k++;
                ans.push_back(mono[j]);
                if(poly[i]>k)
                {
                    deb(-1)
                    return;
                }
                if(poly[i]==0)
                k++;
                ans.push_back(poly[i]);
                
            }
            else
            {
                deb(-1)
                return ;
            }
        }
        else 
        {
            if(k>=mono[j])
            {
                if(mono[j]==0)
                k++;
                ans.push_back(mono[j]);
                if(poly[i]>k)
                {
                    deb(-1)
                    return;
                }
                if(poly[i]==0)
                k++;
                ans.push_back(poly[i]);
                
            }
            else if(k>=poly[i])
            {
                if(poly[i]==0)
                k++;
                ans.push_back(poly[i]);
                if(mono[j]>k)
                {
                    deb(-1)
                    return;
                }
                if(mono[j]==0)
                k++;
                ans.push_back(mono[j]);
                
            }
            else
            {
                deb(-1)
                return;
            }
        }
        polysum-=poly[i];
        monosum-=mono[j];
        i++;
        j++;
        
    }
    
    while(i<n)
    {
       if(k>=poly[i])
            {
                if(poly[i]==0)
                k++;
                ans.push_back(poly[i++]);
            }
            else
            {
                deb(-1)
                return;
            }
    }
    while(j<m)
    {
       if(k>=mono[j])
            {
                if(mono[j]==0)
                k++;
                ans.push_back(mono[j++]);
            }
            else
            {
                deb(-1)
                return;
            }
    }
    for(i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";

    deb("")


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