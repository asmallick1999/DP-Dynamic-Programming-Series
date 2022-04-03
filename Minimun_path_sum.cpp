// memoization

class Solution {
    int slove(int i,int j,int m,int n,vector<vector<int>>& grid,vector<vector<int>>&dp){
        if(i==m-1 && j==n-1 ) return grid[i][j];
        if(i>=m || j>=n) return INT_MAX;
        if(dp[i][j]!=-1)return dp[i][j];
        int right=slove(i,j+1,m,n,grid,dp);
        int down=slove(i+1,j,m,n,grid,dp);
        return dp[i][j]=grid[i][j]+ min(right,down);
    }
public:
    int minPathSum(vector<vector<int>>& grid) {
          int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return slove(0,0,m,n,grid, dp);
        
    }
    
     
};

// Time Complexity: O(M*N)
// Reason: At max, there will be M*N calls of recursion.

// Space Complexity: O((N-1)+(M-1)) + O(M*N)

// Reason: We are using a recursion stack space:O((N-1)+(M-1)), here (N-1)+(M-1) is the path length and an external DP Array of size ‘M*N’.





// Tabulation







// Time Complexity: O(M*N)

// Reason: There are two nested loops

// Space Complexity: O(M*N)

// Reason: We are using an external array of size ‘M*N’’.
