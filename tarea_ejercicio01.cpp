#include <stdlib.h>
#include <math.h>

using namespace std;

class Triangulo
{
    private:
        float Altura;
        float Base;
    public:
        void Obtener();
        float Area();
        float Perimetro();
};


void Triangulo::Obtener(){
    cout<<"Ingrese el valor de la base: "<<endl;
    cin>>Base;
    cout<<"Ingrese el valor de la Altura: "<<endl;
    cin>>Altura;
}

float Triangulo::Area(){
    float a;
    a=(Base*Altura)/2;
    return a;
}

float Triangulo::Perimetro(){
    float per;
    per=Base+Altura+sqrt(pow(Altura,2)+pow(Base,2));
    return per;
}

int main(){
    Triangulo objeto1;
    int op;
    float res;
    while(op!=3){
        cout<<"Bienvenido, que desea hacer"<<endl<<"1. calcular el area de un triangulo."<<endl<<"2. calcular el perimetro de un triangulo."<<endl<<"3. Salir"<<endl;
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

        default: 
            if(op==3) cout<<"Vuelve pronto :D"<<endl;
            else cout<<"El valor introducido no es correcto... vuelve a intentarlo... "<<endl;
            break;
        }
    }
    return 0;
}