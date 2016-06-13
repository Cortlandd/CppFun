#include <iostream>

using namespace std;

int findPerimeter(int length = 20, int width = 30);

int main() {
  
  	int p = findPerimeter();
	cout << "The value of findPerimeter is: " << p << endl;

	/**/p = findPerimeter(5, 10);
	cout << "Get value" << p << endl;

	/**/p = findPerimeter(10);
	cout << "Get value: " << p << endl;

	return 0;
}

int findPerimeter(int length, int width) {
	return 2 * length + 2 * width;
}
