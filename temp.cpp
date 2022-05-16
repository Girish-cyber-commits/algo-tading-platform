(a)for the current day,see what is the min of all prev days and try to maximise the profit(greedy)

int maxProfit(vector<int>& prices) {
        int ans=0;
        int mini=prices[0];
        for(int i=1;i<prices.size();i++){
            ans=max(ans,prices[i]-mini);
            mini=min(mini,prices[i]);
        }
        return ans;
    }

(b)go on crawling over the slope and keep on adding the profit obtained from every 
consecutive transaction. In the end,we will be using the peaks and valleys effectively,
 but we need not track the costs corresponding to the peaks and valleys along with the maximum profit,
  but we can directly keep on adding the difference between the consecutive numbers of the array if the
 second number is  larger than the first one, and at the total sum we obtain will be the maximum profit.    


 int maxProfit(vector<int>& prices) {
        int ans=0;
        int mini=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]>mini){
                ans+=(prices[i]-mini);
                mini=prices[i];
            }
                else{
                    mini=prices[i];
                }
            
        }
        return ans;
    }