#include<iostream>
using namespace std;
//creates a circular linked list
//specify total number of nodes, and the xth node which will be deleted

struct node{int key; struct node *next; }; //create each node and require a pointer indicated by a *

int main(){
    int i, n, m;
    struct node *t, *x;
    cin>> n >> m;
    t = new node;
    t ->key = 1;  //sets the first node a 1
    x=t;
    for (i=2; i<=n; i++){
        t -> next = new node; //creates new node as next of current, sets the cursor for new node, and gives it the value of i
        t = t ->next;
        t -> key = i;
    
    }
    t -> next = x; // the last one is set to first
    while(t != t ->next){ //until there is only one left
        for (i = 1; i <m; i++){ // go to m
            t = t -> next;
        }
        cout << t->next -> key << ' '; //prints the next one's value
        x = t -> next; // temporarily sets deleted as x, so that can specify what to delete 
        t -> next = x -> next; // yet cursor skips deleted and goes to next
        delete x;
    }
    cout << t-> key << '\n';
}
