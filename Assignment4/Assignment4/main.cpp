#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void exclaim(string& text) {
	for (auto& c : text) {
		if (ispunct(c)) {
			c = '!';
		}
	}
}

int main() {
	string speech = "To be, or not to be, that is the question: ";
	cout << "Before calling excalim: " << speech << endl;
	exclaim(speech);
	cout << "After calling exclaim: " << speech << endl;
}