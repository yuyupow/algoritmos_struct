#include <iostream>
#include <string>
using namespace std;

struct Idade{
    string nome;
    double idade;
};

int main(){
    int n = 2;

    Idade idades[n];
    double soma = 0;
    double media = 0;

    for(int i = 0; i < n; i++){
        cin.ignore();
        cout << "digite o nome: " << endl;
        getline(cin, idades[i].nome);
        
        cout << "digite a idade: " << endl;
        cin >> idades[i].idade;

        soma = soma + idades[i].idade;

    }
    media = soma / n;
    cout << media << endl;

    return 0;
}