#include "Carro.h"
#include <iostream>
using namespace std;

//construtor
Carro::Carro(const string& nomeCarro, int portas) : Veiculo(nomeCarro), numeroPortas(portas) {}

//método mostrar Detalhes, metodos sao uma funçao
void Carro::mostrarDetalhes() const {
    cout << "Carro: " << nome << endl;
    cout << "Número de portas: " << numeroPortas << endl;
}