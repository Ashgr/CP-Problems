class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int x = matrix.size();
        int y = matrix[0].size();
        int DP[x+1][y+1];
        memset(DP,0,sizeof DP);
        int ans = 0;
        for (int i = 0 ; i<x ; i++){
            for(int j = 0 ; j<y ; j++){
                if (matrix[i][j] == 1){
                    if (i == 0 || j == 0){
                        DP[i][j] = 1;
                    }
                    else{
                        DP[i][j] = min({DP[i-1][j-1] , DP[i][j-1] , DP[i-1][j]}) + 1;
                    }
                    ans+=DP[i][j];
                }
            }
        }
        return ans;
    }
};