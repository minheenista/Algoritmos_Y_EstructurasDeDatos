#include <iostream>
#include <cstdlib>

using namespace std;

class CInvertir{
public:
    int Invertir(int);
    int ValPos(int);
    int numDig(int);
};


int CInvertir::numDig(int num){
    if (num<10){
        return 1;
    }
    else{
        return 1+numDig(num/10);
    }
}

int CInvertir::ValPos(int n){
    if(n==1){
        return 1;
    }
    else{
        return 10*ValPos(n-1);
    }
}

int CInvertir::Invertir(int num){
    if(num<10){
        return num;
    }
    else{
        return (num%10)*ValPos(numDig(num))+Invertir(num/10);
    }
} 



int main(int argc, char** argv) {
    
    CInvertir inv;
    
    int num1;
    
    cout<<"Numero: ";
    cin>>num1;
    cout<<"El numero invertido es: "<<inv.Invertir(num1);
    return 0;
}
