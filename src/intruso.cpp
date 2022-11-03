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