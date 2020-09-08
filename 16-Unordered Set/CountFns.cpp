#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{

	unordered_set<int> sampleSet;

	// Inserting elements
	sampleSet.insert(5);
	sampleSet.insert(10);
	sampleSet.insert(15);
	sampleSet.insert(20);
	sampleSet.insert(25);

	// displaying all elements of sampleSet
	cout << "sampleSet contains: ";
	for (auto itr = sampleSet.begin(); itr != sampleSet.end(); itr++) {
		cout << *itr << " ";
	}

	// checking if element 20 is present in the set
	if (sampleSet.count(20) == 1) {
		cout << "\nElement 20 is present in the set";
	}
	else {
		cout << "\nElement 20 is not present in the set";
	}

	return 0;
}
