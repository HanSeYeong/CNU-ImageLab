def lastStoneWeight(stones):
    while True:
        if len(stones) > 1:
            stones.sort()
            stones[-1] -= stones[-2]
            del stones[-2]
        else:
            return stones[0]
