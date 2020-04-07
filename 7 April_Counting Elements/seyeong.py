def countElements1(arr):
    result = 0
    for a in arr:
        if arr.count(a + 1):
            result += 1
    return result
# 116ms


def countElements2(arr):
    category = list(set(arr))

    result = 0
    for c in category:
        if arr.count(c + 1):
            result += arr.count(c)
    return result
# 64ms


