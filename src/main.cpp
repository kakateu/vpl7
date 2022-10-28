#include "intruso.hpp"
#include <iostream>

int main() {
	std::cout << "foi" << std::endl;
	int num_entradas, i;
	std::string senha;
	Intruso intruso;

	std::cin >> num_entradas;
	std::cin.ignore();

	// 1 7 3 9 0 8 5 6 2 4 B C E A E B
	// 9 0 7 5 8 4 6 2 3 1 E C C B D A

	// 0 1 2 3 4 5 6 7 8 9 B C D D E E
	// 1 3 5 4 6 8 7 9 0 2 E B C D C D
	// 3 2 0 4 5 9 7 6 8 1 A C D D E C 2 4 7 7 8 9

	for (i = 0; i < num_entradas; i++) {

		std::getline(std::cin, senha);

		// std::cout << "Senha digitada: " << senha << "\r\n";

		intruso.set_senha_vazada(senha);
	};

	std::cout << intruso.crack_senha() << std::endl;

	return 0;
}