#include<iostream>
#include<vector>
#include<algorithm>

int main() {
	std::vector<int> v{ 1,2,3,4,5,6,7,8,9,10 };

	std::cout << "Vector before partition: ";
	for (int i : v)
		std::cout << i << " ";

	//std::partition(v.begin(), v.end(), [](int x) {	return x % 2 == 0; });
	std::partition(begin(v),end(v),[](int x){ return x%2 == 0; });   //begin() and end() can also be used like this

	std::cout << "\nVector after partition: ";
	for (int i : v)
		std::cout << i << " ";

	return 0;
}
