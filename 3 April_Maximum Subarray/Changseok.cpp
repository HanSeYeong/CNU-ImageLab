class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int max = nums.back();
        while(true){
            if(nums.size()==1)
            {
                if(max < nums.back())
                {
                    max = nums.back();
                }
                break;
            }
            if(nums[nums.size()-1]<=0)
            {
                if(max < nums.back())
                {
                    max = nums.back();
                }
                nums.pop_back();
            }
            else
            {
                if(max < nums.back())
                {
                    max = nums.back();
                }
                nums[nums.size()-2] = nums[nums.size()-2] + nums[nums.size()-1];
                nums. pop_back();
            }
            
        }
        return max;
    }
};
