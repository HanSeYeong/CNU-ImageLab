class Solution(object):
    def lastStoneWeight(self, stones):
        """
        :type stones: List[int]
        :rtype: int
        """

        while True:
            if len(stones) < 2:
                break
            stones.sort()
            print(stones)
            a = stones.pop()
            b = stones.pop()
            if a == b:
                continue
            else:
                stones.append(a - b)
        if not stones:
            return 0
        else:
            return stones[0]
