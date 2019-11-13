#include "competicao.h"

#include <vector>
#include <string>

using namespace std;

Competicao::Competicao() {}

Competicao::Competicao(string nome, bool individual):nome(nome), individual(individual){}

vector<Prova> Competicao::getProvas()
{
    return provas;
}
bool Competicao::getIndividual()
{
    return individual;
}

vector<string> Competicao::getMedalhados()
{
    return medalhados;
}

void Competicao::setProvas(vector<Prova> provas)
{
    this->provas = provas;
}

void Competicao::setMedalhados(vector<string> medalhados)
{
    this->medalhados = medalhados;
}

bool Competicao::addProva()
{
    return true;
}

istream &operator>>(istream & i, Competicao &c)
{
    string temp;
    getline(i, c.nome, ';');
    getline(i, temp, ';');

    if(temp == "individual")
        c.individual = true;
    else
        c.individual = false;

    while(i.get() != ';') //nao pode ser ; se for so final
    {
        getline(i, temp, ',');
        Prova p(temp);
        c.provas.push_back(p);
        //falta data
    }
     //procurar no vetor de atletas para adicionar as competicoes ao atleta
}
