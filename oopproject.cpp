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

<<<<<<< HEAD

	Feature f;
	f.function();
	cout << endl;

=======
	cout << "Hello world, this is the initial phase!" << endl;
	cout << "This is the 2nd change in the main" << endl;
>>>>>>> main

	return 0;
}