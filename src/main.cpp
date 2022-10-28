#include "intruso.hpp"
#include <iostream>

int main() {
	std:: cout << "foi" << std::endl;
	int num_entradas, i;
	std::string senha;
	Intruso intruso;

	std::cin >> num_entradas;
	std::cin.ignore();

	// 1 7 3 9 0 8 5 6 2 4 B C E A E B
	// 9 0 7 5 8 4 6 2 3 1 E C C B D A

	for (i = 0; i < num_entradas; i++) {

		std::getline(std::cin, senha);

		// std::cout << "Senha digitada: " << senha << "\r\n";

		intruso.set_senha_vazada(senha);
	};

	std::cout << intruso.crack_senha() << std::endl;

	return 0;
}