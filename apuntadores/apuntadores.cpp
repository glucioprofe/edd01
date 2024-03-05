#include <iostream>
#include <stdlib.h>
using namespace std;

//Definiendo un tipo de dato
struct nodo {
    int codigo;
    int telefono;
    struct nodo *sig;
};
struct nodo *cab, *aux, *aux2;
void registrar(){
    //alumno.codigo = 1;
    aux = (struct nodo *) malloc(sizeof(struct nodo));
    cout<<"Cual es el telefono: ";
    cin>>aux->telefono;
    aux->sig = NULL;
    if(cab==NULL){
        cab = aux;
        cab->codigo=1;
        aux = NULL;
        free(aux);
    } else {
        aux2 = cab;
        while(aux2->sig!=NULL) //Lo que esto dice es que mientras aux2 no sea el ultimo
        {
            aux2 = aux2->sig;
        }        
        aux->codigo = aux2->codigo+1;
        aux2->sig = aux;
        aux2 = aux = NULL;
        free(aux);
        free(aux2);
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