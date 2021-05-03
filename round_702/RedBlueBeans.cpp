#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cases,i,j,red,blue,diff,max_part;
    string can_changed;
    cin>>cases;
    for(int z=0;z<cases;z++)
    {
        can_changed="NO";
        cin>>red>>blue>>diff;
        max_part=min(red,blue);
        if(red>=2 && blue>=2)
        {
            for(i=2;i<=max_part;i++)
            {
                if(red%i<=diff && blue%i<=diff)
                {
                    can_changed="YES";
                    break;
                }

            }
        }
        cout<<can_changed<<endl;


    }
    return 0;
}