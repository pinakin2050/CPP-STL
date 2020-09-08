#include<iostream>
#include<vector>
#include<algorithm>

int main() {
	std::vector<int> v{ 1,2,3,4,5,6,7,8,9,10 };

	std::cout << "Vector before partition: ";
	for (int i : v)
		std::cout << i << " ";

	std::stable_partition(v.begin(), v.end(), [](int x) {	return x % 2 == 0; });

	std::cout << "\nVector after partition: ";
	for (int i : v)
		std::cout << i << " ";

	return 0;
}
