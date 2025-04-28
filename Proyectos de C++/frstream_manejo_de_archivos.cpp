#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

void escribir();

int main (){
    escribir();

    system("pause");
    return 0;
}
  void escribir(){
    ofstream archivo;

    archivo.open("diosmediante.txt",ios::out);//ABRIENDO ARCHIVO

    if(archivo.fail()){
        cout<<"Error al crear el archivo de texto ";
        exit(1);
    }
    archivo<<"Hola mundo";//AGREGANDO INFO AL ARCHIVO

    archivo.close();// CERRANDO ARCHIVO
    }
