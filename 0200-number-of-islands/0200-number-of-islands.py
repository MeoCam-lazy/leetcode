class Solution(object):
    
    def numIslands(self, grid):
        self.m = len(grid)
        self.n = len(grid[0])
        count = 0
        for i in range(0, self.m):
            for j in range(0,self.n):
                if grid[i][j] == '1':
                    count+=1
                    self.dfs(grid,i,j)
        return count
    def dfs(self,grid,r,c):
        if r < 0 or c < 0 or r >= self.m or c >= self.n or grid[r][c] == '0':
            return
        grid[r][c] = '0'
        self.dfs(grid,r-1,c)
        self.dfs(grid,r+1,c)
        self.dfs(grid,r,c-1)
        self.dfs(grid,r,c+1)
    
        