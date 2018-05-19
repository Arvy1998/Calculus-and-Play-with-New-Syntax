#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <sstream>
#include <cstring>
#include <map>

using namespace std;

int main() {
    int a, b;
    long long temp, result = 1;

    cin >> a;
    cin >> b;

    for(int i = 0; i < b; i++) {
        result *= a-i;
    }

    cout << result;
}
