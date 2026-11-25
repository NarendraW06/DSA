class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int cont=0,cnt=0;
      int n=grid.size();
    for(int i=0;i<grid.size();i++)
    {
       for(int j=0;j<grid[i].size();j++)
    {   cont=0;
        for(int k=0;k<grid.size();k++)
        {
            if(grid[i][k]==grid[k][j])
            {
                cont++;
            }
        }
        if(cont==n) cnt++;
    }
   

    }
     return cnt;
    }
};