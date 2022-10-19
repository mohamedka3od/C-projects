/*
#include <iostream>

using namespace std;

struct Node {
    int value;
    Node* next;
};

bool isEmpty(Node* top) {
  if(top == NULL) {
    return true;
  }
  else {
    return false;
  }
}

Node* push(Node* top, int value) {
    Node* newNode = new Node;
    newNode->value = value;
    newNode->next = top;
    top = newNode;

    return top;
}

Node* pop(Node* top) {
    if(!isEmpty(top)) {
        Node* removeNode = top;
        top = top->next;
        removeNode->next = NULL;
        delete removeNode;
    }
    return top;
}

int peek(Node* top) {
    if(!isEmpty(top)) {
        return top->value;
    }
    return -1;
}

void display(Node* top) {
    if(!isEmpty(top)) {
        while(top != NULL) {
            cout<< top->value <<"\n";
            top = top->next;
        }
    }
}

int main() {
    Node* top = NULL;
}
*/

//--------------------------------------------------------- STACK ARRAY
/*
#include <iostream>
#define MAX 30

using namespace std;


bool isEmpty(int top) {
  if(top == -1) {
    return true;
  }
  else {
    return false;
  }
}

bool isFull(int top) {
    if(top == MAX-1){
        return true;
    }
    else {
        return false;
    }
}

void push(int *ptr, int *top, int value) {
    if(!isFull(*top)) {
        ptr[++*top] = value;
    } else {
        cout<<"STACK OVERFLOW";
    }
}

int pop(int *ptr, int *top) {
    if(!isEmpty(*top)) {
        return ptr[*top--];
    }
    cout<<"EMPTY STACK\n";
    return -1;
}

int peek(int *ptr, int *top) {
    if(!isEmpty(*top)) {
        return ptr[*top];
    }
    return -1;
}

void display(int *ptr, int *top) {
    if(!isEmpty(*top)) {
        for(int i = *top; i>=0; i--) {
            cout<<ptr[i];
        }
    }
}

int main() {
    int arr[MAX], top = -1;
}
*/


// ------------------------------------------------------------------------------------------------------------------------------------------------//

#include <iostream>
#include <string.h>

using namespace std;

struct Node {
    char value;
    Node* next;
};

bool isEmpty(Node* top) {
  if(top == NULL) {
    return true;
  }
  else {
    return false;
  }
}

Node* push(Node* top, char value) {
    Node* newNode = new Node;
    newNode->value = value;
    newNode->next = top;
    top = newNode;

    return top;
}

Node* pop(Node* top) {
    if(!isEmpty(top)) {
        Node* removeNode = top;
        top = top->next;
        removeNode->next = NULL;
        delete removeNode;
    }
    return top;
}

char peek(Node* top) {
    if(!isEmpty(top)) {
        return top->value;
    }
}

void display(Node* top) {
    if(!isEmpty(top)) {
        while(top != NULL) {
            cout<< top->value;
            top = top->next;
        }
    }
}

int main() {
    Node* top = NULL;
    char s[1000];
    cout<<"Enter the string: ";
    cin.get(s, 1000);

    for(int i = 0; i< strlen(s) ; ++i) {
        top = push(top, s[i]);
    }

    cout<<"Reversed string: ";
    display(top);
}

/*
int main() {
    Node* top = NULL;
    char s[1000];
    cin.get(s, 1000);

    for(int i = 0; i< strlen(s) ; ++i) {
        if(!isEmpty(top) && peek(top) != s[i] ) {
            top = pop(top);
        } else {
            top = push(top,s[i]);
        }
    }

    if(isEmpty(top)) {
        cout<<"YES\n";
    } else {
        cout<<"NO\n";
    }
}
*/
