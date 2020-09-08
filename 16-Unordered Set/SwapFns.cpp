#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{

	unordered_set<int> us1 = { 1, 2, 3, 4, 5 };
	unordered_set<int> us2 = { 5, 6, 7, 8, 9 };

	cout << "The elements of set 1 before swap(): ";

	for (auto it = us1.begin(); it != us1.end(); it++) {
		cout << *it << " ";
	}

	cout << "\nThe elements of set 2 before swap(): ";
	for (auto it = us2.begin(); it != us2.end(); it++) {
		cout << *it << " ";
	}

	// inbuilt swap function to swap
	// elements of two unordered_set
	swap(us1, us2);

	cout << "\n\nThe elements of set 1 after swap(): ";
	for (auto it = us1.begin(); it != us1.end(); it++) {
		cout << *it << " ";
	}

	cout << "\nThe elements of set 2 after swap(): ";
	for (auto it = us2.begin(); it != us2.end(); it++) {
		cout << *it << " ";
	}

	return 0;
}
