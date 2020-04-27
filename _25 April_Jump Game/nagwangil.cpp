
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int count = 0;
        
        for (int i = nums.size() - 1; i >= 0; i--)
        {
                if (i == 0)
            {
                if (nums[i] < count)
                    return false;
                else
                    break;
            }
            if (count > nums[i])
                count++;
            else
                count = 1;
        }
        return true;
    }
};
