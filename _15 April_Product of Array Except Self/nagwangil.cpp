class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> output(nums.size(),1);
        int product=1;
        for (int i = 0; i < nums.size(); i++)
        {    output[i]*=product;
            product *= nums[i];
        }
        
        product=1;
        for (int i =int(nums.size())-1; i >= 0; i--)
        {  output[i]*=product;
            product *= nums[i];
        }

        

        return output;
    }
};
