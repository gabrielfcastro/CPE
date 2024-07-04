#include <iostream>
#include <fstream>
using namespace std;

// Função para ler um conjunto de vetores do arquivo e retornar um vetor dinâmico
int *Ponteiro(int &n, ifstream &Arquivo) {
    int *Vetor;

    // Verifica se o arquivo foi aberto corretamente
    if (!Arquivo.is_open()) {
        cerr << "Erro durante a leitura do Arquivo, nao foi possivel abri-lo.\n";
        return nullptr;
    }

    // Verifica se há mais dados para ler
    if (!(Arquivo >> n)) {
        return nullptr; // Retorna nullptr se não há mais dados
    }

    Vetor = new int[n];

    // Armazena elemento por elemento no vetor
    for (int i = 0; i < n; i++) {
        Arquivo >> Vetor[i];
    }

    return Vetor;
}

int main() {

    ifstream Arquivo("C:\\Users\\Gabriel Francsico\\Desktop\\Vetores.txt");

    ofstream Novo;

    int *Vetor;
    int n;

    int Soma = 0;

    int Linha = 1;

    // Abre o arquivo onde serão escritos os dados
    Novo.open("C:\\Users\\Gabriel Francsico\\Desktop\\Resultado Vetores.txt");
    if (Novo.is_open())
    {
        //cout << "Arquivo aberto com sucesso.";
        while (true) 
        {
            Vetor = Ponteiro(n, Arquivo);
            // Caso não tenha mais arquivos
            if (Vetor == nullptr) 
            {
                break;
            }

            // Prenche o arquivo com os novos dados
            for (int i = 0; i < n; i++)
            {
                //Novo << Vetor[i] << " ";

                Soma += Vetor[i];
            }
            Novo << "A soma dos vetores da linha " << Linha << " é " << Soma << endl;
            // Limpa o Buffer
            delete[] Vetor;
            // Restaura o valor do contador e incrementa a linha
            Soma = 0;
            Linha ++;
        }
        // Fecha o arquivo principal
        Arquivo.close(); 
        // Fecha o arquivo de escrita
        Novo.close();
    }
    
    else
    {
        cout << "Erro durante a abertura do arquivo de escrita."; 
    }
    return 0;
}
