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


    // Menu 0 --> Ramal
    void Print_Ramal()
    {
        cout << Ramal << endl;
    }

    void Ramal_infos(int R)
    {
        if (Ramal == R)
        {
            cout << "\n";
            Print();
        }
    }

    // Menu 1 --> Setor
    void Print_Setor()
    {
        cout << Setor << endl;
    }


    void Setor_infos(string Nome)
    {
        if (Setor == Nome)
        {
            cout << "\n";
            Print();
        }
    }


    // Menu 2 --> Edificio
    void Print_Edificio()
    {
        cout << Edificio << endl;
    }

    void Edificio_infos(int E)
    {
        if (Edificio == E)
        {
            cout << "\n";
            Print();
        }
    }

    // Menu 3 --> Responsavel pelo Ramel
    void Print_Resp()
    {
        cout << Responsavel << endl;
    }

    void Responsavel_infos(string Nome)
    {
        if (Responsavel == Nome)
        {
            cout << "\n";
            Print();
        }
    }

    // Menu 4 --> Chefe
    void Print_Chefe()
    {
        cout << Chefe << endl;
    }

    void Chefe_infos(string Nome)
    {
        if (Chefe == Nome)
        {
            cout << "\n";
            Print();
        }
        
    }

};


void Interface()
{
    // Começo da Pesquisa de Ramais
    cout << "_______________PESQUISA DE RAMAIS________________ " << endl;
    cout << "Selecione a forma de pesquisa que deseja utilizar " << endl;
    // 0
    cout << "Pressione 0 para: numero do ramal: " << endl;
    // 1
    cout << "Pressione 1 para: setor: " << endl;
    // 2
    cout << "Pressione 2 para: edificio: " << endl;
    // 3
    cout << "Pressione 3 para: responsavel pelo ramal: " << endl;
    // 4   
    cout << "Pressione 4 para: responsavel pelo ateste ramal: " << endl << endl;
}

int main() 
{

    Catalogo *Catalogos =  new Catalogo[Casos_de_teste];
    Catalogo Dados1 , Dados2 ,  Dados3 , Dados4 , Dados5 , Dados6 , Dados7 , Dados8 , Dados9 , Dados10;

    Catalogos[0].Insere(1001 , 6 , "Setel"      , 500 , 567 , "Marcos" , "Aline" );
    Catalogos[1].Insere(1002 , 5 , "Diben"      , 505 , 114 , "Gabriel" , "Rosimeire" );
    Catalogos[2].Insere(1003 , 4 , "Patrimonio" , 500 , 897 , "Milena" , "Liduina" );
    Catalogos[3].Insere(1004 , 3 , "Protocolo"  , 505 , 913 , "Carol" , "Jose" );
    Catalogos[4].Insere(1005 , 2 , "Diben"      , 500 , 113 , "Jose" , "Meire" );
    Catalogos[5].Insere(1006 , 1 , "Protocolo"  , 505 , 507 , "Meire" , "Alice" );
    Catalogos[6].Insere(1007 , 1 , "Setel"      , 500 , 489 , "Falka" , "Gabriel" );
    Catalogos[7].Insere(1008 , 2 , "Diben"      , 505 , 576 , "Alexandre" , "Ricardo" );
    Catalogos[8].Insere(1009 , 3 , "Protocolo"  , 500 , 556 , "Joao" , "Ana Irma" );
    Catalogos[9].Insere(1010 , 4 , "Setel"      , 505 , 550 , "Arthur" , "Ana Princesa" );


    Interface();

    int Seletor;
    cin >> Seletor;

    int Ramal_desejado ,  Edificio_desejado;

    string Chefe_desejado ,  Responsavel_desejado , Setor_desejado;

    switch (Seletor)
    {
    // Ramal
    case 0:
        //cout << "Menu 0 selecionado." << endl;

        cout << "Lista de todos os Ramais: " << endl << endl;
        
        for (int i = 0; i < Casos_de_teste; i++)
        {
            Catalogos[i].Print_Ramal();
        }

        cout << "\nDigite o numero do Ramal que deseja procurar: " << endl;
        cin.ignore(); // Limpa o buffer do cin
        cin >> Ramal_desejado;


        for (int i = 0; i < Casos_de_teste; i++)
        {
            Catalogos[i].Ramal_infos(Ramal_desejado);
        }
        
        break;
    
    // Setor --> ARRUMAR
    case 1:
        //cout << "Menu 1 selecionado." << endl; 

        cout << "\nDigite o nome do setor o qual a lista de informacoes deseja imprimir " << endl;
        cout << "(Setel, Diben , Patrimonio , Protocolo)" << endl << endl;

        cin.ignore(); // Limpa o buffer do cin
        getline(cin, Setor_desejado); // Recebe a string em questão levando em conta os espaços, caso houver

        for (int i = 0; i < Casos_de_teste; i++)
        {
            Catalogos[i].Setor_infos(Setor_desejado);
        }        
        
        break;
    
    // Edificio 
    case 2:
        //cout << "Menu 2 selecionado." << endl;

        cout << "\nDigite o numeros do edificio que deseja imprimir as informacoes (500 ou 505) :" << endl;
        cin.ignore(); // Limpa o buffer do cin
        cin >> Edificio_desejado;

        for (int i = 0; i < Casos_de_teste; i++)
        {
            Catalogos[i].Edificio_infos(Edificio_desejado);
        }

        break;

    // Responsavel pelo Ramal
    case 3:
        //cout << "Menu 3 selecionado." << endl;

        cout << "Lista de todos os responsaveis pelo Ramal: " << endl << endl;

        for (int i = 0; i < Casos_de_teste; i++)
        {
            Catalogos[i].Print_Resp();
        }

        cout << "\nDigite o nome do Responsavel pelo Ramal que deseja procurar: " << endl;
        cin.ignore(); // Limpa o buffer do cin
        getline(cin, Responsavel_desejado); // Recebe a string em questão levando em conta os espaços, caso houver

        for (int i = 0; i < Casos_de_teste; i++)
        {
            Catalogos[i].Responsavel_infos(Responsavel_desejado);
        }        
        
        break;

    // Responsavel pelo Ateste
    case 4:
        //cout << "Menu 4 selecionado." << endl;

        cout << "Lista de todos os responsaveis pelo Ateste: " << endl << endl;

        for (int i = 0; i < Casos_de_teste; i++)
        {
            Catalogos[i].Print_Chefe();
        }

        cout << "\nDigite o nome do Responsavel pelo Ateste que deseja procurar: " << endl;
        cin.ignore(); // Limpa o buffer do cin
        getline(cin, Chefe_desejado); // Recebe a string em questão levando em conta os espaços, caso houver

        for (int i = 0; i < Casos_de_teste; i++)
        {
            Catalogos[i].Chefe_infos(Chefe_desejado);
        }

        break;

    default:
        cout << "Comando desconhecido, tente novamente." << endl;
        break;
    }


    return 0;
}