class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=1,profit=0,min_price=prices[0],n=prices.size();
        while(i<n){
            if(prices[i]<min_price){
                min_price=prices[i];
            }
            profit=max(profit,prices[i]-min_price);
            i++;
        }
        return profit;
    }
};
