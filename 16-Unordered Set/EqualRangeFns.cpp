#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
	// declaration
	unordered_set<int> sample;

	// Insert some values
	sample.insert({ 20, 30, 40 });

	// Test the equal_range function for
	// a given key if it does exists
	auto range1 = sample.equal_range(20);
	if (range1.first != sample.end()) {
		for (; range1.first != range1.second; ++range1.first)
			cout << *range1.first << endl;
	}
	else
		cout << "Element does not exist";
	return 0;
}
