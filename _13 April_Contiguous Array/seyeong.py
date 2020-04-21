def findMaxLength(nums):
    level_dict = {}
    level = 0
    level_dict[0] = [0]
    for i in range(len(nums)):
        if nums[i] == 0:
            level -= 1
        else:
            level += 1
        if level not in level_dict.keys():
            level_dict[level] = []
        level_dict[level].append(i + 1)

    max_length = 0
    for key, values in level_dict.items():
        length = values[-1] - values[0]
        # print(values, length)
        if max_length < length:
            max_length = length
    return max_length
        
