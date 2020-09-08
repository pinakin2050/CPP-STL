#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{

	unordered_set<int> us = { 1, 2, 3, 4, 5 };

	// prints the size of us
	cout << "size of set:" << us.size();

	// prints the element
	cout << "\nThe elements are: ";
	for (auto it = us.begin(); it != us.end(); it++)
		cout << *it << " ";

	return 0;
}
