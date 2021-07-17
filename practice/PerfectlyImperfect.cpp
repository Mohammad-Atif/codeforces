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

typedef vector<long long> vi;

int checkperfectsquare(ll n)
{
  
if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) {
    return 1;
}
else {
    return 0;
}

}


int main()
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll cases,n,p,i,flag,count;
    cin>>cases;
    while(cases--)
    {
        cin>>n;
        vi ar(n);
        for(i=0;i<n;i++)
        cin>>ar[i];
        sort(all(ar));
        flag=1;
        count=1;
        if(!checkperfectsquare(ar[0]))
         {
            YES
            cont
        }
        for(i=1;i<n;i++)
        {
            if(!checkperfectsquare(ar[i]))
            {
                YES
                flag=0;
                break;            
            }
            if(ar[i]==ar[i-1])
            count++;
            if(count>1 && count%2==1 && ar[i]!=1)
            {
                YES
                flag=0;
                break;
            }
            
            else{
                count=1;
            }
        }
        if(flag)
        NO
    }
    
    reto
}