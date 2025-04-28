#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

void escribir();
void lectura();

int main (){
    escribir();
    lectura();

    system("pause");
    return 0;
}
  void lectura(){
    ifstream archivo;
    string texto;// declara la variable en donde se lee el archivo

    archivo.open("diosmediante.txt",ios::in);//ABRIENDO ARCHIVO

    if(archivo.fail()){
        cout<<"Error al crear el archivo de texto ";
        exit(1);
    } while (!archivo.eof()){
        getline (archivo,texto);
        cout<<texto<<endl;
    }
    archivo.close();//cerrando el archivo
    }
