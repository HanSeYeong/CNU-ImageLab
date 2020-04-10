class Solution(object):
    def backspaceCompare(self, S, T):
        """
        :type S: str
        :type T: str
        :rtype: bool
        """
        S = list(S)
        S_Arr = []
        T = list(T)
        T_Arr = []
        while S or T:
            if S != []:
                S_buffer = S.pop(0)
                if S_buffer == '#':
                    if S_Arr != []:
                        S_Arr.pop()
                else:
                    S_Arr.append(S_buffer)

            if T != []:
                T_buffer = T.pop(0)
                if T_buffer == '#':
                    if T_Arr != []:
                        T_Arr.pop()
                else:
                    T_Arr.append(T_buffer)
        if S_Arr == [] and T_Arr == [] or S_Arr == T_Arr:
            return True
        else:
            return False