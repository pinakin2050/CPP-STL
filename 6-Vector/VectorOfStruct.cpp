#include<iostream>
#include<vector>

struct Corners {
	float a, b, c, d;
};

//Overloading operator << to print variables of Corners struct
std::ostream& operator<<(std::ostream& stream, const Corners& corner) {
	stream << corner.a << " " << corner.b << " " << corner.c << " " << corner.d;
	return stream;
}

int main() {
	std::vector<Corners> corners;

	corners.push_back({ 1.2, 3.4, 5.6, 7.8 });
	corners.push_back({ 9.10, 11.12, 13.14, 14.15 });

	for (auto i = corners.begin(); i != corners.end(); ++i) {
		std::cout << i->a << " " << i->b << " " << i->c << " " << i->d << std::endl;
	}

	//You can also overwrite << operator to user corners[i] to print all values
	for (int i = 0; i < corners.size(); ++i) {
		std::cout << corners[i] << std::endl;
	}

	return 0;
}
