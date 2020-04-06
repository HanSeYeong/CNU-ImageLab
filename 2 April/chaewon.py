class Solution(object):
    Arr = [0, 1, 4, 9, 16, 25, 36, 49, 64, 81]
    ans = [1, 10, 100, 1000]

    def isHappy(self, n):
        nums = list(str(n))
        sum = 0
        while nums:
            sum += self.Arr[int(nums.pop())]

        if sum in self.ans:
            return True
        else:
            if sum == 4:
                return False
            a = self.isHappy(sum)
            if a == True:
                return True