#include<bits/stdc++.h>
using namespace std;


int main()
{
    int cases,n,i,tmp,a,b,count0,count1,oa,ob;
    vector<int> ar;
    string s,s2;
    
    cin>>cases;

    for(int z=0;z<cases;z++)
    {
        cin>>a;
        cin>>b;
        oa=a;
        ob=b;
        cin>>s;
        n=a+b;
        count0=count(s.begin(),s.end(),'0');
        count1=count(s.begin(),s.end(),'1');
        a-=count0;
        b-=count1;
        i=0;
        while(i<=n/2 && !(a==b && a==0))
        {
            if((s[i]=='0' && s[n-i-1]=='?') || (s[i]=='?' && s[n-i-1]=='0'))
            {
                if(s[i]=='0' && s[n-i-1]=='?')
                s[n-i-1]='0';
                else
                s[i]='0';
                a--;
            }
            else if((s[i]=='1' &&  s[n-i-1]=='?') || (s[i]=='?' && s[n-i-1]=='1') )
            {
                if(s[i]=='1' && s[n-i-1]=='?')
                s[n-i-1]='1';
                else
                s[i]='1';
                b--;  
            }
            else if(s[i]=='?' &&  s[n-i-1]=='?' )
            {
                if(a>=b)
                {
                    s[i]='0';
                    s[n-i-1]='0';
                    a-=2;
                }
                else
                {
                    s[i]='1';
                    s[n-i-1]='1';
                    b-=2;   
                }
            }
            i++;

        }
        tmp=count(s.begin(),s.end(),'?');
        count0=count(s.begin(),s.end(),'0');
        count1=count(s.begin(),s.end(),'1');
        s2=s;
        reverse(s2.begin(),s2.end());
        if(tmp>0 || count0!=oa || count1!=ob || a>0 || b>0 || s!=s2)
        {
            cout<<-1<<endl;
        }
        else
        cout<<s<<endl;

    }
    return 0;
}