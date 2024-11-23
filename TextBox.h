#pragma once

#include <iostream>
using namespace std;

class TextBox {
	TextBox(string text);
public:
	string getString();
	void setString(string text);

private:
	string typeString;
};