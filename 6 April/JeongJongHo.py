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


class Solution(object):
    def groupAnagrams(self, strs):
        o = collections.defaultdict(list)
        for i in strs:
            word = sorted(i)
            o[tuple(word)].append(i)
        return o.values()
    
    
    #https://www.developer.com/lang/other/article.php/630941/Learn-to-Program-using-Python-Using-Tuples-as-Keys.htm
    #https://www.daleseo.com/python-collections-defaultdict/
        
