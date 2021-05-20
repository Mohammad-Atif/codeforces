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

int notPalindrome(string s)
{
    string a=s;
    reverse(s.begin(),s.end());
    
    if(a!=s)
    return 1;
    else 
    return 0;
}



int main()
{ 
    ll cases,n,alice,bob,i,reversed,p,prev,flag;
    ll ab[2]={0,0};         //an[0]=alice ab[1]=bob
    string s,tmp;

    cin>>cases;
    while(cases--)
    {
        cin>>n;
        cin>>s;
        string one(n,'1');
        i=0;ab[0]=0;ab[1]=0;reversed=0;
        while(s!=one)
        {
            if(reversed==0 && notPalindrome(s))
            {
                reversed=1;
               reverse(all(s));
                 i=(i+1)%2;
                continue;
            }
           
           if(count(all(s),'0')<=1)
           {
            auto t=find(all(s),'0');
            s[t-s.begin()]='1';
           }
           else
           {
               flag=1;
               for(int j=0;j<n;j++)
               {
                   if(s[j]=='0')
                   {
                       prev=j;
                       if(s[n-j]=='1')
                       {
                           flag=0;
                           s[j]='1';
                           break;
                       }
                   }                   
               }
               if(flag)
               s[prev]='1';
           }
            ab[i]+=1;
            reversed=0;
            i=(i+1)%2;
        }
        cout<<"Alice:"<<ab[0]<<" "<<"bob:"<<ab[1]<<endl;
        if(ab[0]>ab[1])
        deb("BOB")
        else if(ab[0]<ab[1])
        deb("ALICE")
        else 
        deb("DRAW")
        
    }   
    reto
}