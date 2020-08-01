class Solution {
public:
    int climbStairs(int n) {
        int * DP = new int[n+1];
        for(int i = 0 ; i<=n; i++){
            DP[i] = -1;
        }
        return calc(n,DP);
    }
    int calc(int c,int *DP){
        if (DP[c] == -1){
            if(c<0) return 0;
            if(c == 1 || c == 0){
                DP[c] = 1;
                return 1;
            }
            int one_step = calc(c-1 , DP);
            int two_step = calc(c-2 , DP);
            return DP[c] = one_step + two_step;
        }
        return DP[c];
    }
};