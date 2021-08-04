# Class 4
## Homework from last week
### Check Digit
- A correct program generates the correct output for any input (testing is an important skill)
- Make sure you test the case when s is divisible by 11
> Correctness is Absolute in Computer Science

### Advanced Combinatorics questions
1. There are 4 seats arranged in a row. Alice, Bob, Charlie and Dave are each going to choose a seat. Alice should not sit next to Bob, and Charlie should not sit next to Dave. How many seating arrangements are there?
> 8 (if A is seated first there are only 2 options left, i.e. seating C next or seating D next. Similarly, there are only 2 options after seating B first. Same for seating C or seating D first.)

2. How many ways are there to pick, at the same time, two different integers between 1 and 8 (inclusive), such that their product is not a multiple of four?
> 14 (first you exclude 4 and 8, so there are only 6 viable choices. then the exercise is reduced to 6 choose 2, which is 15. But (2, 6) also needs to be excluded)

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
> 11 (a: 0, 2, 4, 6, b: 0, 1, 2, 3, 4)

4. Consider the number 2147483647. It has 10 digits. There are 2<sup>10-1</sup> = 512 ways to insert (possibly zero) plus signs (+) between the digits to obtain an arithmetic expression. For example, `2147483647`, `2+1+4+7+4+8+3+6+4+7`, and `214+74+8+3647` are three ways. How many of these arithmetic expressions evaluates to an odd number?
> 256<br>
![illustration](illustration1.jpg)

5. Consider the number 214748347. It has 9 digits. There are 2<sup>9-1</sup> = 256 ways to insert (possibly zero) plus signs (+) between the digits to obtain an arithmetic expression. For example, 214748347, 2+1+4+7+4+8+3+4+7, and 214+74+8+347 are three ways. How many of these arithmetic expressions evaluates to an odd number?
> 128


Study and review the questions related to combinatorics (or some call "counting"):
[Question Paper](https://assets.hkoi.org/ref/2018hj.pdf) - [Answers](https://assets.hkoi.org/ref/2018hj_sol.pdf)

---

## Sieve of Eratosthenes
- You will need to have a good command of C++ in order to solve this problem
- Review the C++ tutorial/references [here](https://github.com/miyagi-sensei/twgss/blob/main/README.md) again 

![illustration](https://upload.wikimedia.org/wikipedia/commons/b/b9/Sieve_of_Eratosthenes_animation.gif)

## Previous Primes Counting Program
```
bool is_prime(int num) {
	for (int i = 2; i*i <= num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
  int i, N, count = 0;
  cin >> N;
	for (i = 2; i<=N; i++) {
		if (is_prime(i)) {
			count += 1;
		}
	}
	cout << count << endl;
	return 0;
}
```
### Runtime Benchmark
|N|Previous Method|Sieve of Eratosthenes
|---|---|---|
|1,000,000|0.352s|0.015s
|2,000,000|0.912s|0.024s
|4,000,000|2.295s|0.049s
|8,000,000|6.612s|0.116s
|16,000,000|>20s|0.326s

---

# Homework
### Finish [D401 Sieve of Erathosthenes](d401.pdf)
### Learn Stack, Queue and Linked List from the below video:
- [Stack concepts](https://youtu.be/F1F2imiOJfk), [Stack implementation](https://youtu.be/sFVxsglODoo)
- [Queue concepts](https://youtu.be/XuCbpw6Bj1U), [Queue implementation](https://youtu.be/okr-XE8yTO8)
- [Linked List concepts](https://youtu.be/NobHlGUjV3g), [Linked List implementation](https://youtu.be/vcQIFT79_50)

### Extra Credit: [D205 Maximum and second Maximum](d208.pdf)

