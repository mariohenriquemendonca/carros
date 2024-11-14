#ifndef VEICULO_H
#define VEICULO_H

#include <string>
using namespace std;

// Classe base Veiculo
class Veiculo {
protected:
    string nome;

public:
    // Construtor da classe base
    Veiculo(const string& nomeVeiculo);

    // Método virtual para exibir detalhes do veículo
    virtual void mostrarDetalhes() const;

};

#endif