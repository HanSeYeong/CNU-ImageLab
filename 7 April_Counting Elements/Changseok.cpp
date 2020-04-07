class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_map<int, vector<int>> arr_map;
        unordered_map<int, vector<int>>::iterator iter;
        int count =0;
        int i =0;
        for(auto j : arr)
        {
                arr_map[arr[i++]+1].push_back(j);    
        }
        for(iter=arr_map.begin();iter!=arr_map.end();iter++){
            for(int k : arr )
            {
                if(iter->first == k){
                    count = count + iter->second.size();
                    break;
                }
            }
        
        }
    return count;
    }
};
