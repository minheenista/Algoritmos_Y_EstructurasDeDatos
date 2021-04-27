#include <iostream>
#include <cstdlib>

using namespace std;

class Cfibonacci{
public:
    double fibonacci(double);
};

double Cfibonacci::fibonacci(double n){
    if (n == 0){
        return 0;
    }
    if (n == 1 || n == 2){
        return 1;
    }
    else{
        return (fibo(n - 1) + fibo(n - 2));
    }
}

int main(int argc, char** argv) {
    
    Cfibonacci obj1;
    int n;
    
    cin>>n;
    
    for (int i=1; 1<n;i++){
        cout<<"Serie Fibonacci "<<obj1.fibonacci(i)<<endl;
    }

    return 0;
}

