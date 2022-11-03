#include <iterator>
#include <list>
#include <map>
#include <string>
#include <vector>

class Intruso {
	/*Continue a implementação da classe Intruso*/
	std::vector<std::vector<std::string>> lista_relacao_letras_numeros;

  public:
	void set_senha_vazada(std::string vazou);
	std::string crack_senha();
};
