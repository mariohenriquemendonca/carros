#include "Moto.h"
#include <iostream>
using namespace std;

// Implementação do construtor
Moto::Moto(const string& nomeMoto, const string& guidao) : Veiculo(nomeMoto), tipoGuidao(guidao) {}

// Implementação do método mostrarDetalhes
void Moto::mostrarDetalhes() const {
    cout << "Moto: " << nome << endl;
    cout << "Tipo de Volante: " << tipoGuidao << endl;
}
