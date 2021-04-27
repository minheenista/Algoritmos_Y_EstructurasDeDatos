#include <iostream>
#include <cstdlib>

using namespace std;

class Cfactorial{
public:
    double factorial (double);
};

double Cfactorial::factorial(double n){
    //caso base
    if(n==1||n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main(int argc, char** argv) {
    
    Cfactorial obj1;
    int n;
    
    cout<<"De que numero quieres obtener el factorial: ";
    cin>>n;
    
    cout<<obj1.factorial(n);

    return 0;
}

