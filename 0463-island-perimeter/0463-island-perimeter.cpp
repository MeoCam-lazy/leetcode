class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int land = 0;
        int connectedLand = 0;
        /*The perimeter of the island is equal to number of landcells multiplied by 4, minus the number of shared borders multiplied by 2*/
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 1){
                    land++;
                    if(i != 0 && grid[i-1][j] == 1) connectedLand += 1;
                    if(j != 0 && grid[i][j-1] == 1) connectedLand += 1;
                }
            }
        }
        return land*4 - connectedLand*2;
    }
};