#include <iostream>
#include <cstdlib>
#define max 5

using namespace std;

class Ordenamiento{
private:
    int datos[max];
public:
    void llenado();
    void mostrar(string);
    void insercion();
    void burbuja();
    void seleccion();
    Ordenamiento();
    ~Ordenamiento();
};
//Constructor
Ordenamiento::Ordenamiento(){

}
//Destructor
Ordenamiento::~Ordenamiento(){

}

void Ordenamiento::llenado(){
    int i, dato;
    for (i=0;i<=max;i++){
        cout<<"Ingresa el numero ("<<i+1<<"): ";
        cin>>dato;
        datos[i]=dato;
    }
}
void Ordenamiento::mostrar(string _estado){
    int i;
    cout<<"Los valores "<<_estado<<" del arreglo son : {";
    for (i=0;i<max;i++){
        cout<<datos[i]<<", ";
    }
    cout<<datos[max]<<"}"<<endl;
}
void Ordenamiento::insercion(){
    int i,pos,aux;
    for (i=0;i<=max;i++){
        pos=i;
        aux = datos[i];
        while((pos>0)&&(datos[pos-1]>aux)){
            datos[pos]=datos[pos-1];
            pos--;
        }
        datos[pos]=aux;
    }
}

void Ordenamiento::burbuja(){
    int i, j, temp;
    for (int i=0;i<max+1;i++){
        for (int j=0;j<i;j++){
            if (datos[i] < datos[j]){
                temp = datos[j];	
                datos[j]=datos[i];  
                datos[i]=temp;	
            }
        }
    }
}

void Ordenamiento::seleccion(){
    int i, j, temp;
    for(int i=0; i<max; i++){
        for(int j=i+1;j<max;j++){
            if(datos[i] > datos[j]){
                temp=datos[i];
                datos[i] = datos[j];
                datos[j] = temp;
            }
        }
    }
}

int main()
{
    int op;
     Ordenamiento objeto1;
    
    do{
        cout<<"Que metodo de ordenacion desea usar? "<<endl<<"1. Insercion"<<endl<<"2. Burbuja"<<endl<<"3. Seleccion"<<endl<<"4. Salir :("<<endl;
        cin>>op;

        switch(op){
            case 1:objeto1.llenado(); objeto1.mostrar("desordenados"); objeto1.insercion(); objeto1.mostrar("ordenados");
            break;
            
            case 2:objeto1.llenado(); objeto1.mostrar("desordenados"); objeto1.burbuja(); objeto1.mostrar("ordenados");
            break;
            
            case 3:objeto1.llenado(); objeto1.mostrar("desordenados"); objeto1.seleccion(); objeto1.mostrar("ordenados");
            break;
            
            case 4: cout<<"Saliendo...";
            break;
            
            default: cout<<"Oh Oh, no ingresaste ningun numero del 1 al 4, intentalo de nuevo... ";
            break;
        }
        system("pause");
    }
    while(op!=4);
    
            
    return 0;
}
