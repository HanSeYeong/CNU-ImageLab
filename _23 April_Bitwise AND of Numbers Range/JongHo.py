class Solution(object):
    def rangeBitwiseAnd(self, m, n):
        """
        :type m: int
        :type n: int
        :rtype: int
        """
        
        # log 0 은 없어!!!
        if m*n == 0 :
            return 0
        else :
            # 2진수 자릿수가 다르면 무조건 결과가 0이다.
            if int(log(m,2)) != int(log(n,2)) :
                return 0
            else :
                # 자릿수가 겹치는 최고차항을 찾기
                r = 0
                while int(log(m,2)) == int (log(n,2)) :
                    t = 2 ** int(log(m,2))
                    m -= t
                    n -= t
                    r += t
                    if m*n == 0 :
                        break
                return r
