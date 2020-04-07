class Solution(object):
    def groupAnagrams(self,strs):
        category = []
        result = []
        for _,i in enumerate(strs):
            sorted_str = sorted(i)
            if sorted_str not in category:
                category.append(sorted_str)
                result.append([i])
            else :
                result[category.index(sorted_str)].append(i)
        return result