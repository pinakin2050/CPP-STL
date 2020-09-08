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

	// clear the set
	sampleSet.clear();

	// size after clearing
	cout << "\nSize of set after clearing elements: "
		<< sampleSet.size();

	return 0;
}
