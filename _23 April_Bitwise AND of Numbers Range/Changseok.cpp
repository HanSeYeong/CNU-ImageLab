class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int result =m;
        if(m==0)
            return 0;
        int mshift=1;
        int nshift=1;
        while(true){
             if(m >= 1<<30){
                mshift = 1<<30;
            break;
             }
            if(mshift<=m && mshift<<1 > m)
                break;
            mshift = mshift << 1;
        }
        while(true){
            if(n >= 1<<30){
                nshift = 1<<30;
            break;
            }
            if(nshift<=n && nshift<<1 > n)
                break;
            nshift = nshift << 1;
        }
        if(mshift!=nshift)
            return 0;
        
        for(int i=m;i<=n;i++){
            result = result&i;
            if(i==2147483647)
                break;
        }
        return result;
    }
};
