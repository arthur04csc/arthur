#include <iostream>

using namespace std;

int main(void){
    string nome;
    string sobrenome;
    string idade;

    cout << "Qual seu nome? ";
    cin >> nome;

    cout << "Qual seu sobrenome? ";
    cin >> sobrenome;

    cout << "Olá, " << nome << " " << sobrenome << endl;

    cout << "Quantos anos você tem? ";
    cin >> idade;

    cout << "Entendi, " << nome << ", Você tem " << idade << " anos!"<< endl;

    return 0;
}