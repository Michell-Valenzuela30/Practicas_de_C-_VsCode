/* se necesita un programa para una bodega la cual vende solo 5 productos,
los cuales son harina, arroz, frijoles, azucar y pasta,
cada producto solo tiene la cantidad de 16 unidades

1. el programa debe leer el precio de cada producto
 y mostrar cuanto es el total por las unidades disponibles.

2. teniendo el precio de los productos be calcular
  una venta la cual debe mostrar cuanto es el monto
   total y el monto incluyendo el iva.

3. el programa debe tener una condicion la cual permita
 hacer un descuento a la compra si el monto total es mayor a 1.500.00$

4. el descuento a aplicar es 20%*/

#include <iostream>
using namespace std;

int main (){
    float harina, arroz, frijoles, azucar, pasta;
    float total_harina=0, total_arroz=0, total_frijoles=0, total_azucar=0, total_pasta=0;
    float iva_har, iva_arr, iva_frij, iva_azu, iva_past;
    string nombre;
    int cant;

    cout<<" Bienvenidos "<<endl;
    cout<<" ingrese el valor de la harina ";
    cin>>harina;
    cout<<" ingrese el valor de la arroz ";
    cin>>arroz;
    cout<<" ingrese el valor de la frijoles  ";
    cin>>frijoles;
    cout<<" ingrese el valor del azucar ";
    cin>>azucar;
    cout<<" ingrese el valor de la pasta ";
    cin>>pasta;
//CALCULANDO EL PRECIO TOTAL
    total_harina= harina*16;
    total_arroz= arroz*16;
    total_frijoles= frijoles*16;
    total_azucar= azucar*16;
    total_pasta= pasta*16;
//CALCULANDO EL PRECIO JUNTO AL IVA
   /*iva_har= total_harina*0.16;
    iva_arr= total_arroz*0.16;
    iva_frij= total_frijoles*0.16;
    iva_azu=total_azucar*0.16;
    iva_past=total_pasta*0.16;*/

    cout<<" DISPONIBLE EN BODEGA "<<endl;
    cout<<" el valor total de la harina es "<<total_harina<<endl;
    cout<<" Precio con el iva aplicado "<<iva_har<<endl;
    cout<<endl;
    cout<<" el valor total de la arroz es "<<total_arroz<<endl;
    cout<<" Precio con el iva aplicado "<<iva_arr<< endl;
    cout<<endl;
    cout<<" el valor total de la frijoles es "<<total_frijoles<<endl;
    cout<<" Precio con el iva aplicado "<<iva_frij<<endl;
    cout<<endl;
    cout<<" el valor total de la azucar es "<<total_azucar<<endl;
    cout<<" Precio con el iva aplicado "<<iva_azu<<endl;
    cout<<endl;
    cout<<" el valor total de la pasta es "<<total_pasta<<endl;
    cout<<" Precio con el iva aplicado "<<iva_past<<endl;

    cout<<endl;
    cout<<endl;
    cout<<" Ingrese el nombre del producto que desea comprar"<<endl;
    cin>>nombre;
    cout<<" Ingrese la cantidad que desea comprar ";
    cin>>cant;




return 0;
}
