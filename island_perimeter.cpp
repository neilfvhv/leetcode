class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int cell = 0, neighbour = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) {
                    ++cell;
                    if (i > 0 && grid[i - 1][j] == 1) {
                        ++neighbour;
                    }
                    if (j > 0 && grid[i][j - 1] == 1) {
                        ++neighbour;
                    }
                }
            }
        }
        return 4 * cell - 2 * neighbour;
    }
};