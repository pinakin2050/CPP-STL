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

    cout<<"Set Elements before erase(): ";
	for (auto it = sampleSet.begin(); it != sampleSet.end(); it++) {
		cout << *it << " ";
	}

	// erases a particular element by its position
	sampleSet.erase(sampleSet.find(10));

	// displaying the set after removal
	cout<<"\nSet Elements after erase() with pos: ";
	for (auto it = sampleSet.begin(); it != sampleSet.end(); it++) {
		cout << *it << " ";
	}

	// erases a particular element
	sampleSet.erase(15);

	// displaying the set after removal
	cout<<"\nSet Elements after erase() with particular element: ";
	for (auto it = sampleSet.begin(); it != sampleSet.end(); it++) {
		cout << *it << " ";
	}

	// erases a range of elements
	sampleSet.erase(sampleSet.begin(), sampleSet.end());

	cout << "\nSet size: " << sampleSet.size();

	return 0;
}
