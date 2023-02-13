#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector< pair<int, int> > numbers = { {1, 1}, {2, 2}, {3, 3}, {4, 4} };

	for (auto it = numbers.cbegin();
			it != numbers.cend(); ++it) {
		cout << it -> first << ", " << it -> second << endl;
	}
	
	return 0;
}
