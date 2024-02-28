#include <iostream>
using namespace std;

//Definiendo un tipo de dato
struct nodo {
    int codigo;
    int telefono;
    char nombres[30];
} aux, aux2[3];

struct nodo aux3;

int main(){
//    aux.codigo = 20230001;
//    aux.telefono = 316555554;
//    aux2[0].codigo = 20230002;
//    aux2[1].codigo = 20230003;
//    cout<<sizeof(struct nodo);
//    cout<<aux.codigo;
    aux2[0].codigo = 111;
    aux2[1].codigo = 222;
    aux2[2].codigo = 333;
    cout<<&aux2[0]<<endl;
    cout<<&aux2[1]<<endl;
    cout<<&aux2[2]<<endl;
    
    for(int i=0; i<=2; i++)
        cout<<aux2[i].codigo<<endl;

    return 1;
}