def dcp(number):
    digit = []
    while number > 0 :
        digit.append(number%10)
        number = int(number/10)
    return digit

def multiply(array):
    sum = 0
    for i in array :
        sum += i**2
    return sum
    
class Solution(object):
    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        while True:
        #for i in range(20):
            array = dcp(n)
            mr = multiply(array)
            #print(array,mr)
            n = mr
            if (n == 145) :
                return False
            elif (n == 1) :
                return True
