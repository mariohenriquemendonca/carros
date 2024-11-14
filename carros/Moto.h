#ifndef MOTO_H
#define MOTO_H

#include "Veiculo.h"

// Classe derivada Moto
class Moto : public Veiculo {
private:
    string tipoVolante; //Tipo Volante

public:
    // Construtor que inicializa o nome e o tipo de guiador
    Moto(const string& nomeMoto, const string& guidao);

    // Sobrescrita do método mostrarDetalhes
    void mostrarDetalhes() const override;
};

#endif