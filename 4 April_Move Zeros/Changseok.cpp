class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int temp;
        for(int i=0;i<nums.size();i++){
           if(nums[i]==0 && i!=nums.size())
           {
               for(int j=i+1;j<nums.size();j++){
                   temp=j;
                   if(nums[j]==0)
                   {
                       continue;
                   }
                   else
                   {
                       nums[i]=nums[j];
                       nums[j]=0;
                       break;
                   }
               }
           }
           else
           {
               continue;
           }
           if(temp==nums.size())
               break;
       }
    }
};
