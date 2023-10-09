/*	Edited by 卓宏宇 aka katrox5
**  October 9st, 2023 
*/

#include <iostream>
using namespace std;

class Test {
public:
	Test();
	void print();
private:
	int a;
	int b;
};

Test::Test() {
	a = 1;
	b = 2;
}

void Test::print() {
	cout << a << " + " << b;
	cout << " = " << a + b << endl;
}
