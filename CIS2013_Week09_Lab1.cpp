#include <iostream>
#include <cstring>
using namespace std;

int main()
{

	char name[6] = "Bobby";
	char last[8] = "Rockers";
	char copy[8];

	strncpy(copy, last, 8);

	cout << "First " << name << ", Last " << last << endl;

	return 0;
}