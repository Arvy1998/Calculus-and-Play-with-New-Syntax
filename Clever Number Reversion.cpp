#include <iostream>
#include <cmath>

using namespace std;

int reversion(int i, int number, int count, int result);

int main (){
    int i, number, count;
    float result;
    cout << "Hello! :) This program reverses any number, just answer the questions and get your number reversed! :) Have fun!" << endl;
    
    // if u want to play with this program, then choose any number and write how many digits it has, for example: your input should look like similar to this one bellow:
    
    /*
    135677
    6
    */
    
    reversion(i, number, count, result);
    return 0;
}

int reversion(int i, int number, int count, int result){
    int n = 0; // integer for powering value 10
               // example: if n = 3, 10^3 = 1000
    int value = 10;
    cout << "Type any number: ";
    cin >> number;
    cout << "How many digits have this number?" << endl;
    cin >> count;
    n = count;
    cout << "Reversed number is: ";
    place:
    for (i = 1; i <= count; i++){
        result = number / (value / 10) % 10;
        for (int j = 1; j <= n; j++){
        value *= 10;
        count--;
        cout << result;
        goto place;
    }
    }
    return result;
}
