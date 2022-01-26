# Class 13
## Logic/Boolean/Bitwise
[2021/22 Heat Event Junior Paper](https://github.com/miyagi-sensei/georgia/blob/main/class15/hkoi22hj.pdf) - Hit Download and save to your computer now. We will reference it frequently later in this class.
### Review these:
- [Basic boolean logic](https://github.com/miyagi-sensei/twgss/blob/main/class6.md#boolean-logic)
- [Harder boolean logic](https://github.com/miyagi-sensei/twgss/blob/main/class7.md#harder-boolean-logic)

### Exercises
1. `a`, `b`, `c` are 3 integer variables whereas `a < b`. Write a boolean expression that determines whether `c` is between `a` and `b` (inclusive).
In other words, write a boolean expression that is true if and only if `c` is between `a` and `b` (inclusive).

### Boolean algebra
The following 4 equations can be derived from each other.
- `!(A || B) == !A && !B`
- `!(A && B) == !A || !B`
- `A || B == !(!A && !B)`
- `A && B == !(!A || !B)`

### Exercises
2. 2021/22 Heat Event Junior A10 and B7
3. 2021/22 Heat Event Junior A1
4. Most Americans are confident. Most Americans are white. Therefore most white people are confident. Is this true (is this deduction logical)?
5. Most Americans are confident. Most confident people are welathy. Therefore most Americans are wealthy. Is this true (is this deduction logical)?
6. 80% of people in UK has a British accent. Most people in UK likes beer. Therefore at least 1/3 of people with a British accent likes beer.
7. 80% of people in UK has a British accent. Of all the people with a British accent in the world, only 10% are outside UK. Most people in UK likes beer. Therefore at least 1/3 of people with a British accent likes beer.
8. 2021/22 Heat Event Junior A19

### `^` - XOR
- b is a boolean/bit (`0` or `1`)
- `1 ^ b` would "flip" the bit
- `0 ^ b` would keep it unchanged
9. What is `0^0^1^0^1^0`?
10. What about `0^0^1^0^1^1^0^0^1`?
11. What about `0^1^0^0^1^0^1^1^0^1^0^0^1`?

### Exercises
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
```
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

Put your answers for all 18 questions in a text file (`.txt`) in your replit folder and then send out the link to the file in the #twgss slack channel. Show your work as much as possible.
![image](https://github.com/miyagi-sensei/twgss/blob/main/submit_hw.png)
