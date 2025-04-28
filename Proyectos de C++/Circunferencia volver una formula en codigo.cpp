#include <iostream>
#include <math.h>
using namespace std;
/*crear un programa que lea el radio de un circulo y calcule

longitud de la circunferencia --------> L= 2*Pi x radio
area del circulo------------------------> A= Pi*pow(radio*2)
volumen del circulo -------------------> V= 4.0/3 x Pi x pow(radio,3)*/

int main ()
{
    float radio, L,A,V;
    const float Pi=3.14;
    cout<<" Bienvenido "<< endl;
    cout<<" Ingrese el valor de la Radio ";
    cin>>radio;

    L= 2*Pi*radio;
    A= Pi*pow(radio,2);
    V= (4.0/3)*Pi*pow(radio,3);

    cout<<" El valor de la longitud "<<L<< endl;
    cout<<" El area del circulo "<<A<< endl,
    cout<<" El volumen del circulo "<<V<< endl;
    cout<<"";

    return 0;

}
