class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int result = 0;
        if (grid.size() > 0 && grid[0].size() > 0) {
            for (int i = 0; i < grid.size(); i++) {
                for (int j = 0; j < grid[0].size(); j++) {
                    if (grid[i][j]) {
                        result = max(result, dfs(grid, i, j));
                    }
                }
            }
        }
        return result;
    }
    
    int dfs(vector<vector<int>>& grid, int i, int j) {
        if (i >= 0 && j >= 0 && i < grid.size() && j < grid[0].size() && grid[i][j]) {
            grid[i][j] = 0;
            return 1 + dfs(grid, i - 1, j) + dfs(grid, i + 1, j) + dfs(grid, i, j - 1) + dfs(grid, i, j + 1);
        }
        return 0;
    }
};