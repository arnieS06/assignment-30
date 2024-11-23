#include "TextBox.h"
#include <iostream>
using namespace std;

TextBox::TextBox(string text) {
	this->typeString = text;
}

string TextBox::getString() {
	return typeString;
}

void TextBox::setString(string text) {
	this->typeString = text;
}
