#include<iostream>
using namespace std;

int main(){
//declaramos las variables
    float pharina, parroz, ppasta, pazucar, pfrijoles, totalp, totalv, iva;
    int opc, cantp;
//HARINA
//ARROZ
//AZUCAR
//PASTA
//FRIJOLES

//asignamos los precios a los productos
cout<<"            BODEGA             "<<endl;
cout<<"______________________________"<<endl;
cout<<"ASIGNAR EL PRECIO A LOS PRODUCTO "<<endl;
cout <<"1)HARINA...........BS ";cin>>pharina;
cout <<"2)ARROZ...........BS ";cin>>parroz;
cout <<"3)PASTA...........BS ";cin>>ppasta;
cout <<"4)AZUCAR...........BS ";cin>>pazucar;
cout <<"5)FRIJOLES...........BS ";cin>>pfrijoles;
cout<<"______________________________"<<endl;

//MOSTRAMOS EL TOTAL DE CADA PRODUCTO POR SUS UNIDADES EN EXISTENCIA

cout<<" INVENTARIO DE LOS PRODUCTOS "<<endl;
totalp= pharina*16;
cout<<"1) HARINA --- UNIDADES 16: "<< totalp <<endl;
totalp= parroz*16;
cout<<"2) ARROZ --- UNIDADES 16: "<< totalp<<endl;
totalp= ppasta*16;
cout<<"3) PASTA --- UNIDADES 16: "<< totalp<<endl;
totalp= pfrijoles*16;
cout<<"4) FRIJOLES --- UNIDADES 16: "<< totalp<<endl;
totalp= pazucar*16;
cout<<"5) AZUCAR --- UNIDADES 16: "<< totalp<<endl;
cout<<"______________________________"<<endl;


//PEDIMOS AL USUARIO QUE ELIJA UN PRODUCTO A COMPRAR
cout<<"VENTA POR PRODUCTO "<<endl;
cout<<"1) HARINA           2) ARROZ"<<endl;
cout<<"3) AZUCAR           4) FRIJOLES"<<endl;
cout<<"         5)PASTA "<<endl;
cout<<" ELIJA UNA OPCION DEL 1 AL 5: ";cin>>opc;

if(opc<=5){
	
switch(opc){
case 1:
cout<<"______________________________"<<endl;
cout<<" HARINA "<<endl;
cout <<"UNIDADES DISPONIBLES: 16"<<endl;
cout<<"ESCRIBA LA CANTIDAD QUE DESEA LLEVAR: "; cin>>cantp;

// En caso de que el usuario pida una cantidad de harina mayor a la que esta disponible
if(cantp<=16){
totalv= pharina*cantp;

// calcular el descuento si es el totav es mayor es 1500

if(totalv>1500){
    cout<<" HAS OBTENIDO UN DESCUENTO DEL 20%"<<endl;
    totalv=totalv-(totalv*0.20);
    cout<<"SUB-TOTAL ES: BS. "<<totalv<<endl;
    iva = totalv*0.16;
    cout<<" IVA :  BS. "<< iva << endl;
    totalv = totalv+iva;
    cout<<" EL TOTAL DE SU COMPRA ES :   BS.  "<< totalv<< endl;
    cout<<"______________________________"<<endl;

}else{
    cout<<" EL SUB-TOTAL ES: BS. "<< totalv<<endl;
    iva = totalv*0.16;
    cout<<" IVA :  BS. "<< iva << endl;
    totalv = totalv+iva;
    cout<<" EL TOTAL DE SU COMPRA ES :   BS.  "<< totalv<< endl;
    cout<<"______________________________"<<endl;

}
}else{
	cout<<"CANTIDAD NO DISPONIBLE EN BODEGA";
}break;

case 2:
	
cout<<"______________________________"<<endl;
cout<<" ARROZ "<<endl;
cout <<"UNIDADES DISPONIBLES: 16"<<endl;
cout<<"ESCRIBA LA CANTIDAD QUE DESEA LLEVAR: "; cin>>cantp;

// En caso de que el usuario pida una cantidad de harina mayor a la que esta disponible
if(cantp<=16){
totalv= parroz*cantp;

// calcular el descuento si es el totav es mayor es 1500

if(totalv>1500){
    cout<<" HAS OBTENIDO UN DESCUENTO DEL 20%"<<endl;
    totalv=totalv-(totalv*0.20);
    cout<<"SUB-TOTAL ES: BS. "<<totalv<<endl;
    iva = totalv*0.16;
    cout<<" IVA :  BS. "<< iva << endl;
    totalv = totalv+iva;
    cout<<" EL TOTAL DE SU COMPRA ES :   BS.  "<< totalv<< endl;
    cout<<"______________________________"<<endl;

}else{
    cout<<" EL SUB-TOTAL ES: BS. "<< totalv<<endl;
    iva = totalv*0.16;
    cout<<" IVA :  BS. "<< iva << endl;
    totalv = totalv+iva;
    cout<<" EL TOTAL DE SU COMPRA ES :   BS.  "<< totalv<< endl;
    cout<<"______________________________"<<endl;
}
}else{
	cout<<"CANTIDAD NO DISPONIBLE EN BODEGA";
}break;

case 3:
cout<<"______________________________"<<endl;
cout<<" AZUCAR "<<endl;
cout <<"UNIDADES DISPONIBLES: 16"<<endl;
cout<<"ESCRIBA LA CANTIDAD QUE DESEA LLEVAR: "; cin>>cantp;

// En caso de que el usuario pida una cantidad de harina mayor a la que esta disponible
if(cantp<=16){
totalv= pazucar*cantp;

// calcular el descuento si es el totav es mayor es 1500

if(totalv>1500){
    cout<<" HAS OBTENIDO UN DESCUENTO DEL 20%"<<endl;
    totalv=totalv-(totalv*0.20);
    cout<<"SUB-TOTAL ES: BS. "<<totalv<<endl;
    iva = totalv*0.16;
    cout<<" IVA :  BS. "<< iva << endl;
    totalv = totalv+iva;
    cout<<" EL TOTAL DE SU COMPRA ES :   BS.  "<< totalv<< endl;
    cout<<"______________________________"<<endl;

}else{
    cout<<" EL SUB-TOTAL ES: BS. "<< totalv<<endl;
    iva = totalv*0.16;
    cout<<" IVA :  BS. "<< iva << endl;
    totalv = totalv+iva;
    cout<<" EL TOTAL DE SU COMPRA ES :   BS.  "<< totalv<< endl;
    cout<<"______________________________"<<endl;

}
}else{
	cout<<"CANTIDAD NO DISPONIBLE EN BODEGA";
}
    break;
case 4:
cout<<"______________________________"<<endl;
cout<<" FRIJOLES "<<endl;
cout <<"UNIDADES DISPONIBLES: 16"<<endl;
cout<<"ESCRIBA LA CANTIDAD QUE DESEA LLEVAR: "; cin>>cantp;

// En caso de que el usuario pida una cantidad de harina mayor a la que esta disponible
if(cantp<=16){
totalv= pfrijoles*cantp;

// calcular el descuento si es el totav es mayor es 1500

if(totalv>1500){
    cout<<" HAS OBTENIDO UN DESCUENTO DEL 20%"<<endl;
    totalv=totalv-(totalv*0.20);
    cout<<"SUB-TOTAL ES: BS. "<<totalv<<endl;
    iva = totalv*0.16;
    cout<<" IVA :  BS. "<< iva << endl;
    totalv = totalv+iva;
    cout<<" EL TOTAL DE SU COMPRA ES :   BS.  "<< totalv<< endl;
    cout<<"______________________________"<<endl;

}else{
    cout<<" EL SUB-TOTAL ES: BS. "<< totalv<<endl;
    iva = totalv*0.16;
    cout<<" IVA :  BS. "<< iva << endl;
    totalv = totalv+iva;
    cout<<" EL TOTAL DE SU COMPRA ES :   BS.  "<< totalv<< endl;
    cout<<"______________________________"<<endl;
}
}else{
	cout<<"CANTIDAD NO DISPONIBLE EN BODEGA";
}break;

case 5:
cout<<"______________________________"<<endl;
cout<<" PASTA "<<endl;
cout <<"UNIDADES DISPONIBLES: 16"<<endl;
cout<<"ESCRIBA LA CANTIDAD QUE DESEA LLEVAR: "; cin>>cantp;

// En caso de que el usuario pida una cantidad de harina mayor a la que esta disponible
if(cantp<=16){
totalv= ppasta*cantp;

// calcular el descuento si es el totav es mayor es 1500

if(totalv>1500){
    cout<<" HAS OBTENIDO UN DESCUENTO DEL 20%"<<endl;
    totalv=totalv-(totalv*0.20);
    cout<<"SUB-TOTAL ES: BS. "<<totalv<<endl;
    iva = totalv*0.16;
    cout<<" IVA :  BS. "<< iva << endl;
    totalv = totalv+iva;
    cout<<" EL TOTAL DE SU COMPRA ES :   BS.  "<< totalv<< endl;
    cout<<"______________________________"<<endl;

}else{
    cout<<" EL SUB-TOTAL ES: BS. "<< totalv<<endl;
    iva = totalv*0.16;
    cout<<" IVA :  BS. "<< iva << endl;
    totalv = totalv+iva;
    cout<<" EL TOTAL DE SU COMPRA ES :   BS.  "<< totalv<< endl;
    cout<<"______________________________"<<endl;
} 
}else{
	cout<<"CANTIDAD NO DISPONIBLE EN BODEGA";
}break;
}
}else{
	cout<<"**OPCION NO VALIDA**";
}
return 0;
}
