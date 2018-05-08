/* 
If you want to use this program, you must input two colors names. Please, dont use uppercase letters!

Enter only those colors: green, blue, red, yellow, orange, white, black, pink, brown, purple. Entering other words will cause error.

Your input should look like similar to this one:

green
blue

Result is new color got from mixing your entered colors.
*/

#include <iostream>
#include <string>

using namespace std;

string mixing(string X, string Y, string Z);

string G = "green";
string B = "blue"; // RGB
string R = "red";
string YY = "yellow";
string O = "orange";
string W = "white";
string BL = "black";
string P = "pink";
string BR = "brown";
string V = "purple";
string NULL_ = "ERROR";

int main (){
    string X, Y, Z;
    mixing(X, Y, Z);
    return 0;
}

string mixing(string X, string Y, string Z){
    cout << "Hello! :) Welcome to my \"Color Mixer\"! Here you can type two your favorite colors and see the result what happens if you mix them up! Have fun!" << endl;
    cout << "Type your colors you want to mix. After entering one color press ENTER." << endl;
    cin >> X;
    cin >> Y;
    cout << "Your entered colors was: " << X << " & " << Y << "." << endl;
    // logic
    if (X == G){
        if (Y == B){
            Z = "cyan";
        }
        else if (Y == R){
            Z = B;
        }
        else if (Y == YY){
            Z = "lime";
        }
        else if (Y == O){
            Z = "grass green";
        }
        else if (Y == W){
            Z = "light green";
        }
        else if (Y == BL){
            Z = "dark green";
        }
        else if (Y == P){
            Z = "sand yellow";
        }
        else if (Y == BR){
            Z = "dark grass green";
        }
        else if (Y == V){
            Z = "dark grey";
        }
        else if (Y == G){
            Z = G;
        }
        else {
        cout << "ERROR! Try to enter your colors names again!" << endl;
            Z = NULL_;
        }
    }
    else if (X == B){
        if (Y == G){
            Z = "cyan";
        }
        else if (Y == R){
            Z = V;
        }
        else if (Y == YY){
            Z = G;
        }
        else if (Y == O){
            Z = "magenta";
        }
        else if (Y == W){
            Z = "light blue";
        }
        else if (Y == BL){
            Z = "dark blue";
        }
        else if (Y == P){
            Z = "light magenta";
        }
        else if (Y == BR){
            Z = "dark grey";
        }
        else if (Y == V){
            Z = "dark red";
        }
        else if (Y == B){
            Z = B;
        }
        else {
        cout << "ERROR! Try to enter your colors names again!" << endl;
            Z = NULL_;
        }
    }
    else if (X == R){
        if (Y == G){
            Z = YY;
        }
        else if (Y == B){
            Z = V;
        }
        else if (Y == YY){
            Z = O;
        }
        else if (Y == O){
            Z = "dark yellow";
        }
        else if (Y == W){
            Z = P;
        }
        else if (Y == BL){
            Z = "dark red";
        }
        else if (Y == P){
            Z = "cherry red";
        }
        else if (Y == BR){
            Z = "dark cherry red";
        }
        else if (Y == V){
            Z = "dark magenta";
        }
        else if (Y == R){
            Z = R;
        }
        else {
        cout << "ERROR! Try to enter your colors names again!" << endl;
            Z = NULL_;
        }
    }
    else if (X == YY){
        if (Y == G){
            Z = "lime";
        }
        else if (Y == B){
            Z = G;
        }
        else if (Y == R){
            Z = O;
        }
        else if (Y == O){
            Z = P;
        }
        else if (Y == W){
            Z = "light yellow";
        }
        else if (Y == BL){
            Z = "dark yellow";
        }
        else if (Y == P){
            Z = "light orange";
        }
        else if (Y == BR){
            Z = "dark red";
        }
        else if (Y == V){
            Z = "dark orange";
        }
        else if (Y == YY){
            Z = YY;
        }
        else {
        cout << "ERROR! Try to enter your colors names again!" << endl;
            Z = NULL_;
        }
    }
    else if (X == O){
        if (Y == G){
            Z = "grass green";
        }
        else if (Y == B){
            Z = "dark blue";
        }
        else if (Y == R){
            Z = "dark red";
        }
        else if (Y == YY){
            Z = P;
        }
        else if (Y == W){
            Z = "light orange";
        }
        else if (Y == BL){
            Z = "dark orange";
        }
        else if (Y == P){
            Z = R;
        }
        else if (Y == BR){
            Z = "grey";
        }
        else if (Y == V){
            Z = "dark purple";
        }
        else if (Y == O){
            Z = O;
        }
        else {
        cout << "ERROR! Try to enter your colors names again!" << endl;
            Z = NULL_;
        }
    }
    else if (X == W){
        if (Y == G){
            Z = "light green";
        }
        else if (Y == B){
            Z = "light blue";
        }
        else if (Y == R){
            Z = P;
        }
        else if (Y == YY){
            Z = "light yellow";
        }
        else if (Y == O){
            Z = "light orange";
        }
        else if (Y == BL){
            Z = "grey";
        }
        else if (Y == P){
            Z = "pastel pink";
        }
        else if (Y == BR){
            Z = "pastel brown";
        }
        else if (Y == V){
            Z = "magenta";
        }
        else if (Y == W){
            Z = W;
        }
        else {
        cout << "ERROR! Try to enter your colors names again!" << endl;
            Z = NULL_;
        }
    }
    else if (X == BL){
        if (Y == G){
            Z = "dark green";
        }
        else if (Y == B){
            Z = "dark blue";
        }
        else if (Y == R){
            Z = "dark red";
        }
        else if (Y == YY){
            Z = "dark yellow";
        }
        else if (Y == O){
            Z = "dark orange";
        }
        else if (Y == W){
            Z = "grey";
        }
        else if (Y == P){
            Z = V;
        }
        else if (Y == BR){
            Z = "dark brown";
        }
        else if (Y == V){
            Z = "dark purple";
        }
        else if (Y == BL){
            Z = BL;
        }
        else {
        cout << "ERROR! Try to enter your colors names again!" << endl;
            Z = NULL_;
        }
    }
    else if (X == P){
        if (Y == G){
            Z = "sand yellow";
        }
        else if (Y == B){
            Z = "light magenta";
        }
        else if (Y == R){
            Z = "cherry red";
        }
        else if (Y == YY){
            Z = "light orange";
        }
        else if (Y == O){
            Z = R;
        }
        else if (Y == W){
            Z = "pastel pink";
        }
        else if (Y == BL){
            Z = V;
        }
        else if (Y == BR){
            Z = "dark cherry red";
        }
        else if (Y == V){
            Z = "magenta";
        }
        else if (Y == P){
            Z = P;
        }
        else {
        cout << "ERROR! Try to enter your colors names again!" << endl;
            Z = NULL_;
        }
    }
    else if (X == BR){
        if (Y == G){
            Z = "dark grass green";
        }
        else if (Y == B){
            Z = "dark grey";
        }
        else if (Y == R){
            Z = "dark cherry red";
        }
        else if (Y == YY){
            Z = "dark red";
        }
        else if (Y == O){
            Z = "grey";
        }
        else if (Y == W){
            Z = "pastel brown";
        }
        else if (Y == BL){
            Z = "dark brown";
        }
        else if (Y == P){
            Z = "dark cherry red";
        }
        else if (Y == V){
            Z = "dark grey";
        }
        else if (Y == BR){
            Z = BR;
        }
        else {
        cout << "ERROR! Try to enter your colors names again!" << endl;
            Z = NULL_;
        }
    }
    else if (X == V){
        if (Y == G){
            Z = "dark grey";
        }
        else if (Y == B){
            Z = "dark red";
        }
        else if (Y == R){
            Z = "dark magenta";
        }
        else if (Y == YY){
            Z = "dark orange";
        }
        else if (Y == O){
            Z = "dark purple";
        }
        else if (Y == W){
            Z = P;
        }
        else if (Y == BL){
            Z = "dark purple";
        }
        else if (Y == P){
            Z = "magenta";
        }
        else if (Y == BR){
            Z = "dark grey";
        }
        else if (Y == V){
            Z = V;
        }
        else {
        cout << "ERROR! Try to enter your colors names again!" << endl;
            Z = NULL_;
        }
    }
    else {
        cout << "ERROR! Try to enter your colors names again!" << endl;
            Z = NULL_;
    }
    
    cout << "Your result is color: " << Z << ".";
    return Z;
}
