
class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) 
        string output=s;
        for (int i = 0; i < shift.size(); i++)
        {
            int command = shift[i][0];
            int direction = 1;
            if (command == 0)
                direction *= -1;
            for (int j = 0; j < s.size(); j++)
            {
                int temp = j + direction * shift[i][1];
                if (temp >= 0)
                {
                    temp = temp % s.size();
                }
                else if (temp < 0)
                {
                    temp = s.size() - abs(temp);
                }
                output[temp] = s[j];
            }
            s = output;
        }
   
        return output;

    }
};
