#include <iostream>
#include <string>
using namespace std;

struct mania{
    string nome;
    double idade;
    double altura;
    string menores;
    double tamanho;
};

int main(){
    int quantidade;

    cout << "digite a quantidade de pessoas que serão calculadas: " << endl;
    cin >> quantidade;
    mania socorro[quantidade];

    int n = 0;

    for(int i = 0; i < quantidade; i++){
        cin.ignore();
        cout << "digite o nome: " << endl;
        getline(cin, socorro[i].nome);
        
        cout << "digite a idade: " << endl;
        cin >> socorro[i].idade;
        
        cout << "digite a altura: " << endl;
        cin >> socorro[i].altura;
     
        if (socorro[i].idade <= 16){
            socorro[i].menores = socorro[i].nome;
            socorro[i].tamanho = socorro[i].altura;
            n = n + 1;
        double media = i * quantidade;
        media = media / 100;
    }
        cout << socorro[i].menores << endl; 
        cout << socorro[i].tamanho << endl;
}
    return 0;
}