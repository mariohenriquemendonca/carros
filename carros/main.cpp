#include "Carro.h"
#include "Moto.h"
#include <iostream>
using namespace std;

int main() {
    // Criação de objetos Carro e Moto
    Carro carro("Lamborguini", 2);
    Moto moto("Desportiva", "Volante baixo");

    // Exibe os detalhes dos veículos no ecrã
    carro.mostrarDetalhes();
    cout << endl;
    moto.mostrarDetalhes();

    return 0;
}