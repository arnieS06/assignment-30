#pragma once

#include <iostream>
using namespace std;

class TextBox {
public:
	TextBox(string text);
	string getString();
	void setString(string text);

private:
	string typeString;
};
