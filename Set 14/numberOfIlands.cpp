class Solution {
public:
    void markCurrIland(vector<vector<char>>& matrix,int x,int y, int r, int  c)
    {
        if(x<0 || y<0 || x>=r || y>=c || matrix[x][y]!='1')
        {
            return;
        }
        matrix[x][y]='2';
        markCurrIland(matrix,x+1,y,r,c);
        markCurrIland(matrix,x,y+1,r,c);
        markCurrIland(matrix,x-1,y,r,c);
        markCurrIland(matrix,x,y-1,r,c);
    }
    int numIslands(vector<vector<char>>& grid) {
        int rows=grid.size();
        if(rows==0) return 0;
        int col=grid[0].size();
        int numberOfIlands=0;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]=='1')
                {
                    markCurrIland(grid,i,j,rows,col);
                    numberOfIlands+=1;
                }
            }
        }
        return numberOfIlands;
    }
};