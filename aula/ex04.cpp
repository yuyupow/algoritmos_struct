#include <iostream>

using namespace std;

void menu(){
    cout << "menu de opcoes:\n"; 
    cout << "1 - media\n";
    cout << "2 - maior e menor\n";
    cout << "3 - contar pares\n";
    cout << "4 - sair" << endl;
}
double media(int quantidade, int array[]){
    int soma = 0;
    for (int i = 0; i < quantidade; i++){
        soma = soma + array[i];
    }
    double media = soma / quantidade;
    return media;
}

int main() {
   int tamanho;
   
   cout << "digite o tamanho do vetor: ";
   cin >> tamanho;
   int vetor[tamanho];
   
   for(int i= 0; i < tamanho; i++){
       cout << "digite o valor da casa " << i + 1 << ": ";
       cin >> vetor[i];
       
   }
    menu();
    int select;
     while(select != 1||2||3){
    cin >> select;
   
    if (select == 1){
        cout << "media: " << media(tamanho, vetor) << endl;
    } else if(select == 2){
        int menor = vetor[0];

    for(int i = 0; i < tamanho; i++){
           
        if (vetor[i] < menor){
            menor = vetor[i];
        }
    }
     int maior = vetor[0];

    for(int i = 0; i < tamanho; i++){
           
        if (vetor[i] > maior){
            maior = vetor[i];
        }
    }
    
        cout << "menor: "<< menor << endl;
        cout << "maior: "<< maior << endl;
        
    }
    else if(select == 3){
        int par = 0;
        for (int i = 0; i < tamanho; i++){
            if(vetor[i] % 2 == 0){
                par = par + vetor[i];
            }
        } 
        cout << par << endl;
       
    } else {
        return 1;
    } menu();
}
    return 0;
}

