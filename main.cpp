#include <iostream>
#include "TextBox.h"
using namespace std;

int main() {
    TextBox textObject;
    string input;

    cout << "Give me a good string (no spaces) -> ";
    cin >> input;
    textObject.setString(input);

    cout << "Nice, you said " << textObject.getString() << endl;

    return 0;
}
