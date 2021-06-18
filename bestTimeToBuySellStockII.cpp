122. Best Time to Buy and Sell Stock II
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0, profit=0;
        int current,previous, diff, calc;
        
        for (int i=1; i< prices.size(); i++){
            current = prices.at(i);
            previous = prices.at(i-1);
            diff = current - previous;
            
            if (diff>0)
                profit+=diff;
            
        }
        return profit;
    }
};
