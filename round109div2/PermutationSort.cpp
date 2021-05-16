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

int checkforstarting(vector<int> ar,int n)
{
    int flag=0;
    for(int i=1;i<n;i++)
    {
        if(ar[0]>ar[i])
        {
            flag=1;
            break;
        }
    }
    return flag;
}

int main()
{
   int cases,n,i,count;
   cin>>cases;
   while(cases--)
   {
       cin>>n;
       vector<int> ar(n),tocomp(n);
       
       for(i=0;i<n;i++)
       {
       cin>>ar[i];
       tocomp[i]=i+1;
       }
       count=0;
       for(i=0;i<n-1;i++)
       {
           if(ar!=tocomp)
           {
               if(ar[0]!=1 && ar[n-1]!=n)
               {
                   count=2;
                   break;
               }
               else  if(ar[0]!=1 || ar[n-1]!=n)
               {
                   count=1;
                   break;
               }
               else
               {
                   sort(ar.begin()+i,ar.end());
                   count++;
               }
               
           }
           if(ar==tocomp)
           break;
       }
       cout<<count<<endl;

   }
 
    return 0;
}