#pragma once

#include<Universidade.h>

class Pessoa
{
private:
    int diaP; int mesP; int anoP; int idadeP;
    char nomeP[30];

    Universidade* pUnivFiliado;

public:
    Pessoa(int dia, int mes, int ano, char* nome="");
    Pessoa();

    void Inicializa(int diaNa, int mesNa, int anoNa, char* nome="");
    void calculaIdade(int diaAT, int mesAT, int anoAT);

    void setUnivFiliado(Universiade* pu);
    void OndeTrabalho();
};
