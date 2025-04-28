#include <iostream>
#include <math.h>
using namespace std;
/*crear un programa que convierta el valor de una calificacion
 numerica entre 0 y 10, a una calificacion alfabetica
 - segun el valor introducido mostrara la calificacion correspondiente

 nota < 5 insuficiente
 nota = 5 sufuciente
 nota = 6 bien
 nota > 6 y 9  notable
 nota >= 9 sobresaliente*/
int main (){
    int nota;
    cout<<" Bienvenido "<<endl;
    cout<<" Ingrese su nota academica ";
    cin>>nota;
    if(nota<5){
        cout<<" Su nota es Insuficiente** ";
    } else if (nota<6){
        cout<<" Su nota es Suficiente** ";
    } else if (nota<7){
        cout<<"Su nota es Bien** ";
    } else if ((nota<9)){
        cout<<"Su nota es Notable** ";
    } else{
        cout<<"Su nota es Sobresaliente** ";
    }           //<3
return 0;
}
