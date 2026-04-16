from itertools import product, combinations as comb

def check(config):
    col = set()
    row = set()
    setd0 = set()
    setd1 = set()
    for pos in config:
        c = pos[0]
        r = pos[1]
        d0 = c + r
        d1 = c - r
        if (c in col or r in row or d0 in setd0 or d1 in setd1):
            return False
        col.add(c)
        row.add(r)
        setd0.add(d0)
        setd1.add(d1)
    return True

N = 8
board = product(range(N), range(N))
count = 0
for c in comb(board, N):
    if check(c):
        count += 1
print(count)
