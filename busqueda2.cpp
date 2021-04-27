#include <iostream>
#include <cstdlib>

using namespace std;


class busqueda{
private:
    int datos[5];
public:
    void secuencial (int);
    void seleccion ();
    void mostrar (string);
    void llenado();
    busqueda();
    ~busqueda();
};
//constructor
busqueda::busqueda(){
    
}

//destructor
busqueda::~busqueda(){
    
}
void busqueda::llenado(){
    int i, dato;
  
    for (i=0;i<=5;i++){
        cout<<"Ingresa el numero ("<<i+1<<"): ";
        cin>>dato;
        datos[i]=dato;
    }
}

void busqueda::secuencial(int dato){
    int i;
    char flag = 'F';
    i=0;
    
    while((flag=='F')&& (i<5) && (dato<datos[i+1])){
        if (datos[i]==dato){
            flag='V';
        }
        i++;
    }
    if (flag=='F'){
        cout<<"El dato: "<<dato<< " no existe en el arreglo";
    }
    else {
        cout<<"El dato: "<<dato<<" se encuentra en la posicion ["<<i-1<<"] del arreglo";
    }
    
}

void busqueda::seleccion(){
    int i, j, temp;
    for(int i=0; i<5; i++){
        for(int j=i+1;j<6;j++){
            if(datos[i] > datos[j]){
                temp=datos[i];
                datos[i] = datos[j];
                datos[j] = temp;
            }
        }
    }
}

void busqueda::mostrar(string _estado){
    int i;
    cout<<"Los valores "<<_estado<<" del arreglo son : {";
    for (i=0;i<5;i++){
        cout<<datos[i]<<", ";
    }
    cout<<datos[5]<<"}"<<endl;
}


int main(){
    busqueda obj1;
    int numero;
    obj1.llenado();
    obj1.mostrar("desordenados");
    obj1.seleccion();
    obj1.mostrar("ordenados");
    
    cout<<"Que dato deseas buscar? ";
    cin>>numero;
    obj1.secuencial(numero);
    return 0;
}
