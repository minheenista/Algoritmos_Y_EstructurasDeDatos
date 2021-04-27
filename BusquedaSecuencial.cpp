#include <iostream>
#include <cstdlib>

#define max 5

using namespace std;

class busquedaSecuencial{
private:
    int datos[max];
public:
    void secuencial (int);
    void ordenamiento ();
    void mostrar (string);
    void llenado();
    busquedaSecuencial();
    ~busquedaSecuencial();
};
//constructor
busquedaSecuencial::busquedaSecuencial(){
    
}

//destructor
busquedaSecuencial::~busquedaSecuencial(){
    
}
void busquedaSecuencial::llenado(){
    int i, dato;
  
    for (i=0;i<max;i++){
        cout<<"Ingresa el numero ("<<i+1<<"): ";
        cin>>dato;
        datos[i]=dato;
    }
}

void busquedaSecuencial::secuencial(int dato){
    int i;
    char flag = 'F';
    i=0;
    
    while((flag=='F')&& (i<max)){
        if (datos[i]==dato){
            flag='V';
        }
        i++;
    }
    if (flag=='F'){
        cout<<"El dato: "<<dato<< " no existe en el arreglo"<<endl<<endl;
    }
    else {
        cout<<"El dato: "<<dato<<" se encuentra en la posicion ["<<i<<"] del arreglo"<<endl<<endl;
    }
    
}


void busquedaSecuencial::ordenamiento(){
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

void busquedaSecuencial::mostrar(string _estado){
    int i;
    cout<<"Los valores del arreglo son: {";
    for(i=0;i<max-1;i++){
        cout<<datos[i]<<", ";
    }
    cout<<datos[max-1]<<"}\n";
}

int main(int argc, char** argv) {
        
    busquedaSecuencial obj1;
    int num;
    
    obj1.llenado();
    obj1.mostrar("desordenados");
    obj1.ordenamiento();
    obj1.mostrar("ordenados");
    
    cout<<"Que dato desea buscar?  ";
    cin>>num;
    obj1.secuencial(num);

    return 0;
}

