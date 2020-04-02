class Solution:

    # 3.4796s
    def singleNumber1(self, nums):
        categories = list(set(nums))
        for category in categories:
            count = 0
            remove = []
            for i, n in enumerate(nums):
                if n == category:
                    count += 1
                    remove.append(i)

            if count == 1:
                return category
            # if count == 2:
            #     del nums[remove[1]]
            #     del nums[remove[0]] ## 6.3 s

    def singleNumber2(self, nums):
        while True:
            num = nums[0]
            if num in nums[1:]:
                del nums[0]
                del nums[nums.index(num)]
            else:
                return num