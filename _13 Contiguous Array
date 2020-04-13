class Solution {
public:
    int findMaxLength(vector<int>& nums) {
      unordered_map<int, vector<int>> mp;
        int sumNums=0;
        int numsSize=nums.size();
        int maxLength=0;
        mp[0].push_back(0);
        for(int i=0;i<numsSize;i++){
            if(nums[i]==0)
                sumNums--;
            else
                sumNums++;
            mp[sumNums].push_back(i+1);
        }
        
        for(auto y : mp){
            int subX=y.second.back()-y.second[0];
            if(subX>maxLength)
                maxLength=subX;
        }
        return maxLength;
    }
};
