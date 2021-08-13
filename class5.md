# Class 5
## Homework from last week
### [D401 Sieve of Erathosthenes](https://github.com/miyagi-sensei/twgss/blob/main/d401.pdf)
- notice the use of nested for-loop
- use of `if` for *control flow*
- use of 1D boolean array
- practice a few more times until you can write this by yourself without looking at the sample solution!

### [D205 Maximum and second Maximum](https://github.com/miyagi-sensei/twgss/blob/main/d208.pdf)
- Sorting all the numbers is time-consuming. In Computer Science terms, sorting takes O(N<sup>2</sup>) if you use bubble sort. Even using the best sorting algorithm, it will still take O(NlogN) time. (more on that later)
- Please try to solve it without sorting the numbers. This exercise is about designing logic/algorithm to do specific task. It's kind of a creative exercise.

[solution to come]

## Boolean Logic
> If it doesn’t rain this weekend *and* I finished my homework, my mother will take me to Disney.

What does this sentence mean? How does the operator *and* work?

> If I miss classes too often *or* I get into a physical fight, I will be expelled from school.”

What does that sentence mean? How does the operator or work?


- In the boolean world, a statement is either *true* or *false*. (Real life, however, is a lot more complicated with shades of gray everywhere) 
- Boolean values are either `true` or `false`.

### Truth table for *AND*
|operand 1|operand 2|result|
|---|---|---|
|F|F|F|
|F|T|F|
|T|F|F|
|T|T|T|

### Truth table for *OR*
|operand 1|operand 2|result|
|---|---|---|
|F|F|F|
|F|T|T|
|T|F|T|
|T|T|T|

There are also *XOR* and *NAND*. Can you google them and try to come up with the truth table for *XOR*?

### Conditional Statements
> A conditional is a logical compound statement in which a statement p, called the *antecedent*, implies a statement q, called the *consequent*.<br>
> It’s written as p —> q
- Your teacher tells you “If you steal a computer from school, you will be expelled”. That statement is a conditional. 
- “If you steal a computer from school” is an *antecedent* (p). 
- “you will be expelled” is the *consequent* (q). 
- If you didn’t steal a computer from school but you were expelled, is your teacher wrong? In what case could you say your teacher was wrong? 

### Truth table for the conditional statements
|p|q|p -> q|
|---|---|---|
|F|F|T|
|F|T|T|
|T|F|F|
|T|T|T|

### Contrapositive is equivalent to the Conditional Statement
For any conditional p —> q, there are 3 related statements:
- the converse (q —> p)
- the inverse (~p —> ~q)
- the contrapositive (~q —> ~p)

Examples:
- Conditional: If someone lives on the 22/F, there is an elevator in his building.
- Converse: If there is an elevator in someone’s building, he lives on the 22/F.
- Inverse: If someone does not live on the 22/F, there is no elevator in his building.
- Contrapositive: If there is no elevator in someone’s building, he does not live on the 22/F.

Which of the above are sensible and logical? Which of the above are logically equivalent?
Examine their truth tables.

### Logical Equivalence
> Two statements are logically equivalent if their truth tables are identical.

### Truth table for the contrapositive
|p|q|~q|~p|~q -> ~p|
|---|---|---|---|---|
|F|F|T|T|T|
|F|T|F|T|T|
|T|F|T|F|F|
|T|T|F|F|T|

### Negation
Negation of a statement can be tricky, especially when there are *qualifiers* in it.
The following pairs of statements are negation of each other
- “*All* A are B” vs. “*At least one* A is not B”
- “*No* A are B” vs. “*At least one* A is B”

How do you test a program for *CORRECTNESS*?
You disprove its *correctness* if you can find *at least one* wrong answer case. Because a *correct* program needs to print correct answers for *all* inputs.

### Negation of a Conditional
To reject a conditional p —> q, we can prove that its negation is true.
The negation of p —> q is logically equivalent to p AND ~q.

"If you get the vaccine, you will not get COVID."
- p is "if you get the vaccine"
- q is "you will not get COVID"
- if you can find 1 person who got the vaccine and also caught COVID, you have proven this conditional false
- that was the negation of p -> q, which is logically equivalent to p `and` ~q

---

# Homework
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

## Fibonacci Numbers
In mathematics, the Fibonacci sequence is defined as F<sub>n</sub> = F<sub>n-1</sub> + F<sub>n-2</sub> with F<sub>0</sub> = 0 and F<sub>1</sub> = 1. The first few Fibonacci numbers are 0, 1, 1, 2, 3, 5, 8, 13, ...
Write a program to find F<sub>x</sub>

### Input and Output
The input consists of an integer x. (0 ≤ x ≤ 40)
Output F<sub>x</sub>

### Sample Tests
||Input|Output|
|---|---|---|
|1|0|0|
|2|1|1|
|3|7|13|

## Extra reading on logic (optional)
http://www.opentextbookstore.com/mathinsociety/2.5/Logic.pdf
