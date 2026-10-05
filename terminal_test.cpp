#include <iostream>
#include <random>

int main(int argc, char** argv) {

	std::random_device rd;

	std::mt19937 gen(rd());

	std::uniform_int_distribution<int> distribution(1, 100);

	std::cout << "some" << "\x1B[" << distribution(gen) <<";" << distribution(gen) << "H" << "output" << std::endl;

	return 0;
}
