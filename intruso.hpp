#include <string>
#include <vector>

class Intruso{
    private:
        int n;
        std::vector<std::string> cod;
        std::vector<std::string> senha;

    public:
        void set_senha_vazada(std::string vazou);
        std::string crack_senha();
};