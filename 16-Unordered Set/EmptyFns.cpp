#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{

	// declaration
	unordered_set<int> sample;

	// Check whether the unordered_set is empty
	if (sample.empty() == true)
		cout << "true" << endl;
	else
		cout << "false" << endl;

	// Insert a value
	sample.insert(5);

	// Now check whether it is empty
	if (sample.empty() == true)
		cout << "true" << endl;
	else
		cout << "false" << endl;

	return 0;
}
