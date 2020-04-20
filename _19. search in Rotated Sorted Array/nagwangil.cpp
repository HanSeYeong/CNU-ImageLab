class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size() ==0)
            return -1;
        if(target> nums[0])     
        {
            for(int i =1; i< nums.size();i++)
            {
                if(target ==nums[i])
                    return i;
                if(target<nums[0])
                    return -1;
            }
        }
        else if( target< nums[0])
        {
             for(int i =1; i< nums.size();i++)
            {
                if(target ==nums[i])
                    return i;
                if(target>nums[0])
                    return -1;
            }
        }
        
        else return 0;
        
        return -1;
    }
};
