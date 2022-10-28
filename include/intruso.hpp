#include <iterator>
#include <list>
#include <map>
#include <string>
#include <vector>

// class SenhaVazada {
// 	std::string _numeros;
// 	std::string _digitos;

// 	SenhaVazada(std::string numeros, std::string digitos);
// };

class Intruso {
	/*Continue a implementação da classe Intruso*/
	std::vector<std::string> lista_senhas_digitadas;
	// std::multimap<char, char> relacao_letras_numeros;
	std::vector<std::vector<std::string>> lista_relacao_letras_numeros;

  public:
	void set_senha_vazada(std::string vazou);
	std::string crack_senha();
};
