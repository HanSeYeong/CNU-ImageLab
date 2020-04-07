
def isHappy(n):

    fail_number = set()
    while True:
        nums = str(n)
        total = 0
        for num in nums:
            total += int(float(num)) ** 2
        if total == 1:
            return True
        if total not in fail_number:
            fail_number.add(total)
        else:
            return False
        n = total



isHappy(1111111)