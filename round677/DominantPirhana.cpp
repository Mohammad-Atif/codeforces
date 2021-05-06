#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<set>
#include<queue>
#include<stack>
#include <math.h>
#include<climits>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n";
#define YES cout<<"YES\n";
#define Yes cout<<"Yes\n";
#define NO cout<<"NO\n";
#define No cout<<"No\n";
#define clt(x) 63-__builtin_clzll(x)
#define bct(x) __builtin_popcountll(x)
#define all(v) (v).begin(),(v).end()
#define pi pair<ll,ll>
#define vi vector<ll>
#define vpi vector<pair<ll,ll>>
#define maxq priority_queue<ll>
#define minq priority_queue<ll,vector<ll>, greater<ll>>
#define cont continue;
#define reto return 0;
#define sz size()
#define spmod 1116295198451
#define mod 1000000007
#define md 998244353 
#define N 200009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;

int main()
{
    ll cases,n,i,j,tmp,ans,flag,index,left,right,si,val;
    vector<ll> pirhanas,indexes;
    cin>>cases;
    while(cases--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>tmp;
            pirhanas.push_back(tmp);
            if(i-1>=0 && pirhanas[i]>pirhanas[i-1])
            indexes.push_back(i);
            else if(i-1>=0 && pirhanas[i]<pirhanas[i-1])
            indexes.push_back(i-1);
        }
        if(pirhanas.size()==1)
        {
            cout<<1<<endl;
            continue;
        }
        
        flag=1;
        for(i=0;i<indexes.size();i++)
        {
            ans=indexes[i];
            left=indexes[i]-1;
            right=indexes[i]+1;
            index=indexes[i];
            val=pirhanas[index];
            si=n;
            while(si>1)
            {
                if(left>=0 && val>pirhanas[left])
                {
                    si--;
                    left--;
                    val+=1;

                }
                else if(right<n && val>pirhanas[right])
                {
                     si--;
                     right++;
                     val+=1;
                }
                else
                {
                    break;
                }
            }
            if(si<=1)
            {
                flag=0;
                cout<<ans+1<<endl;
                break;
            }
        }
        if(flag)
        cout<<-1<<endl;

        indexes.clear();
        pirhanas.clear();
       
    }  
    return 0;
}