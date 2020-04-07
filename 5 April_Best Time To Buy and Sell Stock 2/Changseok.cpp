class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sale=0;
        int buy=0;
        int benefit=0;
        bool state=false;                //if it buys something the state will be true
        for(int i=0;i < prices.size();i++)
        {
            if(state==false)
            {
                if(i+1!=prices.size() && prices[i]<=prices[i+1])
                {
                buy=prices[i];
                state= true;
                    continue;
                }
                else
                    continue;
            }
            else if(i+1!=prices.size() && prices[i]>=prices[i+1])
                {
                    sale = prices[i];
                    state = false;
                    benefit = benefit + (sale-buy);
                    buy = 0; sale = 0;
                    continue;
                }
                else if(i+2 == prices.size())
                {
                    sale = prices[i+1];
                    benefit = benefit + (sale-buy);
                    break;
                }
                else if( i+1 == prices.size())
                {
                    sale=prices[i];
                    benefit = benefit + (sale-buy);
                    break;
                }
                else
                    continue;
        }
        return benefit;
    }
};
