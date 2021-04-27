#include <iostream>
#include <cstdlib>

using namespace std;

class CNumeroPrimo{
public:
    bool numPrimo(int, int);
};

bool CNumeroPrimo::numPrimo(int n, int c){
    
    if (n % c == 0 || n < 2){
        return false;
    } 
    else if (c > n/2){
        return true;
    }
    return numPrimo(n, c+1);
    
}
    

int main(int argc, char** argv) {
    
    CNumeroPrimo obj1;
    int n;
    
    cout<<"Ingresa un numero: ";
    cin>>n;
    
    if (obj1.numPrimo(n, 2)){
        cout<<"El numero es primo";
    }
    else{
        cout<<"El numero NO es primo";
    }

    return 0;
}

