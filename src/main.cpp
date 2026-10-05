#include <iostream>
#include "terminal.hpp"

int main(int argc, char** argv) {
	Terminal terminal;
	terminal.moveCursor(5, 10);
	std::cout << "Hello World!" << std::endl;
	return 0;
}
