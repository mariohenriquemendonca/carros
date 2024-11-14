#include "Veiculo.h"
#include <iostream>
using namespace std;

// Implementação do construtor
Veiculo::Veiculo(const string& nomeVeiculo) : nome(nomeVeiculo) {}

// Implementação do método mostrarDetalhes
void Veiculo::mostrarDetalhes() const {
    cout << "Nome do veículo: " << nome << endl;
}