#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

class Triangulo
{
    private:
        float Cateto1;
        float Cateto2;
        float Hipotenusa;
    public:
        void Obtener();
        float Area();
        float Perimetro();
        float hipo();
        Triangulo();
        ~Triangulo();
};
//constructor
Triangulo::Triangulo(){

}
//Destructor
Triangulo::~Triangulo(){

}

void Triangulo::Obtener(){
    cout<<"Ingrese el valor del cateto 1: "<<endl;
    cin>>Cateto1;
    cout<<"Ingrese el valor del cateto 2: "<<endl;
    cin>>Cateto2;
}

float Triangulo::Area(){
    float a;
    a=(Cateto1*Cateto2)/2;
    return a;
}

float Triangulo::hipo(){
    Hipotenusa=sqrt(pow(Cateto2,2)+pow(Cateto1,2));
    return Hipotenusa;
}

float Triangulo::Perimetro(){
    float per;
    per=hipo()+Cateto1+Cateto2;
    return per;
}

int main(){
    Triangulo objeto1;
    int op;
    float res;
    while(op!=4){
        cout<<"Bienvenido, que desea hacer"<<endl<<"1. calcular el area de un triangulo."<<endl<<"2. calcular el perimetro de un triangulo."<<endl<<"3. calcular la hipotenusa del triangulo"<<endl<<"4. Salir"<<endl;
        cin>>op;
        switch (op){
        case 1:
            objeto1.Obtener();
            res=objeto1.Area();
            cout<<"El area es: "<<res<<endl;
            break;

        case 2:
            objeto1.Obtener();
            res=objeto1.Perimetro();
            cout<<"El perimetro es: "<<res<<endl;
            break;

        case 3:
            objeto1.Obtener();
            res=objeto1.hipo();
            cout<<"El valor de la hipotenusa es: "<<res<<endl;
            break;
        
        default: 
            if(op==4) cout<<"Vuelve pronto :D"<<endl;
            else cout<<"El valor introducido no es correcto... vuelve a intentarlo... "<<endl;
            break;
        }
    }
    return 0;
}