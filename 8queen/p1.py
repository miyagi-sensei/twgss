from itertools import permutations as perm

def check(config):
    setd0 = set()
    setd1 = set()
    for c in range(N):
        d0 = c + config[c]
        d1 = c - config[c]
        if (d0 in setd0 or d1 in setd1):
            return False
        setd0.add(d0)
        setd1.add(d1)
    return True

N = 10
count = 0
for p in perm(range(N)):
    if check(p):
        # print(p)
        count += 1

print(count)
