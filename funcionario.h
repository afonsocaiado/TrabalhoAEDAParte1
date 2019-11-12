#pragma once
#ifndef TRABALHOAEDAPARTE1_FUNCIONARIO_H
#define TRABALHOAEDAPARTE1_FUNCIONARIO_H

#include <iostream>
#include <string>
#include <vector>

#include "modalidade.h"

using namespace std;

class Funcionario {

protected:
    string nome;
    char sexo;
    Data dataNascimento;
    int passaporte;
    string funcao;
    Data dataChegada;
    Data dataPartida;
    double custoDiario;

public:
    Funcionario();
    Funcionario(string nome, char sexo, Data dataNascimento, int passaporte, string funcao, Data dataChegada, Data dataPartida, double custoDiario);
    ~Funcionario();
    Funcionario& operator=(const Funcionario&);
    string getNome();
    string getFuncao();
    Data getDataChegada();
    Data getDataPartida();
    void setNome(string nome);
    void setFuncao(string funcao);
    void setDataChegada(Data dataChegada);
    void setDataPartida(Data dataPartida);
    virtual void viewInfo();

    bool operator== (Funcionario funcionario) const;
    friend ostream &operator<<(ostream & o, const Funcionario &f);
    friend istream &operator>>(istream &i, Funcionario &f);
};

class Atleta:public Funcionario{
private:
    string modalidade;
    double peso;
    int altura;
    int ranking;
    vector<Competicao> competicoes;
    vector<vector<string>> historico;
    vector<Resultado> resultados;
public:
    Atleta(string nome, char sexo, Data dataNascimento, int passaporte, string funcao, Data dataChegada, Data dataPartida, double custoDiario, string modalidade, double peso, int altura, int ranking);
    ~Atleta();
    void addCompeticao(Competicao competicao);
    void addResultado(Resultado resultado);
    void viewInfo();
    void viewResultados(); //A classe Resultado é de uma prova, como vamos mostrar os Resultados de todas as competicoes em q o Atleta participa?  n tou a conseguir

    friend ostream &operator<<(ostream & o, const Atleta &a);
    friend istream &operator>>(istream &i, Atleta &a);

};

#endif //TRABALHOAEDAPARTE1_FUNCIONARIO_H
