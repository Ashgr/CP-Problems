class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currMX = 0 , MAX = 0;
        for (int i = 1 ; i<prices.size(); i++){
            currMX += prices[i] - prices[i-1];
            MAX = max(MAX,currMX);
            currMX = max(currMX,0);
        }
        return MAX;
    }
};