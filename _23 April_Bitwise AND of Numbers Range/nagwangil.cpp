int logB(int x, int base) {
    return (int)(log(x) / log(base));
}


class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {

        int count = 0;
        int result = 0;
        
        if (m == 0)
            return 0;
        if (logB(n, 2) != logB(m, 2))
            return 0;

        count = logB(n, 2);
        int temp = pow(2,count);
     
        while (true)
        {
            n -= temp;
            m -= temp;
            if (m <= 0 && n >= 0)
            {
                if (m == 0)
                    result += temp;
                return result;
            }
            else if (m >= 0 && n >= 0)
            {
                result += temp;

            }
            else if (m <= 0 && n < 0)
            {
                m += temp;
                n += temp;
            }
            temp /= 2;

            if (temp == 0)
                break;
        }

        return result;
    }
};
