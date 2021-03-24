#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

class Bodeguita
{
    private:
        float Ventas;
        float SueldoMensual;
    public:
        void Obtener();
        float SueldoNeto();
        Bodeguita();
        ~Bodeguita();
};
//Constructor
Bodeguita::Bodeguita(){

}
//Destructor
Bodeguita::~Bodeguita(){

}

void Bodeguita::Obtener(){
    cout<<"Ingrese de cuanto es su sueldo mensual: "<<endl;
    cin>>SueldoMensual;
    cout<<"Ingrese el valor de las ventas realizadas durante el mes: "<<endl;
    cin>>Ventas;
}

float Bodeguita::SueldoNeto(){
    float comision, neto, total;
    comision=Ventas*0.04;
    total=(SueldoMensual+comision);
    neto=total-(total*0.16);
    return neto;
}


int main(){
    Bodeguita Persona1;
    cout<<"Bienvenido, este programa es para calcular de cuanto sera tu sueldo este mes..."<<endl;
    Persona1.Obtener();
    cout<<"Tu sueldo este mes es de: "<<Persona1.SueldoNeto()<<" pesos"<<endl;
    return 0;
}