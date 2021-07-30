# Class 3
## Homework from last week
- use lower case for file names and folder names - it'll make you more efficient

---

## [D205 Prime factorization](https://judge.hkoi.org/task/D205)
Write a program to factorize a number into a product of primes.

### INPUT
The input consists of an integer `N`. (2 ≤ `N` ≤ 10<sup>9</sup>)

### OUTPUT
Output the factorization of N using a equality. The left hand side of the equality is `N` while the right hand side should be a list of prime(s), from small to large, with the multiplication operator `*` between them.

### SAMPLE TESTS
| |Input|Output
|---|---|---|
|1|40|40=2\*2\*2\*5|
|2|17|17=17|
|3|85|85=5\*17|

pseudocode:
```
repeat:
    find the next smallest factor of N
    if this factor == N:
        finished (N is prime)
    else:
        print this factor and then,
        N = N / factor
```

### Sample solutions
- [iterative implementation](https://github.com/miyagi-sensei/d205/blob/main/v1.cpp)
- [recursive implementation](https://github.com/miyagi-sensei/d205/blob/main/v2.cpp)

## Heat Event Revision
Combinatorics
1. There are 6 seats in a row and 6 students. How many ways are there to allocate their seats?

2. There are 10 seats in a row and 10 students. How many ways are there to allocate their seats?

3. 6 boys and 4 girls are taking a group photo. There are 4 chairs for the girls to sit on. How many different arrangements are there for the photo? For example: the girls’ names are Amy, Belinda, Cathy, Debbie and the boys’ names are Alan, Benny, Chuck, Daniel, Ethan, Frank. And below are 2 possible arrangements:
    * Seats: Amy, Cathy, Debbie, Belinda<br>
      Standing: Daniel, Benny, Alan, Chuck, Ethan, Frank
    * Seats: Amy, Cathy, Debbie, Belinda<br>
      Standing: Daniel, Benny, Alan, Chuck, Ethan, Frank

4. How many ways are there to seat 6 people at a roundtable of 6 seats? (To clarify, the orientation does not matter. What matters is merely to whom each person sits next.)

5. A competitive programming club has 5 members. How many ways are there to choose, among the members, one president and one vice presidents?

6. A competitive programming club has 5 members. How many ways are there to choose, among the members, 2 vice presidents?

7. A competitive programming club has 5 members. How many ways are there to choose, among the members, one president and 2 vice presidents?

8. A competitive programming club has 10 members. How many ways are there to choose, among the members, one president and 2 vice presidents?

9. A competitive programming club has 6 members. How many ways are there to choose, 3 vice presidents?

10. A competitive programming club has 10 members. How many ways are there to choose, 2 presidents and 3 vice presidents?

11. Jane’s mother knows how to cook 10 dishes for lunch. For the next 5 days, Jane’s mother wants to create a 5-day lunch menu for Jane. How many different menus can Jane’s mother possibly create? (Jane is okay with a menu with repeating dishes)

12. Jane’s mother knows how to cook 10 dishes for lunch. For the next 5 days, Jane’s mother wants to create a 5-day lunch menu for Jane. How many different menus can Jane’s mother possibly create? (Jane would not tolerate repeating dishes, i.e. Jane does not want to have the same lunch twice within the 5 days)

13. Jane’s mother knows how to cook 10 dishes for lunch. For the next 10 days, Jane’s mother wants to create a 10-day lunch menu for Jane. How many different menus can Jane’s mother possibly create? (Jane would not tolerate repeating dishes, i.e. Jane does not want to have the same lunch twice within the 5 days)

---

# Homework
## [D305 Check digit](https://judge.hkoi.org/task/D305)
The Hong Kong Identity Card consists of 1 or 2 English letter(s) and 6 numeric digits. A check digit, which could be `0` to `9` or `A`, is appended in brackets. It is calculated as follows:
* For letters, A is converted to value 10, B to value 11, and so on. (Similar to base 36).
* If there are two letters, i.e. L<sub>1</sub>L<sub>2</sub>D<sub>1</sub>D<sub>2</sub>D<sub>3</sub>D<sub>4</sub>D<sub>5</sub>D<sub>6</sub>. The sum is s = 9L<sub>1</sub> + 8L<sub>2</sub> + 7D<sub>1</sub> + 6D<sub>2</sub> + 5D<sub>3</sub> + 4D<sub>4</sub> + 3D<sub>5</sub> + 2D<sub>6</sub>.
* If there is one letter, i.e. LD<sub>1</sub>D<sub>2</sub>D<sub>3</sub>D<sub>4</sub>D<sub>5</sub>D<sub>6</sub>. The sum is s = 9 x 36 + 8L + 7D<sub>1</sub> + 6D<sub>2</sub> + 5D<sub>3</sub> + 4D<sub>4</sub> + 3D<sub>5</sub> + 2D<sub>6</sub>.
* The check digit `c` shall be the smallest non-negative integer such that `s + c ≡ 0 (mod 11)`. If `c` is 10, A is used instead.

Write a program to calculate the check digit.

### INPUT
The input consists of the partial HKID number: 1 or 2 English letter(s) followed by 6 numeric digits.

### OUTPUT
Output the full HKID number including the check digit in brackets.

### SAMPLE TESTS
| |Input|Output
|---|---|---|
|1|A123456|A123456(3)|
|2|XY987654|XY987654(8)|
|3|G000000|G000000(A)|

> ASCII code tests
```
    int code = 'A';
    cout << "ASCII code for 'A' is: " << code << endl;
    cout << "ASCII code for 'A' is: " << int('A') << endl;

    cout << "ASCII code for 'B' is: " << int('B') << endl;
    cout << "ASCII code for 'C' is: " << int('C') << endl;
    cout << "ASCII code for 'D' is: " << int('D') << endl;
    cout << "ASCII code for 'Z' is: " << int('Z') << endl;
    cout << "ASCII code for 'a' is: " << int('a') << endl;
    cout << "ASCII code for 'b' is: " << int('b') << endl;
    cout << "ASCII code for 'c' is: " << int('c') << endl;
    cout << "ASCII code for 'z' is: " << int('z') << endl;
    cout << "ASCII code for '0' is: " << int('0') << endl;
    cout << "ASCII code for '1' is: " << int('1') << endl;
    cout << "ASCII code for '2' is: " << int('2') << endl;
    cout << "ASCII code for '9' is: " << int('9') << endl;
```

## Advanced Combinatorics questions
1. There are 4 seats arranged in a row. Alice, Bob, Charlie and Dave are each going to choose a seat. Alice should not sit next to Bob, and Charlie should not sit next to Dave. How many seating arrangements are there?

2. How many ways are there to pick, at the same time, two different integers between 1 and 8 (inclusive), such that their product is not a multiple of four?

3. Assume function `random(n)` returns an integer from 0 to n-1 randomly with equal probability. Consider the following C++ program:
```
int i, a, b;
int main() {
  a = random(4) * 2;
  b = random(3) + random(3);
  cout << b - a;
  return 0;
}
```
What is the number of possible different outputs?

4. Consider the number 2147483647. It has 10 digits. There are 2<sup>10-1</sup> = 512 ways to insert (possibly zero) plus signs (+) between the digits to obtain an arithmetic expression. For example, `2147483647`, `2+1+4+7+4+8+3+6+4+7`, and `214+74+8+3647` are three ways. How many of these arithmetic expressions evaluates to an odd number?

5. Consider the number 214748347. It has 9 digits. There are 2<sup>9-1</sup> = 256 ways to insert (possibly zero) plus signs (+) between the digits to obtain an arithmetic expression. For example, 214748347, 2+1+4+7+4+8+3+4+7, and 214+74+8+347 are three ways. How many of these arithmetic expressions evaluates to an odd number?

## Extra Credit Optional Homework
### [D401 Sieve of Erathosthenes](d401.pdf)
