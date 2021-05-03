#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cat_a,cat_b,hours,cases,spots,j;
    vector<int> restrictions;
    cin>>cases;
    for(int z=0;z<cases;z++)
    {
        cin>>spots;
        cin>>hours;
        cat_a=spots;
        cat_b=1;
        for(j=1;j<hours;j++)
        {
            cat_a--;
            if(cat_a<0) cat_a=spots;
            
            cat_b++;
            if(cat_b>spots) cat_b=1;
            
            if(cat_a==cat_b)
            {
                cat_b++;
                if(cat_b>spots) cat_b=1;
                // restrictions.push_back(cat_a);
            }
            // while(find(restrictions.begin(),restrictions.end(),cat_b)!=restrictions.end())
            // {
            //     cat_b++;
            //     if(cat_b>spots) cat_b=1;
            // }
            // if(cat_a==cat_b)
            // {
            //     restrictions.push_back(cat_a);
            // }
        }
        cout<<cat_b<<endl;
        // restrictions.clear();

    }

    return 0;
}