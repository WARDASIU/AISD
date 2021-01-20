#include <iostream>

using namespace std;


struct elem {
    int value;
    elem * next;
};


struct polynomial{
    int expo;
    int coef;
    polynomial* next;
};

struct farey{
    int numerator;
    int denominator;
    farey* next;
};



// Zadanie 1

void push(elem *& stack, int read);

int pop(elem *& stack);

void insert(int value, int index, elem* &list){
    elem* newElem = new elem;

    if(index==1){
        newElem->value = value;
        newElem->next = list;
        list = newElem;
    }else if(index > 1){
        elem* prevElements = list;
        newElem->value = value;
        for (int i = 1; i < index-1; ++i) {
            prevElements = prevElements->next;
        }
        newElem->next  = prevElements->next;
        prevElements->next = newElem;
    }
}

void remove(int index,elem* &list){
    elem* prevElements = list;
    if(list != NULL){
        if(index == 1){
            list = list->next;
            delete prevElements;
        }else if(index > 1){
            for (int i = 0; i < index-2; ++i) {
                prevElements = prevElements->next;
            }
            elem* oldList = prevElements->next;
            prevElements->next = oldList->next;
            delete oldList;
        }
    }
}
int read(int index, elem* &list){
    if(list != NULL){
        elem* tmp = list;
        for (int i = 0; i < index-1; ++i) {
            tmp = tmp->next;
        }
        int result = tmp->value;
        return result;
    }
}

// Zad. 2

int size(elem* list){
    int size = 0;
    while (list != NULL) {
        size++;
        list = list->next;
    }

    return size;
}

// Zad. 3

void print(elem* list){
    if(list == NULL) cout << "Empty list!" << endl;
    while(list->value != NULL){
        cout << list->value << endl;
        list = list->next;
    }
}

// Zad. 4

void printReversedUsingStack(elem* list, elem* &stack){
    for (; list; list = list->next) {
        push(stack,list->value);
    }

    while(stack != NULL){
        cout << pop(stack) << endl;
    }
}

int pop(elem* &stack) {
    if(stack != NULL){
        elem* newElem = stack;
        int value = stack->value;
        stack = stack->next;
        delete newElem;
        return value;
    }
}

void push(elem* &stack, int value) {
    elem* newElem = new elem;
    newElem->value = value;
    newElem->next = stack;

    stack = newElem;
}

// Zad. 5

void printReversed(elem* list){
    for (int i = size(list) ; i != 0; i--){
        cout << read(i,list) << endl;
    }
}

// Zad. 6

void destroy(elem* &list){
    if (list==NULL) cout << "Empty list!";
    else {
        elem* tmp = list;
        while(tmp!=NULL){
            elem* oldElem = tmp;
            tmp = tmp->next;
            delete oldElem;
        }
    }

}

// Zad. 7

elem* search(int x, elem* list){
    elem* wynik = list;
    while(list!=NULL){
        if(wynik->value==x) return wynik;
        wynik=wynik->next;
    }
}

// Zad. 8
void printPoly(polynomial* poly){
    if (poly == NULL){
        return;
    }
    while (poly != NULL){
        if (poly->expo != 0){
            cout << poly->coef << "x^" << poly->expo << " + ";
        }else{
            cout << poly->coef;
        }
        poly = poly->next;
    }
}

void insertPoly(int expo, int coef, int i, polynomial* &list){
    polynomial* newPolynomial = new polynomial;

    if(list == NULL) list = new polynomial{expo,coef, nullptr};
    else if (i == 1)
    {
        newPolynomial->next = list;
        list = newPolynomial;
    }else {
        polynomial* tempPoly = list;
        for (int j = 1; j < i - 1; ++j) {
            tempPoly = tempPoly->next;
        }
        if (tempPoly->next)
        {
            newPolynomial->next = tempPoly->next;
        }
        tempPoly->next = newPolynomial;
    }
}

polynomial* polyadd(polynomial* poly1, polynomial* poly2) {
    polynomial* finalPoly = NULL;
    int i = 1;
    while (poly1 != NULL && poly2 != NULL) {
        if (poly1->expo == poly2->expo) {
            insertPoly(poly1->expo, poly1->coef + poly2->coef, i++, finalPoly);
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
        else if (poly1->expo > poly2->expo) {
            insertPoly(poly1->expo, poly1->coef, i++, finalPoly);
            poly1 = poly1->next;
        }
        else if (poly1->expo < poly2->expo) {
            insertPoly(poly2->expo, poly2->coef, i++, finalPoly);
            poly2 = poly2->next;
        }
    }
    while (poly1 != NULL)
    {
        insertPoly(poly1->coef, poly1->expo, i++, finalPoly);
        poly1 = poly1->next;
    }

    while (poly2 != NULL)
    {
        insertPoly(poly2->coef, poly2->expo, i++, finalPoly);
        poly2 = poly2->next;
    }
    return finalPoly;
}

// Zad. 9

farey* ulamek_fareya(int n) {
    if (n == 1) {
        farey *numA = new farey;
        farey *numB = new farey;
        numA->numerator = 0;
        numA->denominator= 1;
        numB->numerator = 1;
        numB->denominator = 1;
        numA->next = numB;
        numB->next = NULL;
    } else {
        farey *temp = ulamek_fareya(n - 1);
        farey *copy = temp;
        farey *nextFarey = temp->next;
        while (nextFarey != NULL) {
            if ((temp->denominator + nextFarey->denominator) <= n){
                farey *newFarey = new farey;
                newFarey->numerator = copy->numerator + nextFarey->numerator;
                newFarey->denominator = copy->denominator + nextFarey->denominator;
                newFarey->next = nextFarey;
                temp->next = newFarey;
            }
            temp = nextFarey;
            nextFarey = temp->next;
            return copy;
        }
    }
}

void printFarey(farey* list) {
    while (list != NULL) {

        int num = list->numerator;
        int denum = list->denominator;

        cout << num << "/" << denum << "\n";

        list = list->next;
    }
    cout << "\n";
}

int main() {
        farey* lista = ulamek_fareya(5);
        printFarey(lista);
}
