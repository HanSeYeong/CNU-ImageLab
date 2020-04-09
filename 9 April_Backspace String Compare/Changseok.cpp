class Solution {
public:
    bool backspaceCompare(string S, string T) {
        bool isTrue = true;
        if(result(S)!=result(T))
            isTrue = false;
        return isTrue;
    }   
    
    vector<char> result(string s)
    {
        char* temp=new char[s.size()+1];
        strcpy(temp,s.c_str());
        vector<char> output;
        
        for(int i=0;i<s.size();i++){
            if(temp[i]=='#' && output.size()==0)
                continue;
            else if(temp[i] == '#')
                output.pop_back();
            else
                output.push_back(temp[i]);
            
        }
        return output;
    }
};
