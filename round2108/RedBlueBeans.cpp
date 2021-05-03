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
           if(red%2<=diff && blue%2<=diff)
            {
                can_changed="YES"; 
            }

        
        }
        else if(red==1 && blue==1)
        can_changed="YES";

        cout<<can_changed<<endl;


    }
    return 0;
}