# Class 1
## Coding in replit.com
1. Register an account
2. Join the twgss Repl project
3. Hello world program:
```
#include <iostream>
using namespace std;

int main() {
	cout << "Hello World!" << endl;
}
```
4. Create your own Repl that prints your own name and invite me (id: haye) into it. [video](http://miyagiacademy.com/public/first-repl.mp4)

## A simple program that counts the occurrences of 'H'
```
#include <iostream>
using namespace std;

int main() {
	string names;
	char letter;
	int i, count;
	names = "CHEN BAI AN HUI KA WAI WAN WING TSANG CHAN PAK HANK LAM CHEUK YIN CHUNG HSIN YU FOK WAI CHUNG LAU YUET CHING LEE HIU TUNG";
	count = 0;
	for (i=0; i<names.size(); i+=1) {
		if (names[i] == 'H') {
			count += 1;
		}
	}
	cout << count << endl;
	return 0;
}
```
1. Every variable need to be declared before you can use it.
2. `string` is an object for storing a *string*.
3. All variables in this program are *local* variables as opposed to *global* variables
4. You can *initialize* a variable when you're declaring it.
5. A for loop in C++ looks like this:
```
for (i=0; i<10; i+=1) {
  [do something...]
}
```
6. `cout` prints the output.
7. Every C++ program starts and finish with the `main()` function. It expects you to return an integer so it's good to `return 0`.

---

## Heat Event Revision
