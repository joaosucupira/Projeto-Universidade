#pragma once

class Universidade
{
private:
    char nome[40];
public:
    //CONSTRUTORA
    Universidade(char*n="");
    //DESTRUTORA
    ~Universidade();

    void setNome(char* n);
    char* getNome();
};

