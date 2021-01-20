#include <iostream>

using namespace std;

struct elem {
    int value;
    elem *prev;
    elem *next;
};




// Zad. 1



void insert(int x, int index, elem *&list) {
    elem *newElem = new elem;
    if (index == 1) {
        newElem->value = x;
        newElem->next = list;
        newElem->prev = NULL;
        if (list != NULL) list->prev = newElem;
        list = newElem;
    } else if (index > 1) {
        elem *tmp = list;
        for (int k = 1; k < index; k++) { tmp = tmp->next; }
        newElem->value = x;
        elem *nextElem = tmp->next;
        tmp->next = newElem;
        if (nextElem != NULL)
            nextElem->prev = newElem;
        newElem->prev = tmp;
        newElem->next = nextElem;
        nextElem = newElem;
    }
}

void remove(elem *&list) {
    elem *pointer = list;
    list = list->next;
    delete pointer;
}

void remove(int i, elem *&list) {
    elem *pointer = list;
    if (i == 1) {
        list = list->next;
        if (list != NULL)
            list->prev = NULL;
        delete pointer;
    } else {
        for (int j = 1; j <= i; j++)
            pointer = pointer->next;
        pointer->prev->next = pointer->next;
        if (pointer->next != NULL)
            pointer->next->prev = pointer->prev;
        delete pointer;
    }
}



// Zad.2



void reverse(elem *&list) {
    while (list != NULL) {
        elem *copy = list->next;
        list->next = list->prev;
        list->prev = copy;
        list = copy;
        list = list->next;
    }
}




// Zad. 3

void to_cyclic(elem *list) {
    elem *newElem = list;
    while (list->next != NULL)
        list = list->next;
    list->next = newElem;
}



// Zad. 4



void reverse_cyclicc(elem *list) {
    elem *begin = list->next;
    elem *elemA = list;
    elem *elemB = NULL;
    list = list->next;
    do {
        elemB = list->next;
        list->next = elemA;
        elemA = list;
        list = elemB;
    } while (list != begin);
}




// ZAd. 5

struct ONP {
    char chmark;
    ONP *next;
};

bool is_valid_pn(ONP *list) {
    if (list == NULL) {
        return false;
    }
    int operands = 0;
    while (list != NULL) {
        if (list->chmark == '+' || list->chmark == '-' || list->chmark == '*' || list->chmark == '/') {
            operands--;
            if (operands < 1) {
                return false;
            }
        } else if (list->chmark >= 97 && list->chmark <= 122) {
            operands++;
        } else {
            return false;
        }

        list = list->next;
    }

    return operands == 1;
}

int main() {

}
