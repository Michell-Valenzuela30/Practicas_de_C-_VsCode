#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int cat1, cat2,
    float hipot=0;
    cout<<" Bienvenido al Calculo del Teorema de Pitagoras "<<endl;
    cout<<" Ingrese el valor del primer cateto "<<endl;
    cin >>cat1;
    cout<<" Ingrese el valor del segundo cateto "<<endl;
    cin >>cat2;
    hipot= sqrt(pow(cat1,2) + pow (cat2,2));
    cout<<" El valor de la Hipotenusa es "<<hipot<<endl;
return 0;
}
