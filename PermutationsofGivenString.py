from itertools import permutations

class Solution:
    def permutation(self, s):
        permu = permutations(s)
        sorted_permutations = sorted([''.join(p) for p in permu])
        return sorted_permutations