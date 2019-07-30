import math
size, queries = [int (x) for x in input().split()]
sum = 0
List = [int(i) for i in input().split()]
while queries != 0:
    L, R = [int (x) for x in input().split()]
    for X in List[L - 1 : R]:
        sum = int(sum) + X
    print(math.floor(sum / ( R - L + 1)))
    sum = 0
    queries = queries - 1