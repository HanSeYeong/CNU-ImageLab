
def maxSubArray(nums):
    len_nums = len(nums)
    max_num = 0
    if len(nums) == 1:
        return nums[0]
    for i, num in enumerate(nums[:-1]):
        if num > 0:
            total = num
            print('----------------------')
            print(i, num)
            for j in range(i + 1, len_nums):
                total += nums[j]
                print(total, nums[j])
                if total < 0:
                    break
                if max_num < total:
                    max_num = total
    if max_num == 0:
        max_num = min(nums)
    return max_num



nums = [-2,1,-3,4,-1,2,1,-5,4]
nums = [-2, 1]
print(maxSubArray(nums))