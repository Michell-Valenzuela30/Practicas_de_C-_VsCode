#include <iostream>
#include <direct.h>
#include <io.h>
using namespace std;
bool is_dir(string dir){
    if (_access(dir.c_str(), 0) == 0){
        return true;
    }else{
        return false;
    }
}
bool is_file(string file){
    if (_access(file.c_str(), 0) == 0){
        return true;
    } else{
        return false;
    }
}
void Verificando_existencia(string carp){
    if (is_dir(carp) || is_file(carp)){
        cout << "La carpeta " << carp << " ya existe" << endl;
    }else if (_mkdir(carp.c_str()) == 0){
        cout << "Carpeta creada correctamente" << endl;
    }else{
        cout << "Ha ocurrido un error al crear la " << carp << endl;
    }
}
void crear_directorio(){
    string carpeta1 = "Editable", carpeta2 = "Listo", carpeta3 = "Recursos";
    cout << "Desea crear las carpetas/directorios?(s/n) ";
    string opcion;
    cin>>opcion;
    if (opcion == "s" || opcion == "S"){
        Verificando_existencia(carpeta1);
        Verificando_existencia(carpeta2);
        Verificando_existencia(carpeta3);
    }else if (opcion == "n" || opcion == "N"){
        cout << "Saliendo ..";
        exit(1);
    }else{
        cout << "Opcion no valida ..";
        crear_directorio();
    }
}
int main(){
    crear_directorio();
    system("pause");
    return 0;
}