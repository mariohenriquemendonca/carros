#ifndef CARRO_H
#define CARRO_H

#include "Veiculo.h"

// Classe derivada Carro
class Carro : public Veiculo {
private:
    int numeroPortas;

public:
    // Construtor que inicializa o nome e o número de portas
    Carro(const string& nomeCarro, int portas);

    // Sobrescrita do método mostrarDetalhes
    void mostrarDetalhes() const override;
};

#endif