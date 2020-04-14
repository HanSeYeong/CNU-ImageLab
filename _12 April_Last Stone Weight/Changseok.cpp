class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int size=0;
        int smash=0;
        while(stones.size()!=1){
            sort(stones.begin(),stones.end());
            size=stones.size();
            smash = stones[size-1]-stones[size-2];
            if(smash==0){
                stones.pop_back();
                stones.pop_back();
            }
            else{
                stones.pop_back();
                stones.pop_back();
                stones.push_back(smash);
            }
            if(stones.size()==0)
                return 0;
        }
        return stones[0];
    }
};
