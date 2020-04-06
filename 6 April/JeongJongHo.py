class Solution(object):
    def groupAnagrams(self, strs):
        o = collections.defaultdict(list)
        for i in strs:
            word = sorted(i)
            o[tuple(word)].append(i)
        return o.values()
    
    
    #https://www.developer.com/lang/other/article.php/630941/Learn-to-Program-using-Python-Using-Tuples-as-Keys.htm
    #https://www.daleseo.com/python-collections-defaultdict/
        
