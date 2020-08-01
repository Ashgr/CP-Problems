class Solution {
public:
    int DP[101][101];
    int calc(int m,int n)
    {
        if(m<=0 || n<=0) return 0;
        if(m==1 && n==1) return 1;
        if(DP[m][n]!=-1) return DP[m][n];
       
        return DP[m][n] = calc(m,n-1) + calc(m-1,n);
    }
    int uniquePaths(int m, int n) {
        
       memset(DP, -1, sizeof(DP[0][0]) * (101) * (101));
       return calc(m,n);
    }
};