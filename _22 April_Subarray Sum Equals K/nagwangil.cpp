class Solution {
public:
	int subarraySum(vector<int>& nums, int k) {
		int count =0;
        vector<int> temp;
		temp.push_back(0);
			for (int i = 0; i < nums.size();i++)
			{
				temp.push_back(temp[i] + nums[i]);
			}
			
			for (int i = 0; i < temp.size(); i++)
            {
                for(int j = i +1; j < temp.size() ; j++)
                {
                    if(temp[i]+k == temp[j] )
                        count++;
                }
            }
            
        return count;

	}
};
