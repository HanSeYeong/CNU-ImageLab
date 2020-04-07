def countElements(arr):
    """
    :type arr: List[int]
    :rtype: int
    """
    arr.sort()
    ans = {}
    for i in arr:
        if i in ans:
            ans[i] += 1
        else:
            ans[i] = 1
    sum = 0
    for i in range(min(ans.keys()), max(ans.keys())):
        if i in ans and i+1 in ans:
            sum += min(ans.get(i), ans.get(i))

    return sum

