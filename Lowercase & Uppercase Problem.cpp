/*
Gooby hates inconsistencies, therefore words like
"GoOBy" or "HeLLo" bother him a lot, since the 
letters differ in case (some are lowercase, 
some are uppercase). Therefore, he wants to 
invent a browser extension to make all words
pretty. A word is pretty in Gooby's eyes, if 
all of its letters are of the same case. For 
example, "gooby" and "GOOBY" are both pretty 
words. Gooby wants to save resources and perform
as few case-changing operations as possible.
Therefore, the word "GOOby" should become 
"GOOBY", and the word "Gooby" should become 
"gooby". If turning the word to uppercase and
lowercase takes the same amount of operations,
the extension should use lowercase. Please help
Gooby to write the main function of this extension!
*/

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
