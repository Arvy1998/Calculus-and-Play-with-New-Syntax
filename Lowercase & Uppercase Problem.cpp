#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <sstream>
#include <stdexcept>
#include <cstring>

using namespace std; 

int main() {
	string awo;
	int up = 0, down = 0;
	cin >> awo;
	int l = awo.length();
	char word[101];
	strcpy(word, awo.c_str());
	for (int i = 0; i < l; i++) {
		if (word[i] == toupper(word[i])) {
			up++;
		}
		else down++;
	}
	if (up == l) {
		for (int j = 0; j < l; j++) {
			word[j] = toupper(word[j]);
			cout << word[j];
		}
	}
	else if (down == l) {
		for (int j = 0; j < l; j++) {
			word[j] = tolower(word[j]);
			cout << word[j];
		}
	}
	else if (up >= down) {
		for (int j = 0; j < l; j++) {
			word[j] = toupper(word[j]);
			cout << word[j];
		}
	}
	else {
		for (int j = 0; j < l; j++) {
			word[j] = tolower(word[j]);
			cout << word[j];
		}
	}
	return 0;
}
