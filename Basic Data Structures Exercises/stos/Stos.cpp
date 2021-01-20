#include <iostream>

using namespace std;

struct elem {
    int value;
    elem *next;
};

// Zad. 1

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

int topEl(elem *&stack) {
    if (stack != NULL) {
        int res = stack->value;
        return res;
    }
}

bool isEmpty(elem *stack) {
    return stack == NULL;
}

void print(elem *stack) {
    elem *temp = stack;
    while (temp != NULL) {
        if (temp != stack) {
            cout << "-";
        }
        cout << temp->value;
        temp = temp->next;
    }
    cout << endl;
}

// Zad. 3

void printWord() {
    elem *stack = NULL;
    push(stack, 'E');
    push(stack, 'A');
    push(stack, 'S');
    cout << (char) pop(stack);
    push(stack, 'Y');
    cout << (char) pop(stack);
    push(stack, 'Q');
    push(stack, 'U');
    push(stack, 'E');
    cout << (char) pop(stack);
    cout << (char) pop(stack);
    cout << (char) pop(stack);
    push(stack, 'S');
    push(stack, 'T');
    cout << (char) pop(stack);
    cout << (char) pop(stack);
    cout << (char) pop(stack);
    push(stack, 'I');
    push(stack, 'O');
    cout << (char) pop(stack);
    push(stack, 'N');
    cout << (char) pop(stack);
    cout << (char) pop(stack);
    cout << (char) pop(stack);
}

// Zad. 4

void decrypt() {
    elem *stack = NULL;
    push(stack, 'E');
    push(stack, 'A');
    cout << (char) pop(stack);
    push(stack, 'S');
    cout << (char) pop(stack);
    push(stack, 'Y');
    cout << (char) pop(stack);
    cout << (char) pop(stack);
}







// Zad. 7a


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

void rotateByQue(elem *&stack, elem *&begin, elem *&end) {
    while (stack != NULL) {
        add(begin, end, pop(stack));
    }
    while (end != NULL) {
        push(stack, next(begin, end));
    }
}

// Zad. 7b
void rotateByAnoStack(elem *&stack1, elem *&stack2) {
    int tmp = 0;
    elem *newElem = NULL;

    while (newElem != stack1) {
        tmp = pop(stack1);
        while (stack1 != newElem) { push(stack2, pop(stack1)); }
        push(stack1, tmp);
        newElem = stack1;
        while (stack2 != NULL) { push(stack1, pop(stack2)); }
    }
}




// Zad. 8

void sortDecreasing(elem* &stack, elem* &stack2)
{elem* newElem = NULL;
    int min = 0;
    while(stack != newElem)
    {min = pop(stack);
        while(stack != newElem)
        {if (topEl(stack) < min)
            {push(stack2, min);
                min=pop(stack2);
            }
            else push(stack2, pop(stack));
        }
        push(stack, min);
        newElem=stack;
        while(stack2 != NULL)
            push(stack, pop(stack2));
    }
}







// Zad.9a



void changePos(elem* &stack1, elem* &stack2, elem* &stack3){
    while(stack1 != NULL)
        push(stack3, pop(stack1));
    while(stack3 != NULL)
        push(stack2, pop(stack3));
}

// Zad. 9b

void changePosWithVars(elem* &stack1, elem* &stack2) {
    int index = 0;
    while (stack1 != NULL) {
        while (stack1 != NULL) {
            push(stack2, pop(stack1));
            index++;
        }
        int getS2 = pop(stack2);
        index--;
        while (index > 0) {
            push(stack1, pop(stack2));
            index--;
        }
        push(stack2, getS2);
    }
}


int main() {

}
