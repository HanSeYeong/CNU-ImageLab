strs = ["eat", "tea", "tan", "ate", "nat", "bat"]

def groupAnagrams(strs):
    categories = []
    result = []
    for word in strs:
        sorted_word = sorted(word)
        if sorted_word not in categories:
            result.append([word])
            categories.append(sorted_word)
        else:
            result[categories.index(sorted_word)].append(word)

    return result

print(groupAnagrams(strs))