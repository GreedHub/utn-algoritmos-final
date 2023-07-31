#include <stdio.h>
#include <stdlib.h>

using namespace std;

template <typename T>
struct NodoLista{
    T* datos;
    NodoLista<T>* previo;
    NodoLista<T>* siguiente;
};

template <typename T>
struct Lista{
    NodoLista<T>* primero;
    NodoLista<T>* ultimo;
};

template <typename T>
NodoLista<T>* AgregarAlPrincipio(Lista<T>* lista,T* datos);

template <typename T>
NodoLista<T>* AgregarAlFinal(Lista<T>* lista,T* datos);

template <typename T>
void IterarLista(Lista<T>* lista, void(*fn)(T*));

#include "List.t.hpp"