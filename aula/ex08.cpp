#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

struct Aluno{
    string nome;
    double n1, n2;
};

int main() {

int n;
cout << "quantos alunos serão digitados?" << endl;
cin >> n;

Aluno Alunos [n];

for (int i = 0; i < n; i++){
    
    cin.ignore();
    cout << "nome: ";
    getline(cin, Alunos[i].nome);

    cout << "nota 1: ";
    cin >> Alunos[i].n1;

    cout << "nota 2: ";
    cin >> Alunos[i].n2;

}
 
cout << "\nAlunos aprovados:\n";
cout << fixed << setprecision (1);

for (int i = 0; i < n; i++){
    double media = (Alunos[i].n1 + Alunos[i].n2)/ 2.00;

    if (media >= 6.00){
        cout << Alunos[i].nome << "(" << media << ")\n" ;
    }
}

    return 0;
}
