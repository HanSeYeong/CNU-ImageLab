def checkValidString(s):
    left = 0
    right = 0
    if len(s) == 1 and s[0] != "*":
        return False

    n = len(s)
    for i in range(n):
        if s[i] in "(*":
            left += 1
        else:
            left -= 1

        if s[n - i - 1] in "*)":
            right += 1
        else:
            right -= 1
        if left < 0 or right < 0:
            return False
    return True
