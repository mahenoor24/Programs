class Solution:
    def minSpeedOnTime(self, dist: List[int], hour: float) -> int:
        last = dist.pop()
        return -1 if len(dist) >= hour else bisect_left(
            range(10**7), True, lo=1,
            key=lambda sp: sum(ceil(d/sp) for d in dist) + last/sp <= hour
        )