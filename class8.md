# Class 8
## [Harder bitwise operations homework](https://github.com/miyagi-sensei/twgss/blob/main/bitwise_hw.pdf)
1. D
2. D
3. x^32

## Remember ASCII Table
Dec  = Decimal Value
Char = Character
```
Dec  Char                           Dec  Char     Dec  Char     Dec  Char
---------                           ---------     ---------     ----------
  1  SOH (start of heading)          33  !         65  A         97  a
  2  STX (start of text)             34  "         66  B         98  b
  3  ETX (end of text)               35  #         67  C         99  c
  4  EOT (end of transmission)       36  $         68  D        100  d
.....
 25  EM  (end of medium)             57  9         89  Y        121  y
 26  SUB (substitute)                58  :         90  Z        122  z
```
|Char|Dec|Binary|
|---|---|---|
|A|65|`1000001`
|a|97|`1100001`
|||
|B|66|`1000010`
|b|98|`1100010`
|||
|C|67|`1000011`
|c|99|`1100011`
|||
|D|68|`1000100`
|d|100|`1100100`
|||
|Y|89|`1011001`
|y|121|`1111001`
|||
|Z|90|`1011010`
|z|122|`1111010`
> The ASCII code for an uppercase and lowercase letter only differs by 1 bit (6th bit from the right)

## [j181 Wings and Nuggets Subtask 1 & 2](https://github.com/miyagi-sensei/twgss/blob/main/j181.pdf)
```
#include <iostream>
using namespace std;
int W2, W4;

int main() {
    int task;
    cin >> task;
    if (task == 1) {
        int x;
        cin >> W2 >> W4 >> x;
        if (W2 / 2.0 <= W4 / 4.0) {
            cout << (x+1) / 2 * W2 << endl;
        } else {
            int cost = x / 4 * W4;
            int odd_nuggets = x % 4;
            if (odd_nuggets > 0 && odd_nuggets <= 2) {
                cost += W2;
            } else if (odd_nuggets == 3) {
                cost += W4;
            }
            cout << cost << endl;
        }
    } else if (task == 2) {
        int y;
        cin >> W2 >> W4 >> y;
        if (W2 / 2.0 <= W4 / 4.0) {
            cout << y / W2  * 2 << endl;
        } else {
            int n = y / W4 * 4;
            y -= n / 4 * W4;
            cout << n + y / W2 * 2 << endl;
        }
    }
    return 0;
}
```

---

## Insertion
Array `A` contains `N` integers sorted in ascending order. You need to insert integer `x` into the appropriate place in `A` so that it will remain sorted after the insertion.

### Input and Output
First line is `x`, the number you're supposed to insert into `A`. The integers are all in [-2147483648, 2147483647].<br>
Second line is `N`, the size of the integer array `A`. (0 ≤ `N` ≤ 100)<br>
Third line consists of `N` integers, representing the values in `A`.<br>
Output `A` after inserting `x` to the right place.

### Sample Tests
||Input|Output|
|---|---|---|
|1|1<br>4<br>-3 0 2 7|-3 0 1 2 7|
|2|-4<br>4<br>-3 0 2 7|-4 -3 0 2 7|
|3|8<br>4<br>-3 0 2 7|-3 0 2 7 8|
|4|17<br>7<br>-5 -2 -2 12 17 18 24|5 -2 -2 12 17 17 18 24|
|5|17<br>7<br>-5 -2 -2 12 17 17 24|5 -2 -2 12 17 17 17 24|
|6|8<br>0|8|

---

## Insertion Sort
Watch [insertion sort video](https://youtu.be/OGzPmgsI-pQ)

Pseudocode / Idea:
```
A[]: array of numbers 
B[]: array that serves as working space for insertions
for i in range 0...N-1:
  insert A[i] into B[0:i-1]
```
Note `B[0:i-1]` remains a sorted array from the beginning to the end. You will probably struggle quite a bit with this deceptively simple algorithm. But take advantage of this opportunity to practice investigation and inspection skills. Think about how to hunt down the bugs. Most ipmortantly learn how to sort through your thoughts and crystallize them!

---

# Homework
## [D803 Insertion Sort exercise](https://judge.hkoi.org/task/D803) [[pdf]](https://github.com/miyagi-sensei/twgss/blob/main/d803.pdf)

## Watch [bubble sort video](https://youtu.be/nmhjrI-aW5o)

## Watch [merge sort video](https://youtu.be/JSceec-wEyw)

---

# Extra Bonus Credit

## [D201](https://judge.hkoi.org/task/D201)
## [D205](https://judge.hkoi.org/task/D205)
## [D208](https://judge.hkoi.org/task/D208)
You should work on all the Dxxx problems when you have time to practice.
