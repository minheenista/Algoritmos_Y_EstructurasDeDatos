#include <iostream>
#include <cstdlib>

using namespace std;

class CRestSuc{
public:
    int restSuc(int, int);
};

int CRestSuc::restSuc(int dividendo, int divisor){
    if (dividendo<divisor){
        return 0;
    }
    else {
        return 1+ restSuc(dividendo-divisor, divisor);
    }
}





int main(int argc, char** argv) {
    
    CRestSuc res;
    
    int num1, num2;
    
    cout<<"Dividendo: ";
    cin>>num1;
    cout<<"Divisor: ";
    cin>>num2;
    
    cout<<res.restSuc(num1, num2);
    return 0;

    return 0;
}

