#include <iostream>
#include <string>
#include <cstdlib> // Inclua esta biblioteca para usar a função exit()
using namespace std;

// Número de casos de teste que serão testados
#define Casos_de_teste 10

// Catálogo dos Ramais
struct Catalogo
{
    // 1 - Número do Ramal (1000 a 2900)
    int Ramal;
    // 2- Categoria
    int Categoria;
    // 3 - Setor
    string Setor;
    // 4 - Edifício de Localização
    int Edificio;
    // 5 - Sala (Número do andar + dois digitos)
    int Sala;
    // 6 - Responsável pelo Ramal
    string Responsavel;
    // 7 - Responsável pelo Ateste de Conta Telefonica
    string Chefe;



    void Insere(int sRam, int sCat, string sSet, int sEdi, int sSal, string Sresp, string sChef)
    {
        // 1 - Ramal
        Ramal = sRam;
        // 2 - Categoria
        Categoria = sCat;
        // 3 - Setor
        Setor = sSet;
        // 4 - Ed. Localização
        Edificio = sEdi;
        // 5 - Sala
        Sala = sSal;
        // 6 - Resp pelo Ramal
        Responsavel = Sresp;
        // 7 - Chefe
        Chefe = sChef;


        // Vamos fazer uma verificação em relação ao Edificio
        if (Edificio != 500 and Edificio != 505)
        {
            cout << "Os Dados foram inseridos incorretamente" << "\n";
            exit(EXIT_FAILURE); // Pare a execução do código
        }
        

    }

    void Print ()
    {
        cout << "__INFORMACOES GERAIS DO RAMAL__" << "\n";
        // 1 - Ramal
        cout << "Ramal......................" << Ramal << "\n";
        // 2 - Categoria
        cout << "Categoria.................." << Categoria << "\n";
        // 3 - Setor
        cout << "Setor......................" << Setor << "\n";
        // 4 - Ed. Localização
        cout << "Edificio..................." << Edificio << "\n";
        // 5 - Sala
        cout << "Sala......................." << Sala << "\n";
        // 6 - Resp pelo Ramal
        cout << "Responsavel pelo Ramal....." << Responsavel << "\n";
        // 7 - Chefe
        cout << "Responsavel pelo Ateste...." << Chefe << "\n\n";
    }

};


int main() 
{
    Catalogo *Catalogos =  new Catalogo[Casos_de_teste];
    Catalogo Dados1 , Dados2 ,  Dados3 , Dados4 , Dados5 , Dados6 , Dados7 , Dados8 , Dados9 , Dados10;

    Catalogos[0] = Dados1;
    Catalogos[1] = Dados2;
    Catalogos[2] = Dados3;
    Catalogos[3] = Dados4;
    Catalogos[4] = Dados5;
    Catalogos[5] = Dados6;
    Catalogos[6] = Dados7;
    Catalogos[7] = Dados8;
    Catalogos[8] = Dados9;
    Catalogos[9] = Dados10;

    Catalogos[0].Insere(1001 , 6 , "Setel"      , 500 , 567 , "Marcos" , "Aline" );
    Catalogos[1].Insere(1002 , 5 , "Diben"      , 505 , 114 , "Gabriel" , "Rosimeire" );
    Catalogos[2].Insere(1003 , 4 , "Patrimonio" , 500 , 897 , "Milena" , "Liduina" );
    Catalogos[3].Insere(1004 , 3 , "Protocolo"  , 505 , 913 , "Carol" , "Jose" );
    Catalogos[4].Insere(1005 , 2 , "Diben"      , 500 , 113 , "Jose" , "Meire" );
    Catalogos[5].Insere(1006 , 1 , "Protocolo"  , 505 , 507 , "Meire" , "Alice" );
    Catalogos[6].Insere(1007 , 1 , "Setel"      , 500 , 489 , "Falka" , "Gabriel" );
    Catalogos[7].Insere(1008 , 2 , "Diben"      , 505 , 576 , "Alexandre" , "Ricardo" );
    Catalogos[8].Insere(1009 , 3 , "Protocolo"  , 500 , 556 , "Joao" , "Ana" );
    Catalogos[9].Insere(1010 , 4 , "Setel"      , 505 , 550 , "Arthur" , "Ana" );


    for (int i = 0; i < Casos_de_teste; i++)
    {
        Catalogos[i].Print();
    }

    return 0;
}