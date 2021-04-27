#include <iostream>
#include <cstdlib>

#define max 5

using namespace std;

class busquedaBinaria{
private:
    int datos[max];
public:
    void binaria (int);
    void ordenamiento ();
    void mostrar (string);
    void llenado();
    busquedaBinaria();
    ~busquedaBinaria();
};
//constructor
busquedaBinaria::busquedaBinaria(){
    
}

//destructor
busquedaBinaria::~busquedaBinaria(){
    
}
void busquedaBinaria::llenado(){
    int i, dato;
  
    for (i=0;i<max;i++){
        cout<<"Ingresa el numero ("<<i+1<<"): ";
        cin>>dato;
        datos[i]=dato;
    }
}

void busquedaBinaria::binaria(int dato){
    int prim, ult, med;
    char flag = 'F';
    
    prim=0;
    ult=max;
    med=(prim+ult)/2;
    
    cout<<med;

    while (prim<=ult && flag!='V'); 
    {
        
        if(datos[med]==dato){
            flag='V';

        } 
        else if(datos[med]>dato){
            ult=med;
            med=(prim+ult)/2;
        }
        else{
            prim=med;
            med=(prim+ult)/2;
        }

    }
    if (flag=='F'){
        cout<<"El dato: "<<dato<< " no existe en el arreglo"<<endl<<endl;
    }
    else {
        cout<<"El dato: "<<dato<<" se encuentra en la posicion ["<<med<<"] del arreglo"<<endl<<endl;
    }
    
}


void busquedaBinaria::ordenamiento(){
    int i, j, temp;
    for(int i=0; i<4; i++){
        for(int j=i+1;j<5;j++){
            if(datos[i] > datos[j]){
                temp=datos[i];
                datos[i] = datos[j];
                datos[j] = temp;
            }
        }
    }
}

void busquedaBinaria::mostrar(string _estado){
    int i;
    cout<<"Los valores del arreglo son: {";
    for(i=0;i<max-1;i++){
        cout<<datos[i]<<", ";
    }
    cout<<datos[max-1]<<"}\n";
}

int main(int argc, char** argv) {
        
    busquedaBinaria obj1;
    int num;
    
    obj1.llenado();
    obj1.mostrar("desordenados");
    obj1.ordenamiento();
    obj1.mostrar("ordenados");
    
    cout<<"Que dato desea buscar?  ";
    cin>>num;
    obj1.binaria(num);

    return 0;
}

