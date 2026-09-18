#include <iostream>
using namespace std;

int pq[50];
int n = 0;

void insert(int value) {

    if(n == 50) {
        cout << "Priority Queue is full\n";
        return;
    }

    int i = n - 1;
    while(i >= 0 && pq[i] > value) {
        pq[i + 1] = pq[i];
        i--;
    }
    pq[i + 1] = value;
    n++;
}
void deleteElement() {
    if(n == 0) {
        cout << "Priority Queue is empty\n";
        return;
    }
    cout << "Deleted: " << pq[0] << endl;
    
    // Shift everything left
    for(int i = 0; i < n - 1; i++) {
        pq[i] = pq[i + 1];
    }

    n--;
}

void display() {

    if(n == 0) {
        cout << "Priority Queue is empty\n";
        return;
    }

    for(int i = 0; i < n; i++) {
        cout << pq[i] << " ";
    }

    cout << endl;
}

int main() {

    insert(5);
    insert(2);
    insert(8);
    insert(3);

    display();

    deleteElement();

    display();

    return 0;
}