#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<char> vec{ 'H','E','L','L','O' };
	
	
	for (auto el = vec.begin(); el != vec.end(); el++)
		cout << *el << ", ";

	cout << endl;
	
	for (auto el = vec.rbegin(); el != vec.rend(); el++)
		cout << *el << ", ";

	cout << endl;

	for (auto el : vec)
		cout << el << ", ";
}
