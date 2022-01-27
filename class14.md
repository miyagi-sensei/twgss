# TWGSS Class 14
## Logic/Boolean/Bitwise
8. 2021/22 Heat Event Junior A19

### `^` - XOR
- b is a boolean/bit (`0` or `1`)
- `1 ^ b` would "flip" the bit
- `0 ^ b` would keep it unchanged
9. What is `0^0^1^0^1^0`?
10. What about `0^0^1^0^1^1^0^0^1`?
11. What about `0^1^0^0^1^0^1^1^0^1^0^0^1`?
12. 2021/22 Heat Event Junior B5
13. Truth table for *NOR*

|operand 1|operand 2|result|
|---|---|---|
|F|F|T|
|F|T|F|
|T|F|F|
|T|T|F|

Which of the following expressions is equivalent to `((not A) and B)`? (Show your truth tables for all 4 choices in your answers)<br>
A. `A nor (B nor B)`<br>
B. `(A nor A) nor B`<br>
C. `(A nor B) nor B`<br>
D. `(A nor B) nor (B nor B)`<br>

14. Suppose `x` is a boolean variable. Is the following expression always true?
`(x && (!x)) == false`

15. Which of the following pair(s) of boolean expressions are logically equivalent?<br>
(i). `x || (!x && y)`    vs. `(x && !y) || y`<br>
(ii). `(x || !y) ^ (!x || y)` vs. `(x && !y) || (!x && y)`<br>
A. (i) only<br>
B. (ii) only<br>
C. (i) and (ii)<br>
D. None of them

16. Perform bitwise operations `17 << 1` and `17 << 2`. 
What do you notice?

17. Perform bitwise operations `17 >> 1` and `17 >> 2`. 
What do you notice?

18. Complete the function f(x) so that the function g(ch) can convert lowercasew letters to uppercase and vice versa. For example, `g('A')` should return `a` and `g('q')` should return `Q`. Fill in **Y**.
```c++
int f(int x) {
    return ________Y_______;
}
char g(char ch) {
    int tmp;
    tmp = (int)ch;
    tmp = f(tmp);
    return (char)tmp;
}
```
[ASCII table](https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html)

---

## Code Tracing (Dry Run)
1. What is the output of the following program?
```c++
int a[10] = {3, 7, 2, 6, 3, 6, 1, 7, 0, 9};
int b[10];
int main() {
    for (int i = 0; i < 10; i++)
        b[a[i]] = b[a[i]] + a[i];
    cout << b[3] << " " << b[5] << " " << b[6];
    return 0;
}
```

2. What is the return value of the following function?
```c++
int f() {
    int res, x;
    res = 0;
    x = 2018;
    while (x > 0) {
        res += (x % 10);
        x = x / 10;
    }
    return res;
}
```

3. What is the output of the following program?
```c++
int a[5][5] = { {4, 2, 4, 0, 1},
                {3, 5, 1, 1, 0},
                {3, 0, 4, 5, 2},
                {3, 2, 0, 1, 0},
                {1, 2, 4, 3, 1}}
int x, y, i, next;
int main() {
    x = 0;
    y = 0;
    i = 0;
    while ((x != 5) && (y != 5)) {
        next = a[x][y];
        if (y % 2 == 0)
            x = next;
        else
            y = next;
        i++;
    }
    cout << i;
    return 0;
}
```

4. The program tries to evaluate an additive expression from the input. However, the program contains an error. For example, the program outputs `51` when the input is `100+1`.
```c++ 
 1.string s;
 2.int sum, temp, len, i, x;
 3.int main() {
 4.    cin >> s;
 5.    sum = 0;
 6.    temp = 0;
 7.    len = s.length();
 8.    i = 0;
 9.    while (i < len) {
10.        if (s[i] == '+') {
11.            sum += temp;
12.            temp = 0;
13.        }
14.        x = int(s[i]) - int('0');
15.        temp = temp * 10 + x;
16.        i++;
17.    }
18.    cout << sum + temp;
19.    return 0;
20.}
```

- What is the output when the input is `10+10`?
- The bug can be fixed by changing exactly one line. Find the line and correct it so that it outputs the correct answer:

Mistaken line: `________A________`

Correction: `_________B_________`


5. What is the return value of `factor(10, 4)`?
```
int fact(int x, int y) {
    if (x <= 0)
        return 1;
    else
        return x * fact(x - y, y - 1);
}
```

6. Consider the function above again. What is the return value of `fact(11, 4)`?<br>

7. What is the output of the following program?
```c++
int a[15], p[15];
int i, j, k;
int main() {
    k = 0;
    for (i = 0; i < 11; i++)
        a[i] = 0;
    for (i = 0; i < 11; i++) {
        if (a[i] == 0) {
            k++;
            p[k] = i;
        }
        j = 1;
        while ((j <= k) && (i * p[i] <= 10)) {
            a[i * p[j]]++;
            if (i % p[j] == 0)
                break;
            j++;
        }
    }
    cout << a[k];
    return 0;
}
```
