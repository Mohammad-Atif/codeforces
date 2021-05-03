#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cases,n,i,j,first_row,first_col,second_row,second_col,diff,row_diff,col_diff;
    vector<vector<char>> matrix;
    bool notcompleted;
    char tmp;
    vector<char> t;
    vector<int> axis;
    cin>>cases;
    for(int z=0;z<cases;z++)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>tmp;
                if(tmp=='*')
                {
                    axis.push_back(i);
                    axis.push_back(j);
                }
                t.push_back(tmp);
            }
            matrix.push_back(t);
            t.clear();
        }
        first_row=axis[0];
        first_col=axis[1];
        second_row=axis[2];
        second_col=axis[3];
        notcompleted=true;
        if(first_row==second_row)
        {
            diff=first_col>=second_col?first_col:second_col;
            while(notcompleted)
            {
            if(first_row+diff<n)
            {
                matrix[first_row+diff][first_col]='*';
                matrix[first_row+diff][second_col]='*';
                notcompleted=false;
                
            }
            else if(first_row-diff>=0)
            {
                matrix[first_row-diff][first_col]='*';
                matrix[first_row-diff][second_col]='*';
                notcompleted=false;
            }
            else
            {
                diff--;
            }
            }
        }
        else if(first_col==second_col)
        {
            diff=first_row>=second_row?first_row:second_row;
            while(notcompleted)
            {
            if(first_col+diff<n)
            {
                matrix[first_row][first_col+diff]='*';
                matrix[second_row][first_col+diff]='*';
                notcompleted=false;
                
            }
            else if(first_col-diff>=0)
            {
                matrix[first_row][first_col-diff]='*';
                matrix[second_row][first_col-diff]='*';
                notcompleted=false;
            }
            else
            {
                diff--;
            }
            }
        }
        else
        {
                matrix[second_row][first_col]='*';
                matrix[first_row][second_col]='*';
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            cout<<matrix[i][j];
            cout<<endl;
        }
        matrix.clear();
        axis.clear();
        t.clear();
    }
    return 0;
}