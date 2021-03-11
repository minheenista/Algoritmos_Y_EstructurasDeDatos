#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Operaciones{
private:
    float num1;
    float num2;
public:
    void suma();
    void resta();
    void multiplicar();
    void dividir();
    void ObtenerNum();
};
void Operaciones::ObtenerNum(){
    cout<<"Ingresa 2 numeros... "<<endl;
    cout<<"Numero 1: ";
    cin>>num1;
    cout<<"Numero 2: ";
    cin>>num2;
}
void Operaciones::suma(){
    cout<<"La suma es: "<<num1+num2<<endl;
}
void Operaciones::resta(){
    cout<<"La resta es: "<<num1-num2<<endl;
}
void Operaciones::multiplicar(){
    cout<<"La multiplicacion es: "<<num1*num2<<endl;
}
void Operaciones::dividir(){
    cout<<"La division es: "<<num1/num2<<endl;
}

int main() {
    Operaciones op;
    op.ObtenerNum();
    op.suma();
    op.resta();
    op.multiplicar();
    op.dividir();
    
    return 0;
}

