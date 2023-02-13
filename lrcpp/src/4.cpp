#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <algorithm>

using namespace std;

struct SomeData {
	int a, b, c;

};

template <typename T, typename U>
auto add(T x, U y) { return x + y; }

constexpr int pow(int x, int y) {
	int result = x;
	while (--y > 0) {
		result *= x;
	}
	return result;
}


int main() {

	int *p = new int;

	cout << add( pow(2, 4) , 2.0) << endl;

	unique_ptr<SomeData> data( new SomeData );

	auto data2 = make_unique< SomeData >();

	cout << data.get() << endl;
	cout << data2.get() << endl;

	vector<int> nums = {1,2, 3, 4, 5};

	auto it = find_if( nums.begin(), nums.end(), [](int x) { return x % 2 == 0; } );

	cout << "The first odd number is " << *it << endl;

	return 0;
}
