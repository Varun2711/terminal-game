#include "terminal.hpp"
#include <iostream>


void Terminal::moveCursor(int x, int y) {
	std::cout << "\x1B[" << y+1 << ";" << x+1 << "H";
}

void Terminal::clear() {
	std::cout << "\x1B[2J";
	moveCursor(1,1);
}

