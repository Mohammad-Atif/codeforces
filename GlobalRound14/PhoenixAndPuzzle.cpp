#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cases,n,i,flag=0,div2,div4,s,sqdiv2,sqdiv4;
    cin>>cases;
    for(int z=0;z<cases;z++)
    {
        cin>>n;
        flag=0;
        if(n%2==1)
        {
            cout<<"NO"<<endl;
            continue;
        }        

        div2=n/2;
        div4=n%4==0?n/4:-1;
        sqdiv2=sqrt(div2);
        if(sqdiv2*sqdiv2==div2)
        {
            cout<<"YES"<<endl;
            continue;
        }

        if(div4!=-1)
        {
            sqdiv4=sqrt(div4);
            if(sqdiv4*sqdiv4==div4)
            {
                cout<<"YES"<<endl;
                continue;
            }
        }
        
        cout<<"NO"<<endl;

    }

    return 0;
}