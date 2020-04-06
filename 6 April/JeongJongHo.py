class Solution(object):
    def groupAnagrams(self, strs):
        #print(len(strs))
        anagrams = []
        output = []
        for i in strs:
            isan = False
            word = sorted(i)
            for j in anagrams :
                if j == word:
                    output[anagrams.index(word)].append(i)
                    isan = True
                    break
            if isan == False :
                anagrams.append(word)
                output.append([i])
        return output
