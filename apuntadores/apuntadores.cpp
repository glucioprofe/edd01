#include <iostream>
#include <stdlib.h>
using namespace std;

//Definiendo un tipo de dato
struct nodo {
    int codigo;
    int telefono;
    struct nodo *sig;
};
struct nodo *cab, *aux;
void registrar(){
    //alumno.codigo = 1;
    aux = (struct nodo *) malloc(sizeof(struct nodo));
    cout<<"Cual es año el telefono: ";
    cin>>aux->telefono;
    aux->sig = NULL;
    if(cab==NULL){
        cab = aux;
        aux = NULL;
        free(aux);
    } else {
        cab->sig = aux;
        aux = NULL;
        free(aux);
    }
}
void mostrar(){
    for(aux=cab; aux!=NULL; aux=aux->sig)
    cout<<"Codigo: "<<aux->codigo<<endl<<"Telefono: "<<aux->telefono<<endl<<endl;
}
int main() {
    int opc = 0;
    do {
        cout<<"1. Registrar nodo: "<<endl;
        cout<<"2. Ver nodos: "<<endl;
        cout<<"Ingrese que va ha hacer: "<<endl;
        cin>>opc;
        switch (opc)
        {
            case 1:
                registrar();
            break;
            
            case 2:
                mostrar();
            break;
            
        }
    } while(opc!=5);
    return 1;
}