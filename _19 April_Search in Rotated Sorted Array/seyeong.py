
def search(nums, target):
    len_nums = len(nums)
    if len_nums == 0:
        return -1

    init = nums[0]
    diff = target - init

    if target == init:
        return 0
    elif diff > 0:
        if diff >= len_nums:
            diff = len_nums - 1
        for i in range(diff, -1, -1):
            if target == nums[i]:
                return i
        return -1
    else:
        if abs(diff) > len_nums:
            diff = -len_nums
        for i in range(len_nums + diff, len_nums):
            if target == nums[i]:
                return i
        return -1



nums = [1, 3]
target = 3

print(search(nums, target))

