#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

double pagamento (double hora, double valor){
    return hora * valor;
}

int main() {
    string nome;
    double valor, hora;
    
    cin >> nome >> valor >> hora;
    
    cout << "nome: " << nome << endl;
    cout << "valor por hora: " << valor << endl;
    cout << "horas trabalhadas: " << hora << endl;
    cout << "O pagamento para " << nome << "deve ser " << pagamento(valor, hora) << endl;
    
    return 0;
}

