#include <iostream>

using namespace std;

struct node {
    int data;
    node *left;
    node *right;
};

// Zad.1
bool search(node *tree, int x) {
    if (tree == NULL) return false;
    else {
        if (tree->data == x) return true;
        else if (search(tree->left, x) == x) return true;
        else if (search(tree->right, x) == x) return true;
    }
}


// Zad.2

int node_count(node *tree) {
    int nodes = 0;

    if (tree != NULL) {
        nodes++;
        nodes += node_count(tree->left) + node_count(tree->right);
    }

    return nodes;
}

int leaves_count(node *tree) {
    if (tree->left == NULL && tree->right == NULL) {
        return 1;
    }
    return leaves_count(tree->left) + leaves_count(tree->right);
}

int right_children_count(node *tree) {
    if (tree == NULL) return 0;
    int num_l = 0, num_r = 0;
    if (tree->left != NULL)
        num_l = right_children_count(tree->left);
    if (tree->right != NULL)
        num_r = right_children_count(tree->right) + 1;
    return num_l + num_r;
}

int tree_height(node *tree) {
    if (tree == NULL) return 0;
    else {
        int lDepth = tree_height(tree->left);
        int rDepth = tree_height(tree->right);

        if (lDepth > rDepth)
            return (lDepth + 1);
        else return (rDepth + 1);
    }
}

// Zad.3

bool is_balanced(node *tree) {
    if (tree == NULL) return true;
    int left = tree_height(tree->left);
    int right = tree_height(tree->right);
    return abs(left - right) <= 1 && is_balanced(tree->left) && is_balanced(tree->right);
}

// Zad.4

bool is_BST(node *tree) {
    if (tree == NULL) {
        return false;
    } else {
        if (tree->data < tree->left->data) return false;
        if (tree->data > tree->right->data) return false;
        return is_BST(tree->left) && is_BST(tree->right);
    }
}

// Zad.5

void delete_leaves(node *tree) {
    if (tree != NULL) {
        if (tree->left == NULL) {
            delete tree->left;
        } else delete_leaves(tree->left);
        if (tree->right == NULL) {
            delete tree->right;
        } else delete_leaves(tree->right);
    }
}

// Zad.6

void replyA(node *p) {
    if (p->left != 0 && p->data - p->left->data < 2) {
        p->left->data += 2;
    }
}

void replyB(node *p) {
    if (p->left == 0)
        p->right = 0;
}

void preorder(node *tree) {
    if (tree != NULL) {

        //replyA/-B
        cout << tree->data;
        preorder(tree->left);
        preorder(tree->right);
    }
}

void inorder(node *tree) {
    if (tree != NULL) {
        inorder(tree->left);
        //replyA/-B
        cout << tree->data;
        inorder(tree->right);
    }
}

void postorder(node *tree) {
    if (tree != NULL) {
        postorder(tree->left);
        postorder(tree->right);
        //replyA/-B
        cout << tree->data;
    }
}

// Zad.7

node *createNode(int x) {
    node *newNode = new node;

    newNode->data = x;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void testZad7() {
    node *tree = createNode(16);
    tree->right = createNode(8);
    tree->right->right = createNode(4);
    tree->right->right->right = createNode(2);
    tree->right->right->right->right = createNode(1);

    printf("preorder: ");
    preorder(tree);

    printf("\ninorder: ");
    inorder(tree);
    printf("\n");
}

// Zad.8

node *mirror_tree(node *tree) {
    if (tree != NULL) {
        node *leftB = mirror_tree(tree->left);
        node *rightB = mirror_tree(tree->right);
        if (tree->left != NULL && tree->right != NULL) {
            node *temp = new node;
            temp->data = tree->data;
            temp->left = rightB;
            temp->right = leftB;
            return temp;
        }
        return NULL;
    }
}

// Zad.9

void print_tree(node *tree, int depth = 0, char prefix = NULL) {
    if (tree != NULL) {
        for (int i = 0; i < depth; i++) {
            cout << prefix;
        }
        cout << tree->data << endl;
        print_tree(tree->left, depth + 1, prefix);
        print_tree(tree->right, depth + 1, prefix);
    }
}

void testZad9(){
    node *tree = createNode(16);
    tree->right = createNode(8);
    tree->right->right = createNode(4);
    tree->right->right->right = createNode(2);
    tree->right->right->right->right = createNode(1);
    print_tree(tree,0,'.');
}

// Zad.10

struct node_calc {
    char op;
    int number;
    node_calc* left;
    node_calc* right;
};

int eval(node_calc* tree_calc){
    if (tree_calc->op == '-') return eval(tree_calc->left) - eval(tree_calc->right);
    if (tree_calc->op == '+') return eval(tree_calc->left) + eval(tree_calc->right);
    if (tree_calc->op == '/') return eval(tree_calc->left) / eval(tree_calc->right);
    if (tree_calc->op == '*') return eval(tree_calc->left) * eval(tree_calc->right);
    if (tree_calc->op == NULL) return tree_calc->number;
}

node_calc * createNodeCalc(char op = NULL,int nmb = NULL){
    node_calc * newNodeCalc = new node_calc;

    newNodeCalc->op = op;
    newNodeCalc->number = nmb;
    newNodeCalc->left = NULL;
    newNodeCalc->right = NULL;
}

void testZad10(){
    node_calc* nodeCalc = createNodeCalc('*');
    nodeCalc->left = createNodeCalc('+');
    nodeCalc->left->left = createNodeCalc(NULL,7);
    nodeCalc->left->right = createNodeCalc(NULL,8);
    nodeCalc->right = createNodeCalc('-');
    nodeCalc->right->left = createNodeCalc(NULL,3);
    nodeCalc->right->right = createNodeCalc(NULL,2);

    cout << eval(nodeCalc);
}

// Zad.11

node* create_perfect_tree(int* a, const int k){
    node* newNode = new node;
    if (k==1){
        newNode->data = a[0];
        newNode->left = NULL;
        newNode->right = NULL;
    }else{
        newNode->data = a[k/2];
        newNode->left = create_perfect_tree(a,k/2);
        newNode->right = create_perfect_tree(a+k/2+1,k/2);
    }
    return newNode;
}

int main() {
    //testZad7(); // preorder i inorder wzraca tą samą wartość w przypadku braku lewych rozgałęźień
    //testZad9();
    testZad10();
}
