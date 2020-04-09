def without_shop(X):
    X = [x for x in X]
    while True:
        try:
            shop_index = X.index('#')
        except:
            break
        del X[shop_index]
        if shop_index > 0:
            del X[shop_index - 1]
    return X

def without_shop2(X):
    shop_n = X.count("#")
    X = [x for x in X]
    for _ in range(shop_n):
        shop_index = X.index('#')
        del X[shop_index]
        if shop_index > 0:
            del X[shop_index - 1]
    return X

def backspaceCompare(S, T):
    S = without_shop(S)
    T = without_shop(T)
    if sorted(S) != sorted(T):
        return False
    else:
        return True