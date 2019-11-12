#pragma once
#ifndef TRABALHOAEDAPARTE1_COMPETICAO_H
#define TRABALHOAEDAPARTE1_COMPETICAO_H


#include <vector>
#include "resultado.h"

using namespace std;


class Competicao {

private:
    vector<Prova> provas;
    const bool individual;
    vector<Atleta> atletasInscritos;
    vector<string> medalhados;

public:
    const string nome;
    Competicao(string nome, bool individual);
    vector <Prova> getProvas();
    bool getIndividual();
    vector<Atleta> getAtletasInscritos();
    vector<string> getMedalhados();
    void setProvas(vector<Prova> provas);
    void setIndividual(bool individual);
    void setAtletasInscritos(vector<Atleta> atletas);
    void setMedalhados(vector<string> medalhados);

    bool addProva();

};
#endif //TRABALHOAEDAPARTE1_COMPETICAO_H
