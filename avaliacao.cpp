// vector::push_back
#include <iostream>
#include <vector>

int main() {
    int resposta;
    std::vector<int> myvector;
    int myint;

    std::cout << "AVALIAÇÃO" << '\n';
    std::cout << "Por favor insira alguns valores inteiro aqui (digite 0 quando terminar):\n";

    do {
        std::cin >> myint;
        myvector.push_back(myint);
    } while (myint);

    std::cout << "myvector armazena: " << int(myvector.size()) << " números.\n";
    std::cout << "Deseja adicionar mais algum número:" << "\n";
    std::cout << "Digite 1 para \"Sim\" e 0 para \"Não\"" << "\n";

    std::cin >> reposta;
    while (reposta != 0) {

        if (resposta == 1) {
            do {
                std::cin >> myint;
                myvector.push_back(myint);
            } while (myint);
            std::cout << "Digite 0 se desejar sair, 1 para adicionar mais números." << '\n';
            std::cin >> resposta;
            else {
                respota = 0;
            }
        }
    }
    return 0;
}
