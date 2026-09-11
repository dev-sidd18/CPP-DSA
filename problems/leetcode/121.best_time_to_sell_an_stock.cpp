class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int b=0;
        int s=1;
        int profit=0;
        int curr;
        while(s<n){
            curr=prices[s]-prices[b];
            if(curr<0){
                b=s;
            }
            profit=max(profit,curr);
            s++;
        }
        return profit;
    }
};