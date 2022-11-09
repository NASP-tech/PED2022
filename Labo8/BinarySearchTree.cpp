#include <iostream>

using namespace std;

/**
 * Primero crear la estructura del nodo a usar:
 * Debe tener el dato a ingresar
 * El hijo Izquierdo y Derecho
 */
struct nodo {
    int dato;
    nodo *subLeft;
    nodo *subRight;
};

/**
 * Crear la clase con el Nodo del BST
 * En la parte publica,
 * Crear el Constructor y Deconstructor
 * Crear los metodos a usar:
 * Insertar, Mostrar en Pre, In y Post Orden
 */

class BinarySearchTree{
    private:
        nodo *pBinarySearchTree;
    public:
    BinarySearchTree();
    ~BinarySearchTree();    
    void insertarBST(nodo **, int);
    void insertar(void);
    void showPreorder(nodo *);
    void showInorder(void);
    void showIn(nodo *);
    void showPost(nodo *);
    void showPostOrder(void);
    void showPreorder(void);
    void showPre(nodo *);
};

/**
 * Construimos el nuevo BST, 
 * que sera un Objeto del BST de la clase
 * Inicialiazado en Nulo
 */
BinarySearchTree::BinarySearchTree(void)
{
    pBinarySearchTree = NULL;
}

/**
 * Creamos el Deconstructor del BST
 */
BinarySearchTree::~BinarySearchTree()
{
    cout << "Program Execution" << endl;
}

/**
 * Creamos la funcion que creara el espacio 
 * de memoria para el dato a insertar
 * Esta funcion tiene 2 parametros 
 * Para guardar el dato en el nodo BST
 * El dato si es menor al anterior 
 * se guarda en el hijo Izquierdo,
 * Si el dato es mayor se guarda en 
 * El hijo derecho
 * Tambien valida si el Dato ya se habia ingresado
 */
void BinarySearchTree::insertarBST(nodo **p, int dato)
{
    if(!(*p)){
        *p = new nodo;
        (*p)->dato = dato;
        (*p)->subLeft = NULL;
        (*p)->subRight = NULL; 
    }
    else{
        if(dato < (*p)->dato)
            insertarBST(&((*p)->subLeft), dato);
        else
            if(dato > (*p)->dato)
                insertarBST(&((*p)->subRight), dato);
            else
                cout << "El dato ya esta ingresado" << endl;
    }
}

/**
 * En la funcion insertar
 * Creamos las variables del dato a insertar, 
 * Y pedimos la confirmacion si desea 
 * seguir insertando datos * 
 */
void BinarySearchTree::insertar(void)
{
    int dato;
    char resp;

    do{
        cout << "Escriba y para continuar" << endl;
        cout << "Desea digitar un dato?";
        cin >> resp;
        if(resp == 'y'){
            cout << "Elemento que desea ingresar: ";
            cin >> dato;
            /**
             *Construimos el nuevo objeto a insertar
             * El cual se guarda en el nodo BST
             */
            insertarBST(&pBinarySearchTree, dato);
        }

    }while(resp == 'y');
}

/**
 * Se crea la funcion para Mostrar In Orden
 * En este recorrido se muestra:
 * primero Hijo Izquierdo
 * segundo Raiz
 * tercero Hijo Derecho
 */

void BinarySearchTree::showIn(nodo *p)
{
    if(p){
        showIn(p->subLeft);
        cout << p->dato << " ";
        showIn(p->subRight);
    }
}

/**
 * Se llama la funcion para mostrar In Orden
 * Y devuelve los registros del nodo BST 
 */

void BinarySearchTree::showInorder(void)
{
    showIn(pBinarySearchTree);
}

/**
 * Se crea la funcion para Mostrar Pre Orden
 * En este recorrido se muestra:
 * primero Raiz
 * segundo Hijo Izquierdo
 * tercero Hijo Derecho
 */

void BinarySearchTree::showPre(nodo *p)
{
    if(p){
        cout << p->dato << " ";
        showPre(p->subLeft);
        showPre(p->subRight);
    }
}

/**
 * Se llama la funcion para mostrar Pre Orden
 * Y devuelve los registros del nodo BST 
 */


void BinarySearchTree::showPreorder(void)
{
    showPre(pBinarySearchTree);
}

/**
 * Se crea la funcion para Mostrar Post Orden
 * En este recorrido se muestra:
 * primero Hijo Izquierdo
 * segundo Hijo Derecho
 * tercero Raiz
 */

void BinarySearchTree::showPost(nodo *p)
{
    if(p)
    {
        showPost(p->subLeft);
        showPost(p->subRight);
        cout << p->dato << " ";
    }
}

/**
 * Se llama la funcion para mostrar Post Orden
 * Y devuelve los registros del nodo BST 
 */

void BinarySearchTree::showPostOrder(void)
{
    showPost(pBinarySearchTree);
}

/**
 * Finalmente en el Main
 * Se llaman las funciones
 * Se obtienen los datos a guardar en el BST
 * Se muestra en In, Pre y Post Orden
 */
int main(void)
{
    cout << endl;
    cout << "--------:D BINARY SEARCH TREE :D--------\n" << endl;

    BinarySearchTree objBinarySearchTree;

    cout << "Insertar datos en el arbol:" <<  endl;
    objBinarySearchTree.insertar();

    cout << endl;

    cout << "Mostrar In-Orden: \n";
    objBinarySearchTree.showInorder();

    cout << endl;

    cout << "Mostrar Pre-orden: \n";
    objBinarySearchTree.showPreorder();

    cout << endl;

    cout << "Mostrar Post-Orden: \n";
    objBinarySearchTree.showPostOrder();

    cout << endl;

    return 0;
}