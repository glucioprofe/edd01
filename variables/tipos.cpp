#include <iostream>
using namespace std;

int main(){
    int *apuntador;
    char *apuntador2;
    int x = 12;
    char letras[2] = {'x', 'z'};
    int arreglo[3] = {2147483647, 45, 8};
    //cout<<arreglo[0]<<endl;
    //cout<<arreglo[1]<<endl;
    cout<<&arreglo[0]<<endl;
    cout<<&arreglo[1]<<endl;
    cout<<&arreglo[2]<<endl;
    //cout<<&arreglo<<endl;
   // cout<<&arreglo[1]<<endl;
   // cout<<"x Direccion: "<<&arreglo[1]<<endl;
    apuntador2 = &letras[0];
    cout<<"Letras 0 "<<&apuntador2<<endl;
    apuntador2 = &letras[1];
    cout<<"Letras 1 "<<&apuntador2<<endl;
    //cout<<&arreglo<<endl;
   // cout<<&arreglo[1]<<endl;
    cout<<"arreglo 1 Valor: "<<arreglo[1]<<endl;
    cout<<apuntador;
    *apuntador = 88;
    cout<<"arreglo 1 Valor: "<<arreglo[1]<<endl;
    return 1;
}