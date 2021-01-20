#include <iostream>

using namespace std;

struct elem {
    int value;
    elem *next;
};


void add(elem *&begin, elem *&end, int x) {
    elem *newElem = new elem;
    if (end != NULL) {
        newElem->value = x;
        newElem->next = NULL;
        end->next = newElem;
        end = newElem;
    } else {
        newElem->value = x;
        newElem->next = NULL;
        end = newElem;
        begin = newElem;
    }
}


int next(elem *&begin, elem *&end) {
    if (begin != NULL) {
        elem *oldElem = begin;
        int result = oldElem->value;
        if (begin == end) end = NULL;
        begin = oldElem->next;
        delete oldElem;
        return result;
    } else {
        cout << "Empty que!";
    }
}

int firstEl(elem *begin) {
    if (begin != NULL) {
        int result = begin->value;
        return result;
    }
}

bool isEmpty(elem *begin) {
    return begin == NULL;
}

void print(elem *begin) {
    elem *temp = begin;
    while (temp != NULL) {
        if (temp != begin) {
            cout << " <- ";
        }
        cout << temp->value;
        temp = temp->next;
    }
    cout << endl;
}





// Zad. 5

void push(elem *&stack, int x) {
    elem *newElem = new elem;
    newElem->value = x;
    newElem->next = stack;
    stack = newElem;
}

int pop(elem *&stack) {
    if (stack != NULL) {
        elem *oldElem = stack;
        int result = stack->value;
        stack = stack->next;
        delete oldElem;
        return result;
    }
}

void addStacks(elem *&stack1, elem *&stack2, int x) {
    push(stack2, x);
}

int getStacks(elem *&stack1, elem *&stack2) {
    if (stack1 != NULL) return pop(stack1);
    else {
        while (stack2 != NULL) { push(stack1, pop(stack2)); }
        if (stack1 != NULL) return pop(stack1);
    }
}







// Zad.6


const int initSize = 10;
int queue[initSize];
int endArr = 0, beginArr = 0, sizeArr = 0;

void addArr(int value) {
    queue[endArr] = value;
    sizeArr++;
    endArr++;
    if (endArr == initSize){
        endArr = 0;
        cout << "Que's full!" << endl;
    }
}

int nextArr() {
    int result = queue[beginArr];
    sizeArr--;
    beginArr++;
    if (beginArr == initSize) beginArr = 0;
    return result;
}


int main() {

}
