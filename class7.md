# Class 7
## [j181 Wings and Nuggets Subtask 1 & 2](https://github.com/miyagi-sensei/twgss/blob/main/j181.pdf)

## Harder Boolean Logic
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

|A|B|not A|(not A) and B|
|---|---|---|---|
|F|F|T|F|
|F|T|T|T|
|T|F|F|F|
|T|T|F|F|

|A|B|B nor B|A nor (B nor B)|
|---|---|---|---|
|F|F|T|F|
|F|T|F|T|
|T|F|T|F|
|T|T|F|F|

_______________________

Suppose `x` is a boolean variable. Evaluate the following expression in C/C++.<br>
`(x && (!x)) == false`

true
_______________________

Given that there is only one correct answer for this question, which one is the correct answer?

A. Neither B nor C is the correct answer<br>
B. Netiher C nor D is the correct answer<br>
C. Trust me, this is the correct answer<br>
D. Neither A nor B is the correct answer

We test each of the 4 answers to see which one doesn't lead to contradictions ultimately.

Let's assume A is true and see what happens:
1. If A is true, then B *and* C are *both* false. 
2. But if B is false, it implies that either C or D is true. 
3. But from (1) we know C is false, so D must be true.
4. But D implies A and B are both false which is a contradiction.

Let's assume B is true and see what happens:
1. If B is true, then C *and* D are *both* false.
2. If D is false, it implies either A or B is true.
3. We know B is true by assumption to begin with so there is no contradiction.

Answer: B

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

C. You can construct truth tables but that would be very time-consuming. Can you learn how to interpret these expressions to see why both pairs are logically equivalent?
`x || (!x && y)` is the same as `x || y`. Can you see that?
`(x && !y) || y` is the same as `x || y`. By the same method.
So the above 2 pairs are logically equivalent.

`(x || !y) ^ (!x || y)` this could be hard to interpret. maybe use truth table. but if you think really hard about it you can see that it's just xor.
`(x && !y) || (!x && y)` is only true when (x,y) is (true, false) or (false, true). This is exactly what xor is.

_______________________

## Bitwise operations
Perform bitwise operation `25 & 45`
```
   11001
& 101101
--------
  001001
```
1001<sub>2</sub> is 9<sub>10</sub>

_______________________

Perform bitwise operation `25 | 45`
```
   11001
| 101101
--------
  111101
```
111101<sub>2</sub> is 61<sub>10</sub>

_______________________

Perform bitwise operation `25 ^ 45`
```
   11001
^ 101101
--------
  110100
```
110100<sub>2</sub> is 52<sub>10</sub>

_______________________

x and y are 32-bit unsigned integers. Which of the expressions is/are always true?

1. `(x | y) >= (x & y)`
2. `(x | y) >= x`
3. `(x & y) <= x`

A. None of the above<br>
B. 1 only<br>
C. 1 and 2 only<br>
D. 1, 2 and 3

D

_______________________

Perform bitwise operations `17 << 1` and `17 << 2`. 
What do you notice?

34, 68

_______________________

Perform bitwise operations `17 >> 1` and `17 >> 2`. 
What do you notice?

8, 4

_______________________

## ASCII Table
Dec  = Decimal Value
Char = Character
```
Dec  Char                           Dec  Char     Dec  Char     Dec  Char
---------                           ---------     ---------     ----------
  0  NUL (null)                      32  SPACE     64  @         96  `
  1  SOH (start of heading)          33  !         65  A         97  a
  2  STX (start of text)             34  "         66  B         98  b
  3  ETX (end of text)               35  #         67  C         99  c
  4  EOT (end of transmission)       36  $         68  D        100  d
  5  ENQ (enquiry)                   37  %         69  E        101  e
  6  ACK (acknowledge)               38  &         70  F        102  f
  7  BEL (bell)                      39  '         71  G        103  g
  8  BS  (backspace)                 40  (         72  H        104  h
  9  TAB (horizontal tab)            41  )         73  I        105  i
 10  LF  (NL line feed, new line)    42  *         74  J        106  j
 11  VT  (vertical tab)              43  +         75  K        107  k
 12  FF  (NP form feed, new page)    44  ,         76  L        108  l
 13  CR  (carriage return)           45  -         77  M        109  m
 14  SO  (shift out)                 46  .         78  N        110  n
 15  SI  (shift in)                  47  /         79  O        111  o
 16  DLE (data link escape)          48  0         80  P        112  p
 17  DC1 (device control 1)          49  1         81  Q        113  q
 18  DC2 (device control 2)          50  2         82  R        114  r
 19  DC3 (device control 3)          51  3         83  S        115  s
 20  DC4 (device control 4)          52  4         84  T        116  t
 21  NAK (negative acknowledge)      53  5         85  U        117  u
 22  SYN (synchronous idle)          54  6         86  V        118  v
 23  ETB (end of trans. block)       55  7         87  W        119  w
 24  CAN (cancel)                    56  8         88  X        120  x
 25  EM  (end of medium)             57  9         89  Y        121  y
 26  SUB (substitute)                58  :         90  Z        122  z
 27  ESC (escape)                    59  ;         91  [        123  {
 28  FS  (file separator)            60  <         92  \        124  |
 29  GS  (group separator)           61  =         93  ]        125  }
 30  RS  (record separator)          62  >         94  ^        126  ~
 31  US  (unit separator)            63  ?         95  _        127  DEL
```
Try to understand the code below and what it prints out.
```
	int code;
	code = 'A';
	cout << code << endl;
	code = (code + 3) * 2 - 53;
	cout << code << endl;
	char ch = code;
	cout << ch << endl;

	code = '5';
	cout << "ASCII code for '5' is: " << code << endl;
	ch = code + 3;
	cout << ch << endl;
```

## Harder bitwise operations
- `f(x) = x AND x`: `f(x)` always will return x. Think about why.
- `g(x) = x XOR x`: `g(x)` always will return false. Think about why.

---

# Homework
## Draw truth tables for the following 4 expressions:
A. `A nor (B nor B)`<br>
B. `(A nor A) nor B`<br>
C. `(A nor B) nor B`<br>
D. `(A nor B) nor (B nor B)`

## [Harder bitwise operations homework](https://github.com/miyagi-sensei/twgss/blob/main/bitwise_hw.pdf)

## [j181 Wings and Nuggets Subtask 1 & 2](https://github.com/miyagi-sensei/twgss/blob/main/j181.pdf)
