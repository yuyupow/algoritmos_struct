#include <iostream>

using namespace std;

double quadrado(double A) {
    return A * A;
}

double triangulo (double A, double B) {
    return (A * B) / 2.0;
}

double trapezio (double A, double B, double C) {
   return ((A + B) * C) / 2;

}
int main(){
    double A, B, C;

    cout << "digite o valor de A: " << endl;
    cin >> A;

    cout << "digite o valor de B: " << endl;
    cin >> B;

    cout << "digite o valor de C: " << endl;
    cin >> C;

    cout << "o valor do quadrado e de: " << quadrado(A) << endl;
    cout << "o valor do triangulo e de: " << triangulo(A, B) << endl;
    cout << "o valor do trapezio e de: " << trapezio(A, B, C) << endl;

     return 0;
}