def stringShift(s, shift):
    s = [x for x in s]
    for (direction, amount) in shift:
        if direction == 1:
            if amount > 0:
                temp = s[-amount:]
                del s[-amount:]
                s = temp + s
        else:
            if amount > 0:
                temp = s[:amount]
                del s[:amount]
                s = s + temp
    return ''.join(s)
