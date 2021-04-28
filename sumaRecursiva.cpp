#include <iostream>
#include <cstdlib>

using namespace std;

class CSumatoria{
public:
    int sumatoria(int);
};

int CSumatoria::sumatoria(int n){
    int dat;
    if(n==0){
        return 0;
    }
    else{
        cout<<"Dato: ";
        cin>>dat;
        return dat+sumatoria(n-1);
    }
}




int main(int argc, char** argv) {
    
    CSumatoria sum;
    
    int n, res;
    
    cout<<"Numero: ";
    cin>>n;
    res=sum.sumatoria(n);
    cout<<"La suma de los datos es: "<<res<<endl;
    
    return 0;
}
