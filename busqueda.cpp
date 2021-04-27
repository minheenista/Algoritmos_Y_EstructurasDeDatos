#include <iostream>


using namespace std;

class busqueda{
private:
    int datos[5]={4, 3, 89, 54, 98};
public:
    void secuencial (int);
    busqueda();
    ~busqueda();
};
//constructor
busqueda::busqueda(){
    
}

//destructor
busqueda::~busqueda(){
    
}

void busqueda::secuencial(int dato){
    int i;
    char flag = 'F';
    i=0;
    
    while((flag=='F')&& (i<5) ){
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





int main(){
    busqueda obj1;
    int numero;
    cout<<"Que dato deseas buscar? ";
    cin>>numero;
    obj1.secuencial(numero);
    return 0;
}
