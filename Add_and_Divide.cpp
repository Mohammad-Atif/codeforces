#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cases,a,b,count;
    cin>>cases;
    for(int z=0;z<cases;z++)
    {
        count=0;
        cin>>a;
        cin>>b;
        while(a>0)
        {
            if(b==1)
            b++;
            else if(a%b==0 || a/b==0)
            {
                a=a/b;
            }
            else if(a%(b+1)==0)
            {
                b+=1;
            }
            else if(a/(b+1)==0)
            b+=1;
            else
            a=a/b;
            count++;
        }
        cout<<count<<endl;
    }


    return 0;
}