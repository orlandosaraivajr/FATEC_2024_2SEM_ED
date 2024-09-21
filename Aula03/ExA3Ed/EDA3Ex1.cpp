//Aluno: Luiz Antonio de Freitas
//criar estrutura de cadastro de carro, com placa, ano e marca
//criar estrutra para revisao (local e data)
//previsto 5 revisoes
#include <iostream>
#include <string>

using namespace std;

struct veiculo {
    int placa;
    int ano;
    string marca;
};

struct revisao {
    string local;
    string data;
};

int placa();

int x; //quantidade de carros

int main() {
    
    veiculo carro[x];
    revisao revisoes[5];

    //quantidade de carros
    cout << "Informe a quantidade de carros: ";
    cin >> x;
    
    //dados do carro
    for (int i=0; i<x; i++)
    cout << "Placa: ";
    cin >> carro[i].placa;
    cout << "Ano: ";
    cin >> carro[i].ano;
    cout << "Marca: ";
    cin >> carro[i].marca;
    
    //dados das primeiras 3 revisoes
    for (int n = 0; n < 5; n++) {
        cout << "Revisao " << (n+1) << ":" << endl;
        cout << "Local: ";
        cin >> revisoes[n].local;
        cout << "Data: ";
        cin >> revisoes[n].data;
    }
    
    //dados da ultima revisao
    cout << "Revisao 5:" << endl;
    cout << "Local: ";
    cin >> revisoes[5].local;
    cout << "Data: ";
    cin >> revisoes[5].data;
    
    cout << "\nCarro << 
    cout << \nPlaca: " << carro.placa << "\nAno: " << carro.ano
        << "\nMarca: " << carro.marca
        << "\n\nRevisoes:\n";
        
    for (int i = 0; i < 5; i++) {
        cout << "Revisao " << (i+1) << ":" << endl;
        cout << "Local: " << revisoes[i].local << "\nData: " << revisoes[i].data << endl;
    }
    
    return 0;

    int placa() {
    int placa;
    cout << "Digite o numero da placa: ";
    cin >> placa;
    return placa;
    }
}