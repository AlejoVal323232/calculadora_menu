#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int opcion;
    int x,y,resultado;
    bool existennumeros=false; //Uso esta bandera para saber si ya tengo los datos necesarios

    do{
        cout<<"Menu de opciones"<<endl;
        cout<<"1. Ingresar numeros"<<endl;
        cout<<"2. Sumar"<<endl;
        cout<<"3. Mostrar resultado"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Digite una opcion: ";
        cin>>opcion;

        switch(opcion){
            case 1: 
                cout<<"Ingrese el primer numero: "; cin>>x;
                cout<<"Ingrese el segundo numero: "; cin>>y;
                existennumeros=true; //Activo la bandera porque ya guardé los números del usuario
                cout<<"Datos ingresados";
                break;
            case 2: 
                if(existennumeros){
                    resultado=x+y; //Calculo la suma solo si ya recibí los datos previamente
                    cout<<"Operacion realizada";
                }else{
                    cout<<"No existen numeros para sumar";
                }
                getch();
                break;
            case 3: 
                if(existennumeros){
                    //Aquí muestro el resultado que ya calculé, asegurándome de que sí existan datos
                    cout<<"La suma es "<<resultado; 
                    getch();
                }else{
                    cout<<"No existen datos para sumar";
                }
                break;
            case 4: 
                cout<<"Cerrando programa";
                break;
            default: 
                cout<<"Opcion invalida";
        }
    }while(opcion!=4); //Mantengo el menú activo mientras el usuario no quiera salir

    return 0;
}
