template <typename T>
NodoLista<T>* AgregarAlFinal(Lista<T>* lista,T* datos){
    NodoLista<T>* nodo = new NodoLista<T>();
    nodo->datos = datos;
    
    NodoLista<T>* actual = lista->primero;

    if(actual == NULL){
        lista->primero = nodo;
        lista->ultimo = nodo;
        return nodo;
    }

    while(actual->siguiente != NULL){
        actual = actual->siguiente;
    }

    actual->siguiente = nodo;
    nodo->previo = actual;
    lista->ultimo = nodo;

    return nodo;
}

template <typename T>
NodoLista<T>* AgregarAlPrincipio(Lista<T>* lista,T* datos){
    NodoLista<T>* nodo = new NodoLista<T>();
    nodo->datos = datos;
    
    NodoLista<T>* primero = lista->primero;

    if(primero != NULL){
        primero->previo = nodo;
        nodo->siguiente = primero;
    }else{
        lista->ultimo = nodo;
    }

    lista->primero = nodo;

    return nodo;
}

template <typename T>
void IterarLista(Lista<T>* lista, void(*fn)(T*)){
    NodoLista<T>* actual = lista->primero;
    
    while(actual != NULL){
        fn(actual->datos);
        actual = actual->siguiente;
    }

    return;
}