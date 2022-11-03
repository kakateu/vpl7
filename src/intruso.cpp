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
	std::string aux_relacao_letras_numeros;
	std::vector<std::string> relacao_letras_numeros;

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

	// Olha todas as letras da senha digitada e junta com os digitos numa string
	for (uint i = 0; i < aux_digitos.size(); i++) {
		char c;

		c = aux_digitos[i];

		// std::cout << "Letra: " << c << "\r\n";

		switch (c) {
			case 'A':
				// aux_relacao_letras_numeros = aux_digitos[i] + (char)aux_numeros[0] + (char)aux_numeros[1];
				aux_relacao_letras_numeros = aux_digitos[i];
				aux_relacao_letras_numeros = aux_relacao_letras_numeros + aux_numeros[0];
				aux_relacao_letras_numeros = aux_relacao_letras_numeros + aux_numeros[1];
				break;
			case 'B':
				// aux_relacao_letras_numeros = aux_digitos[i] + (char)aux_numeros[2] + (char)aux_numeros[3];
				aux_relacao_letras_numeros = aux_digitos[i];
				aux_relacao_letras_numeros = aux_relacao_letras_numeros + aux_numeros[2];
				aux_relacao_letras_numeros = aux_relacao_letras_numeros + aux_numeros[3];
				break;
			case 'C':
				// aux_relacao_letras_numeros = aux_digitos[i] + (char)aux_numeros[4] + (char)aux_numeros[5];
				aux_relacao_letras_numeros = aux_digitos[i];
				aux_relacao_letras_numeros = aux_relacao_letras_numeros + aux_numeros[4];
				aux_relacao_letras_numeros = aux_relacao_letras_numeros + aux_numeros[5];
				break;
			case 'D':
				// aux_relacao_letras_numeros = aux_digitos[i] + (char)aux_numeros[6] + (char)aux_numeros[7];
				aux_relacao_letras_numeros = aux_digitos[i];
				aux_relacao_letras_numeros = aux_relacao_letras_numeros + aux_numeros[6];
				aux_relacao_letras_numeros = aux_relacao_letras_numeros + aux_numeros[7];
				break;
			case 'E':
				// aux_relacao_letras_numeros = aux_digitos[i] + (char)aux_numeros[8] + (char)aux_numeros[9];
				aux_relacao_letras_numeros = aux_digitos[i];
				aux_relacao_letras_numeros = aux_relacao_letras_numeros + aux_numeros[8];
				aux_relacao_letras_numeros = aux_relacao_letras_numeros + aux_numeros[9];
				break;
			default:
				std::cout << "Entrou default";
				break;
		}

		// std::cout << "String: " << aux_relacao_letras_numeros << "\r\n";

		// Caso a string nao esteja vazia, da um push_back no vetor de strings
		if (aux_relacao_letras_numeros != "") {
			relacao_letras_numeros.push_back(aux_relacao_letras_numeros);
			aux_relacao_letras_numeros = "";
		} else {
			std::cout << "Relacao vazia";
		}
	}

	// Add o vetor de strings no vetor de vetor de string
	lista_relacao_letras_numeros.push_back(relacao_letras_numeros);

	// std::cout << "Adicionou uma nova senha vazada a lista \r\n";
}

std::string Intruso::crack_senha() {

	for (int i = 0; i < lista_relacao_letras_numeros.size(); i++) {
		for (int j = 0; j < lista_relacao_letras_numeros[i].size(); j++) {
			std::cout << lista_relacao_letras_numeros[i][j] << "\r\n";
		}

		std::cout << "\r\n";
	}
	return "0";
};