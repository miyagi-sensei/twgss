# Class 24 - Optimization
## 1. Partial Sum
### Problem
- Given an array of `N` integers and `Q` queries, each of which is for the sum of a contiguous section of the array

<img src="https://i.imgur.com/1Mqp4vi.png" width="400">

- A naive solution would have time complexity of O(N\*Q)
```cpp
for (int i=0; i<Q; i++) {
    int l, r;
    cin >> l >> r;
    int sum = 0;
    for (int j=l; j<=r; j++)
        sum += a[j];
    cout << sum << endl;
}
```
- But if you precompute a partial sum array `ps[]` first:
    - `ps[i] = a[1] + a[2] + ... + a[i]`, or
    - `ps[i] = ps[i-1] + a[i]`
```cpp
for (i=1; i<=N; i++)
    ps[i] = ps[i-1] + a[i];
for (int i=0; i<Q; i++) {
    int l, r;
    cin >> l >> r;
    cout << ps[r] - ps[l-1] << endl;
}
```
<img src="https://i.imgur.com/STHkK2e.png" width="400">

### Exercises
- Now try this exercise to apply Partial Sum to a 2D problem. [20108: Maximum Sum](https://judge.hkoi.org/task/20108)
- And a little twist of Partial Sum: [S164: Alice's Meal](https://judge.hkoi.org/task/S164)
- How would you solve subtask 3 of [J173: Fibonacci Word](https://judge.hkoi.org/task/J173) with Partial Sum techniques?

---

## 2. Difference Array
If you look at the solution for [J222: Spicy Ramen](https://judge.hkoi.org/task/J222), there is a difference array there (`pref[]`):
![](https://i.imgur.com/ZRlFKTa.jpg)

### Exercises
- [T062: Tappy World](https://judge.hkoi.org/task/T062)
- [J222: Spicy Ramen](https://judge.hkoi.org/task/J222)

---

## 3. Precomputation
- See slides 68-74 on [Optimization 2022](https://assets.hkoi.org/training2022/optimization.pdf)
### Exercise
- [S113: Gravity Game](https://judge.hkoi.org/task/S113)

---

## 4. Sliding Window
- See slides 78-85 on [Optimization 2022](https://assets.hkoi.org/training2022/optimization.pdf)
### Exercise
- [M0652: Museum](https://judge.hkoi.org/task/M0652)

---

## 5. Batching
### Exercise
- [J184: Mysterious Area](https://judge.hkoi.org/task/J184)


