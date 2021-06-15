121. Best Time to Buy and Sell Stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int max = 0, profit=0;
        int current, vars, calc;
        
        for (int i=0; i< prices.size(); i++){
            current = prices.at(i);
            for (int j=prices.size()-1; j>i; j--){
                vars = prices.at(j);
                calc= vars-current;
                if  (calc>max){
                     max = calc;
                     
                }
                   
                    
            }
        }
        return max;
    }
};
