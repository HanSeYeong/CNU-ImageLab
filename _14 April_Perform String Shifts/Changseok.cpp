class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int size = shift.size();
        int strSize = s.size();
        char temp[101]={};
        char str[101]={};
        string result;
        int sum=0;
        for(int i =0;i<size;i++){
            if(shift[i][0]==0){
                sum -= shift[i][1];
            }
            else
                sum += shift[i][1];
        }
        if(sum>0){
            sum = sum%strSize;
            strcpy(temp, s.c_str());
            for(int i=0;i<strSize;i++){
                
                if(sum>=strSize)
                    sum=0;
                str[sum++]=temp[i];
            }
            string result(str);
            return result;
            
        }
        else if(sum<0){
            sum = -sum;
            sum = sum%strSize;
            sum = strSize-sum;
            strcpy(temp, s.c_str());
            for(int i =0; i<strSize;i++){
                if(sum>=strSize)
                    sum=0;
                str[sum++]=temp[i];
            }
            string result(str);
            return result;
        }
        else return s;
        
        return result;
        
    }
};
