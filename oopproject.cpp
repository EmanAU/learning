#include <iostream>
#include <string>
using namespace std;

template <typename T, typename U>
U add(T a, U b) {
	return a + b;
}

int main() {

	int a = 10;
	float b = 2.4;

	cout << add<int, float>(a, b) << endl;

	return 0;
}