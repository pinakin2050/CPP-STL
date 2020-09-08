// CPP program to illistrate
// application of this function
// Program to correct the marks
// given in different subjects
#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

// driver code
int main()
{
	// marks in different subjects
	unordered_map<string,int> my_marks = {
					{"Maths", 90},
					{"Physics", 87},
					{"Chemistry", 98},
					{"Computer Application", 94}
					};


		my_marks.at("Physics") = 97;
		my_marks.at("Maths") += 10;
		my_marks.at("Computer Application") += 6;

		for (auto& i: my_marks)
		{
			cout<<i.first<<": "<<i.second<<endl;
		}



	return 0;
}
