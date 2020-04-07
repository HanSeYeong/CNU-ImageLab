class Solution {
public:
    bool isHappy(int n) {
        int count =0;
        int shared=0;
        int remain =0;
        int sum =0;
        while(true){
            sum = 0;
            while(true){
                
                shared = n/10;
                remain = n%10;
                sum += (remain*remain);
                n=shared;
                if(shared == 0)
                    break;
                
                
                }
            n=sum;
            count++;
            if(sum ==1)
                return true;
            if(count >= 1000)
                return false;
        }
    }
};
