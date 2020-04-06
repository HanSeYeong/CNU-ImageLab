class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int L ;
        int sum;
        int Max;
        L = nums.size();
        Max = nums[0];
        for(int i = 0; i < L;i++){
            sum = 0;
            for( int j = i; j<L;j++){
                sum = sum + nums[j];
                if(Max < sum) Max = sum;
            }
        }
        return Max;
    };
};
