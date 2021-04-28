#include <iostream>
#include <cstdlib>

using namespace std;

class CSumDig{
public:
    int sumDig(int);
};

int CSumDig::sumDig(int num){
    if(num<10){
        return num;
    }
    else{
        return num%10 + sumDig(num/10);
    }
}



int main(int argc, char** argv) {
    
    CSumDig sum;
    
    int num1;
    
    cout<<"Numero: ";
    cin>>num1;
    cout<<"La suma de los digitos es: "<<sum.sumDig(num1);

    return 0;
}
