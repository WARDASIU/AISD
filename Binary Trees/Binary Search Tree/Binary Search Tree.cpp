#include <iostream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;


/**
 * ZADANIE 1
 * Reszta odpowiedzi do Zadania pierwszego znajduje sie w Zadanie1.img
 * Zrodlo:
 * https://eduinf.waw.pl/inf/alg/001_search/0115.php#P2
 * https://eduinf.waw.pl/inf/alg/001_search/0116.php // Zad.2 
 * w przypadku, gdy usuwany węzeł jest liściem usunięcie przebiega bez zmieniania postaci drzewa
 * – wskaźnik do węzła w jego ojcu zastępowany jest wskaźnikiem do węzła pustego
 *
 * w przypadku, gdy usuwany węzeł ma jednego syna to dany węzeł usuwamy a jego syna podstawiamy w miejsce usuniętego węzła
 *
 * w przypadku, gdy usuwany węzeł ma dwóch synów to po jego usunięciu wstawiamy w jego miejsce węzeł,
 * który jest jego następnikiem (który nie ma lewego syna).
 *
 * Odpowiedzi do zadań 4,5,6,7 znajdują sie w osobnych plikach tekstowych i jpg..
 *
 * **/

// Zad.2


struct BSTNode
{
    BSTNode * up, * left, * right;
    int key;
};

// Zmienne globalne

string cr, cl, cp;  // łańcuchy do znaków ramek

// Procedura wypisuje drzewo
//--------------------------
void printBT ( string sp, string sn, BSTNode * v )
{
    string s;

    if( v )
    {
        s = sp;
        if( sn == cr ) s [ s.length( ) - 2 ] = ' ';
        printBT ( s + cp, cr, v->right );

        s = s.substr ( 0, sp.length( )-2 );
        cout << s << sn << v->key << endl;

        s = sp;
        if( sn == cl ) s [ s.length( ) - 2 ] = ' ';
        printBT ( s + cp, cl, v->left );
    }
}

// Procedura DFS:postorder usuwająca drzewo
//-----------------------------------------
void DFSRelease ( BSTNode * v )
{
    if( v )
    {
        DFSRelease ( v->left );  // usuwamy lewe poddrzewo
        DFSRelease ( v->right ); // usuwamy prawe poddrzewo
        delete v;                // usuwamy sam węzeł
    }
}

// Procedura wstawia do drzewa BST węzeł o kluczu k
//-------------------------------------------------
void insertBST ( BSTNode * & root, int k )
{
    BSTNode * w, * p;

    w = new BSTNode;           // Tworzymy dynamicznie nowy węzeł

    w->left = w->right = NULL; // Zerujemy wskazania synów
    w->key = k;                // Wstawiamy klucz

    p = root;                  // Wyszukujemy miejsce dla w, rozpoczynając od korzenia

    if( !p )                   // Drzewo puste?
        root = w;                // Jeśli tak, to w staje się korzeniem
    else
        while( true )            // Pętla nieskończona
            if( k < p->key )       // W zależności od klucza idziemy do lewego lub
            {                      // prawego syna, o ile takowy istnieje
                if( !p->left )       // Jeśli lewego syna nie ma,
                {
                    p->left = w;       // to węzeł w staje się lewym synem
                    break;             // Przerywamy pętlę while
                }
                else p = p->left;
            }
            else
            {
                if( !p->right )      // Jeśli prawego syna nie ma,
                {
                    p->right = w;      // to węzeł w staje się prawym synem
                    break;             // Przerywamy pętlę while
                }
                else p = p->right;
            }

    w->up  = p;                // Ojcem węzła w jest zawsze węzeł wskazywany przez p
}

// Rotacja w lewo
//---------------
void rot_L ( BSTNode * & root, BSTNode * A )
{
    BSTNode * B = A->right, * p = A->up;

    if( B )
    {
        A->right = B->left;
        if( A->right ) A->right->up = A;

        B->left = A;
        B->up = p;
        A->up = B;

        if( p )
        {
            if( p->left == A ) p->left = B; else p->right = B;
        }
        else root = B;
    }
}

// Rotacja w prawo
//----------------
void rot_R ( BSTNode * & root, BSTNode * A )
{
    BSTNode * B = A->left, * p = A->up;

    if( B )
    {
        A->left = B->right;
        if( A->left ) A->left->up = A;

        B->right = A;
        B->up = p;
        A->up = B;

        if( p )
        {
            if( p->left == A ) p->left = B; else p->right = B;
        }
        else root = B;
    }
}


// Zad.3

struct node{
    int data;
    node* left;
    node *right;
};

bool searchBST(node* tree, int x){
    if(tree==NULL) return false;
    if(tree->data==x) return true;
    else { if(tree->data > x) searchBST(tree->left,x);
        if(tree->data < x) searchBST(tree->right,x);
    }
    return false;
}

int main() {

}
