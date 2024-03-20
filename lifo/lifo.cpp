#include <iostream>
#include <stdlib.h>
using namespace std;

//Definiendo un tipo de dato
struct nodo {
    int valor;
    struct nodo *sig;
};
struct nodo *top, *aux, *top2;

registrar(){
    
    aux = ((struct nodo *) malloc (sizeof(struct nodo)));
    cin>>aux->valor;

    if(top==NULL){
        top = aux;
        aux->sig = NULL;
    } else {
        aux->sig = top,
        top = aux;
    }
}

mostrar(){
/*    cout<<"Mostrar.... "<<endl;
    for(aux=top; aux!=NULL; aux=aux->sig){
        cout<<"Dato "<<aux->valor<<endl;
    }
*/  top2 = NULL;
    while(top!=NULL){
        cout<<"Dato: "<<top->valor<<endl;
        if(top2!=NULL){
            top2 = top;
            top = top->sig;
            top2->sig = NULL;
        } else {
            aux = top;
            top = top->sig;
            aux->sig = top2;
            top2 = aux;
        }
    }
}
 
int main() {
    int opc;
    do {

        cout<<"Menu"<<endl<<"1. Registrar"<<endl<<"2. Mostrar"<<endl;
        cin>>opc;
        switch (opc)
        {
        case 1: registrar();
            break;
        case 2: mostrar();
            break;
        }
    } while (opc!=3);
    
}