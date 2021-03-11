#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Persona{
private:
    char Nombre[40];
public:
    void dormir();
    void hablar();
    void contar();
    void decirNombre();
    void obtenerNombre();
};
void Persona::dormir(){
    cout<<"No molestar... estoy durmiendo"<<endl;
}
void Persona::hablar(){
    cout<<"Platicando por el gusto de convivir..."<<endl;
}
void Persona::obtenerNombre(){
    cout<<"Dame tu nombre... "<<endl;
    cin>>Nombre;
}
void Persona::decirNombre(){
    cout<<"Mi nombre es... "<<Nombre<<endl;
}

int main() {
    Persona Per1;
    Per1.dormir();
    Per1.hablar();
    Persona per2;
    per2.hablar();
    per2.obtenerNombre();
    per2.decirNombre();

    return 0;
}

