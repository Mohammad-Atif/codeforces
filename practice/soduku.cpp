#include <iostream>
// #define N 9;
using namespace std;

void display(int board[][9])
{ 
    
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        cout<<board[i][j]<<" ";
        cout<<endl;
    }
}
bool isvalid(int board[][9],int x,int y,int val)
{
      for(int j=0;j<9;j++)
     {
        if(board[x][j]==val)
        return false;
    }
    for(int i=0;i<9;i++)
    {
        if(board[i][y]==val)
        return false;
    }
    int smi=(x/3)*3;
    int smj=(y/3)*3;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(board[smi+i][smj+j]==val)
            return false;
        }
    }
    return true;
}
void solvsudoku(int board[][9],int i,int j)
{
    if(i==9)
    {
    display(board);
    return;
    }
    int ni=0;
    int nj=0;
    if(j==8)
    {
        ni=i+1;
        nj=0;
    }
    else
    {
        ni=i;
        nj=j+1;
    }
    if(board[i][j]!=0)
    {
        solvsudoku(board,ni,nj);
    }
    else
    {
        for(int po=1;po<=9;po++)
        {
            if(isvalid(board,i,j,po)==true)
            {
                board[i][j]=po;
                solvsudoku(board,ni,nj);
                board[i][j]=0;
            }
        }
    }
}

int main()
{
int board[][9]={{3, 0, 6, 5, 0, 8, 4, 0, 0}, 
         {5, 2, 0, 0, 0, 0, 0, 0, 0}, 
         {0, 8, 7, 0, 0, 0, 0, 3, 1}, 
         {0, 0, 3, 0, 1, 0, 0, 8, 0}, 
         {9, 0, 0, 8, 6, 3, 0, 0, 5}, 
         {0, 5, 0, 0, 9, 0, 6, 0, 0}, 
         {1, 3, 0, 0, 0, 0, 2, 5, 0}, 
         {0, 0, 0, 0, 0, 0, 0, 7, 4}, 
         {0, 0, 5, 2, 0, 6, 3, 0, 0}};
         solvsudoku(board,0,0);
        //  display(board);
return 0;
}