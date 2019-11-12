#pragma once
#ifndef TRABALHOAEDAPARTE1_PROVA_H
#define TRABALHOAEDAPARTE1_PROVA_H

#include <string>
#include <vector>

#include "data.h"


class Prova {
private:
    string nome;
    Data data;
public:
    Prova();
    explicit Prova(string nome);
    Data getData();
    string getNome() const;
    void setData(int dia, int mes, int ano);
};

#endif //TRABALHOAEDAPARTE1_PROVA_H
