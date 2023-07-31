#include "main.h"

int main(){
    Lista<Persona>* list = new Lista<Persona>();

    Persona* pepe = new Persona();
    pepe->edad = 40;

    Persona* jorge = new Persona();
    jorge->edad = 60;

    AgregarAlFinal(list,pepe);
    AgregarAlFinal(list,jorge);

    IterarLista(list,ImprimirEdad);
}

void ImprimirEdad(Persona* persona){
    printf("Edad: %d\n",persona->edad);
}