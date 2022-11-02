#include "intruso.hpp"
#include <iostream>

void Intruso::set_senha_vazada(std::string vazou) {
	std::string aux_vazou;
	std::string aux_numeros;
	std::string aux_digitos;
	std::string aux_relacao_letras_numeros;
	std::vector<std::string> relacao_letras_numeros;

	// Pega entrada e retira os espacos
	for (int i = 0; i < vazou.size(); i++) {
		// std::cout << "Vazou: " << vazou[i] << "\r\n";

		if (vazou[i] != ' ') {
			aux_vazou = aux_vazou + vazou[i];
		};
	};

	// std::cout << aux_vazou << "\r\n";

	// Pega a relacao de numeros da entrada sem espacos
	for (int i = 0; i < 10; i++) {
		if (aux_vazou[i] != ' ') {
			aux_numeros = aux_numeros + aux_vazou[i];
		};
	};

	// std::cout << aux_numeros << "\r\n";

	// Pega as letras digitadas
	for (int i = 10; i < 16; i++) {
		if (aux_vazou[i] != ' ') {
			aux_digitos = aux_digitos + aux_vazou[i];
		};
	};

	// std::cout << aux_digitos << "\r\n";

	for (int i = 0; i < aux_digitos.size(); i++) {
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

		if (aux_relacao_letras_numeros != "") {
			relacao_letras_numeros.push_back(aux_relacao_letras_numeros);
			aux_relacao_letras_numeros = "";
		} else {
			std::cout << "Relacao vazia";
		}
	}

	// Add o multimap na lista de relacao de letras e numeros
	lista_relacao_letras_numeros.push_back(relacao_letras_numeros);

	std::cout << "Adicionou uma nova senha vazada a lista \r\n";
};

std::string Intruso::crack_senha() {

	std::string senha_crakeada = "      ";
	char senha_teste[100] = "";
	// std::vector<char> senha_crakeada;

	std::vector<std::string>
		aux_senha = lista_relacao_letras_numeros[0];

	// std::string aux_senha_digitada0 = lista_senhas_digitadas[0];
	// std::string aux_senha_digitada1 = lista_senhas_digitadas[1];

	for (int i = 0; i < lista_relacao_letras_numeros.size(); i++) {
		for (int j = 0; j < lista_relacao_letras_numeros[i].size(); j++) {
			std::cout << lista_relacao_letras_numeros[i][j] << "\r\n";
		}

		std::cout << "\r\n";
	}

	// std::cout << "teste\r\n";

	int j = 0;

	for (int i = 1; i < lista_relacao_letras_numeros.size(); i++) {
		// std::cout << "Rodou for i!\r\n";
		for (int k = 0; k < aux_senha.size(); k++) {
			// std::cout << "Rodou for k!\r\n";
			// for (int j = 0; j < lista_relacao_letras_numeros[i].size(); j++) {
			// std::cout << "Rodou for j!\r\n";
			std::cout << "Comparacao: " << aux_senha[k] << " e " << lista_relacao_letras_numeros[i][k] << "\r\n";

			// if (aux_senha[k][0] == 'A')

			if (((aux_senha[k][1] == lista_relacao_letras_numeros[i][k][1]) && (aux_senha[k][2] == lista_relacao_letras_numeros[i][k][2])) ||
				((aux_senha[k][1] == lista_relacao_letras_numeros[i][k][2]) && (aux_senha[k][2] == lista_relacao_letras_numeros[i][k][1]))) {
				std::cout << "Os dois numeros sao iguais!\r\n";
				// break;
				// } else if ((aux_senha[k][1] == lista_relacao_letras_numeros[i][j][2]) && (aux_senha[k][2] == lista_relacao_letras_numeros[i][j][1])) {
				// std::cout << "Os dois numeros sao iguais!\r\n";
			} else if ((aux_senha[k][1] == lista_relacao_letras_numeros[i][k][1]) && (aux_senha[k][2] != lista_relacao_letras_numeros[i][k][2])) {
				std::cout << "Primeiro igual ao primeiro!\r\n";
				senha_crakeada[k] = aux_senha[k][1];
				// senha_crakeada = senha_crakeada + aux_senha[k][1];
				// std::cout << lista_relacao_letras_numeros[i][j] << "\r\n";
			} else if ((aux_senha[k][1] != lista_relacao_letras_numeros[i][k][1]) && (aux_senha[k][2] == lista_relacao_letras_numeros[i][k][2])) {
				std::cout << "Segundo igual ao segundo!\r\n";
				senha_crakeada[k] = aux_senha[k][2];
				// senha_crakeada = senha_crakeada + aux_senha[k][2];
				// std::cout << lista_relacao_letras_numeros[i][j] << "\r\n";
			} else if ((aux_senha[k][1] != lista_relacao_letras_numeros[i][k][2]) && (aux_senha[k][2] == lista_relacao_letras_numeros[i][k][1])) {
				std::cout << "Segundo igual ao primeiro!\r\n";
				senha_crakeada[k] = aux_senha[k][2];
				// senha_crakeada = senha_crakeada + aux_senha[k][2];
				// std::cout << lista_relacao_letras_numeros[i][j] << "\r\n";
			} else if ((aux_senha[k][2] != lista_relacao_letras_numeros[i][k][1]) && (aux_senha[k][1] == lista_relacao_letras_numeros[i][k][2])) {
				std::cout << "Primeiro igual ao segundo!\r\n";
				senha_crakeada[k] = aux_senha[k][1];
				// senha_crakeada = senha_crakeada + aux_senha[k][1];
				// std::cout << lista_relacao_letras_numeros[i][j] << "\r\n";
			} else {
				std::cout << "Os dois sao diferentes!\r\n";
			}

			// std::cout << "Senha parcial: ";
			// for (int m = 0; i < j; m++) {
			// 	std::cout << senha_teste[m];
			// }
			// std::cout << "\r\n";

			std::cout << "Senha parcial: " << senha_crakeada << "\r\n";
			// }
		}
	}

	// senha_crakeada[j++] = '\0';

	std::cout << "Senha: " << senha_crakeada << "\r\n";

	// std::cout << "\r\n";
	// return senha_crakeada;
	return "0";

	// std::cout << "Senha: " << senha_crakeada << "\r\n";

	// int init = 0;
	// int proximo = 1;

	// std::string aux_senha;

	// aux_senha = lista_senhas_digitadas[init];

	// std::cout << "Senha " << aux_senha << "\r\n";

	// for (init; init < lista_relacao_letras_numeros.size(); init++) {
	// for (proximo; proximo < lista_relacao_letras_numeros.size(); proximo++) {

	// 	std::cout << "Teste " << init << "\r\n";
	// 	for (int k = 0; k < aux_senha.size(); k++) {
	// 		for (auto multimap : lista_relacao_letras_numeros[proximo]) {
	// 			if (aux_senha[k] == multimap.first) {
	// 				std::cout << multimap.first << multimap.second;
	// 				// i++;
	// 			}
	// 		}
	// 		// std::cout << multimap.first;
	// 	}
	// 	std::cout << "\r\n";
	// 	// std::cout << lista_relacao_letras_numeros[init][[]] << lista_relacao_letras_numeros[init]->second;
	// }
	// }

	// std::multimap<char, char>::iterator itr;
	// std::multimap<char, char>::iterator itr1;
	// std::list<std::multimap<char, char>>::iterator itr2;
	// std::list<std::multimap<char, char>>::iterator itr3;

	// std::cout << "Print da lista com as relacoes \r\n";

	// itr3 = lista_relacao_letras_numeros.begin();
	// itr3++;

	// for (itr2 = lista_relacao_letras_numeros.begin(); itr2 != lista_relacao_letras_numeros.end(); ++itr2) {
	// 	for (itr = itr2->begin(); itr != itr2->end(); ++itr) {
	// 		itr3 = itr2;
	// 		if (itr != itr2->end()) {
	// 			itr3++;
	// 		}
	// 		// std::cout << itr->first << " " << itr->second << "\r\n";
	// 		for (itr1 = itr3->begin(); itr1 != itr3->end(); ++itr1) {
	// 			// std::cout << itr->first << " " << itr->second << "\r\n";
	// 			// std::cout << itr1->first << " " << itr1->second << "\r\n";
	// 			if (itr->second == itr1->second) {
	// 				std::cout << itr->first << itr->second << "\r\n";
	// 				std::cout << itr1->first << itr1->second << "\r\n";
	// 			}
	// 		}
	// 		// std::cout << itr->first << " " << itr->second << "\r\n";
	// 	}

	// 	std::cout << "\r\n";
	// }
}