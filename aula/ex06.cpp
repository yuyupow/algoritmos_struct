#include <iostream>
#include <string>
using namespace std;

struct funcionarios{
    string nome;
    double valor;
    double horas;
    double salario;
    };

int main(){
    int quantidade;

    cout << "digite a quantidade de funcionarios: " << endl;
    cin >> quantidade;

    funcionarios dados[quantidade];
    
    for(int i = 0; i < quantidade; i++){

        cin.ignore();
        cout << "digite o nome: " << endl;
        getline(cin, dados[i].nome);
        
        cout << "digite o valor da hora: " << endl;
        cin >> dados[i].valor;

        cout << "digite a quantidade de horas trabalhadas: " << endl;
        cin >> dados[i].horas;

        dados[i].salario = dados[i].valor * dados[i].horas;
    }
    for(int i = 0; i < quantidade; i++){
    cout << "\n" << "nome: " << dados[i].nome << endl;
    cout << "salario: R$" << dados[i].salario << "\n" << endl;
    }
    return 0;
}