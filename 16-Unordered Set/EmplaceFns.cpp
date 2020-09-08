#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{

	unordered_set<string> sampleSet;

	// Inserting elements using
	// emplace() function
	sampleSet.emplace("Welcome");
	sampleSet.emplace("To");
	sampleSet.emplace("GeeksforGeeks");
	sampleSet.emplace("Computer Science Portal");
	sampleSet.emplace("For Geeks");

	// displaying all elements of sampleSet
	cout << "sampleSet contains: ";
	for (auto itr = sampleSet.begin(); itr != sampleSet.end(); itr++) {
		cout << *itr << " ";
	}

	return 0;
}
