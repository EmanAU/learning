#include <iostream>
#include <string>
using namespace std;

class Feature {
public:
	void function() {
		cout << "This is the module that I have added in the new branch" << endl;
	}
};

int main() {


	Feature f;
	f.function();
	cout << endl;


	return 0;
}