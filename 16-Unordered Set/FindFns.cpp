#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{

	unordered_set<string> sampleSet = { "geeks1", "for", "geeks2" };

	// use of find() function
	if (sampleSet.find("geeks1") != sampleSet.end()) {
		cout << "element found." << endl;
	}
	else {
		cout << "element not found" << endl;
	}

	return 0;
}
