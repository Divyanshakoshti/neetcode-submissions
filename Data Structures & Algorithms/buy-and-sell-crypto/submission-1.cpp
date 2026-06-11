class Solution {
public:
    int maxProfit(vector<int>& prices) {
    //     int maxprofit=0;
    //     int bestbuy=prices[0];
    //     for(int i=1;i<prices.size();i++){
    //         if(prices[i]>bestbuy){
    //             maxprofit=max(maxprofit,prices[i]-bestbuy);
    //         }
    //     bestbuy=min(bestbuy,prices[i]);
    //     }
    // return maxprofit;
    int bestbuy=INT_MAX;
    int profit=0;
    for(int p:prices){
        bestbuy=min(bestbuy,p);
        profit=max(profit,p-bestbuy);
    }
    return profit;
    }
};
