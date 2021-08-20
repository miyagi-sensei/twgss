# Class 6
## Homework from last week
### Fibonacci numbers
- Implementing it recursively is easy but very inefficient because of lots of redundant computations
```
int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}
```
- memoization table to the rescue
```
int ans[1000];
int fib(int n) {
    if (n <= 1)
        return n;
    if (ans[n] != 0)
        return ans[n];
    ans[n] = fib(n-1) + fib(n-2);
    return ans[n];
}
```
- iterative implementation
```
int fib2(int n) {
    int a = 0, b = 1, c, i;
    if (n <= 1)
        return n;
    for (i=2; i<=n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}
```

### Boolean Logic
Which of the following pairs of statements are logically equivalent?<br>

1. If it is raining then the ground is wet.<br>
    If the ground is not wet then it isn’t raining.<br>
2. If it is raining then the ground is wet.<br>
    The ground is wet or it is not raining.<br>

A.  1 only<br>
B.  2 only<br>
C.  1 and 2<br>
D.  None of them 

<br>

____________


If Charlie gets full marks in the final exam, he feels happy; if Charlie feels happy and it is raining outside, he plays computer games at home. Charlie is not playing computer games at home. Which of the followings must be true?

A. Charlie does not get full marks in the final exam<br>
B. Charlie does not feel happy<br>
C. It is not raining outside<br>
D. None of the above

<br>

____________

Alice, Bob and Charlie are invited to a party. However, they still haven’t decided whether they will go to the party or not. If Alice goes then Bob will also go; if Alice and Bob both go, then Charlie will not go. Which of the following is/are possible situations?

i.    Only Alice and Bob go<br>
ii.   Only Alice and Charlie go<br>
iii.  Only Bob and Charlie go<br>

A. i only<br>
B. ii only<br>
C. i and iii only<br>
D. ii and iii only

<br>

____________

Suppose this statement is true: “If I eat this giant cookie, then I will feel sick.” Which of the following statements must also be true?

A. If I feel sick, then I ate that giant cookie.<br>
B. If I don’t eat this giant cookie, then I won’t feel sick.<br>
C. If I don’t feel sick, then I didn’t eat that giant cookie.

<br>

________________________________________________________________________________

“Somebody brought a flashlight.” Write the negation of this statement.

<br>

________________________________________________________________________________

“There are no prime numbers that are even.” Write the negation of this statement.

<br>

________________________________________________________________________________

“All Chinese children learn English in school.” Write the negation of this statement.

<br>

_______________________

# Harder Boolean Logic
Truth table for *NOR*
|operand 1|operand 2|result|
|---|---|---|
|F|F|T|
|F|T|F|
|T|F|F|
|T|T|F|

Which of the following expressions is equivalent to `((not A) and B)`?

A. `A nor (B nor B)`<br>
B. `(A nor A) nor B`<br>
C. `(A nor B) nor B`<br>
D. `(A nor B) nor (B nor B)`

<br>

_______________________

Suppose `x` is a boolean variable. Evaluate the following expression in C/C++.<br>
`(x && (!x)) == false`

<br>

_______________________

Given that there is only one correct answer for this question, which one is the correct answer?

A. Neither B nor C is the correct answer<br>
B. Netiher C nor D is the correct answer<br>
C. Trust me, this is the correct answer<br>
D. Neither A nor B is the correct answer

<br>

_______________________

Which of the following pair(s) of boolean expressions are logically equivalent?

1. `x || (!x && y)`<br>
    `(x && !y) || y`
2. `(x || !y) ^ (!x || y)`<br>
    `(x && !y) || (!x && y)`

A. 1 only<br>
B. 2 only<br>
C. 1 and 2<br>
D. None of them

---

# [j181 Wings and Nuggets Subtask 1 & 2](https://github.com/miyagi-sensei/twgss/blob/main/j181.pdf)
- Solve subtask 1 and 2. Understand the sample tests and the Input/Output requirement
- Make sure your program generates the correct output for all possible inputs


# Bitwise Operations
Truth table for *XOR*
|operand 1|operand 2|result|
|---|---|---|
|F|F|F|
|F|T|T|
|T|F|T|
|T|T|F|

Truth table for *NAND*
|operand 1|operand 2|result|
|---|---|---|
|F|F|T|
|F|T|T|
|T|F|T|
|T|T|F|

---

# Homework
## Finish subtask 1 & 2 of j181 above

## Read this [tutorial](https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/tutorial/)
## Then attempt these questions
Perform bitwise operation `25 & 45`

<br>

_______________________

Perform bitwise operation `25 | 45`

<br>

_______________________

Perform bitwise operation `25 ^ 45`

<br>

_______________________

x and y are 32-bit unsigned integers. Which of the expressions is/are always true?

1. `(x | y) >= (x & y)`
2. `(x | y) >= x`
3. `(x & y) <= x`

A. None of the above<br>
B. 1 only<br>
C. 1 and 2 only<br>
D. 1, 2 and 3

<br>

_______________________

Perform bitwise operations `17 << 1` and `17 << 2`. 
What do you notice?

<br>

_______________________

Perform bitwise operations `17 >> 1` and `17 >> 2`. 
What do you notice?

<br>

_______________________
