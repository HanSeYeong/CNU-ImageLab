class Solution(object):
    def backspaceCompare(self, S, T):
        """
        :type S: str
        :type T: str
        :rtype: bool
        """
        S_last = len(S)
        s_out = ""
        s_lock = False
        s_shop = 0
        
        T_last = len(T)
        t_out = ""
        t_lock = False
        t_shop = 0
        
        count = 0
        
        while(True):
            if not(s_lock) :
                temp = S_last-1-count
                if(temp < 0) :
                    s_lock = True
                elif(S[temp] == "#") :
                    s_shop = s_shop + 1
                else :
                    if(s_shop > 0) :
                        s_shop = s_shop -1
                    else :
                        s_out = s_out + S[temp]
            if not(t_lock) :
                temp = T_last-1-count
                if(temp < 0) :
                    t_lock = True
                elif(T[temp] == "#") :
                    t_shop = t_shop + 1
                else :
                    if(t_shop > 0) :
                        t_shop = t_shop -1
                    else :
                        t_out = t_out + T[temp]
            count = count + 1
            if s_lock and t_lock :
                break
        return s_out == t_out
