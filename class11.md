# Class 11
# J181 Wings and Nuggets
## [j181 Wings and Nuggets](https://judge.hkoi.org/task/J181)
Given: W<sub>4</sub> > W<sub>2</sub>, N<sub>9</sub> > N<sub>6</sub> > N<sub>4</sub>
### Subtask 1 Problem Statement:
- minimize X<sub>2</sub>\*W<sub>2</sub> + X<sub>4</sub>\*W<sub>4</sub>
- constraint: 2\*X<sub>2</sub> + 4\*X<sub>4</sub> ≥ X

solution: can use greedy approach. check whether W<sub>2</sub> or W<sub>4</sub> has the lowest unit cost and the proceed accordingly.

### Subtask 2 Problem Statement:
- maximize 2\*X<sub>2</sub> + 4\*X<sub>4</sub>
- constraint: X<sub>2</sub>\*W<sub>2</sub> + X<sub>4</sub>\*W<sub>4</sub> ≤ Y

solution: can use greedy approach. first buy the packs with the lowest unit cost then see if there's any money left to buy another 2-pack.

### Subtask 3 Problem Statement:
- minimize X<sub>4</sub>\*N<sub>4</sub> + X<sub>6</sub>\*N<sub>6</sub> + X<sub>9</sub>\*N<sub>9</sub>
- constraint: 4\*X<sub>4</sub> + 6\*X<sub>6</sub> + 9\*X<sub>9</sub> ≥ X

Can we use the greedy approach?

In Sample Test 3 (N<sub>4</sub> = 14, N<sub>6</sub> = 21 and N<sub>9</sub> = 27), if `X = 10` or `X = 19`, we have a problem. Even though N<sub>9</sub> has the lowest unit cost, buying a 9-pack lead you astray. 
> Sometimes you have to choose to do what is suboptimal in the short term in order to get the optimal outcome in the long term.

You have to try all possibilities. (brute force?)
> !! how do you write the brute force solution?


![search tree](https://github.com/miyagi-sensei/georgia/blob/main/class3/j181.jpeg)
- f(X): the cheapest way to buy at least X nuggets
- f(X) = min( N<sub>4</sub>+f(X-4), N<sub>6</sub>+f(X-6), N<sub>9</sub>+f(X-9) )
- primtives: for X ≤ 0, f(X) = 0

> it performs lots of redundant search down the tree but because `X` is small, a naive brute force search would score the subtask.

Implementation:
```c++
int f(int x) {
    if (x <= 0)
        return 0;
    int cost1 = N4 + f(x - 4);
    int cost2 = N6 + f(x - 6);
    int cost3 = N9 + f(x - 9);
    return min(cost1, min(cost2, cost3));
}
```

### Memoization (unnecessary optimization for subtask 3):
```c++
int min_cost[101];    // memoization table

int f(int x) {
    if (x <= 0) {
        return 0;
    }
    if (min_cost[x] != 0) {
        return min_cost[x];
    }
    int cost1 = N4 + f(x - 4);
    int cost2 = N6 + f(x - 6);
    int cost3 = N9 + f(x - 9);
    min_cost[x] = min(cost1, min(cost2, cost3));
    return min_cost[x];
}
```
Most of the time you would need to initialize the memoization table to *impossible value* like `-1` to avoid collision. In this example it's not necessary but this is the exception to the rule.

### Subtask 4 Problem Statement:
- maximize 4\*X<sub>4</sub> + 6\*X<sub>6</sub> + 9\*X<sub>9</sub>
- constraint: X<sub>4</sub>\*N<sub>4</sub> + X<sub>6</sub>\*N<sub>6</sub> + X<sub>9</sub>\*N<sub>9</sub> ≤ Y

Formulation:
- g(Y): the most nuggets Y dollars can buy
- g(Y) = max( 4+g(Y-N<sub>4</sub>), 6+g(Y-N<sub>6</sub>), 9+g(Y-N<sub>9</sub>) )??
    need to make sure you don't go buy a pack of nuggets if you don't have the money
- primtives: ???
> !!! Ask them to submit the formulation of subtask 4

---

# Homework
- [j181 Wings and Nuggets](https://judge.hkoi.org/task/J181)
