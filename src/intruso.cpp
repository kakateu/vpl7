#include "intruso.hpp"
#include <iostream>

// SenhaVazada::SenhaVazada(std::string numeros, std::string digitos) {
// 	_numeros = numeros;
// 	_digitos = digitos;
// };

void Intruso::set_senha_vazada(std::string vazou) {
	std::string aux_vazou;
	std::string aux_numeros;
	std::string aux_digitos;

	// Pega entrada e retira os espacos
	for (uint i = 0; i < vazou.size(); i++) {
		// std::cout << "Vazou: " << vazou[i] << "\r\n";
		if (vazou[i] != ' ') {
			aux_vazou = aux_vazou + vazou[i];
		};
	};

	// std::cout << aux_vazou << "\r\n";

	// Pega a relacao de numeros da entrada sem espacos
	for (uint i = 0; i < 10; i++) {
		if (aux_vazou[i] != ' ') {
			aux_numeros = aux_numeros + aux_vazou[i];
		};
	};

	// std::cout << aux_numeros << "\r\n";

	// Pega as letras digitadas
	for (uint i = 10; i < 16; i++) {
		if (aux_vazou[i] != ' ') {
			aux_digitos = aux_digitos + aux_vazou[i];
		};
	};

	// std::cout << aux_digitos << "\r\n";
}

std::string Intruso::crack_senha() {
	std::multimap<char, char>::iterator itr;
	std::list<std::multimap<char, char>>::iterator itr2;

	std::cout << "Print da lista com as relacoes \r\n";

	for (itr2 = lista_relacao_letras_numeros.begin(); itr2 != lista_relacao_letras_numeros.end(); ++itr2) {
		for (itr = itr2->begin(); itr != itr2->end(); ++itr) {
			std::cout << itr->first << " " << itr->second << "\r\n";
		};

		std::cout << "\r\n";
	};

	return "0";
};