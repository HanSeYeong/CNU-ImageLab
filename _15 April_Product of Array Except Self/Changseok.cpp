class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        int zerocount =0;
        int size = nums.size();
        
        
        for(int i =0; i<size;i++){
            if(nums[i]==0 && zerocount ==0){
                zerocount++;
                continue;
            }
            else if(nums[i]==0 && zerocount>=1){
                zerocount++;
                product=0;
                break;
            }
            product *= nums[i];
        }
        
       
        
        
        if(zerocount==1){
            for(int i =0; i<size;i++){
                if(nums[i]==0)
                    nums[i]=product;
                else nums[i]=0;
            }
        }
        else if(zerocount > 1){
                for(int i =0; i<size;i++){
                nums[i] = 0;
            }
        }
        else{
            for(int i =0; i<size;i++){
                nums[i] = product/nums[i];
            }
        }
        return nums;
    }
};
