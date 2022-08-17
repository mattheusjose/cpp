#include <iostream>

void value_allocating_memory(int* p) {

    p = new int;
    *p = 7;
}

void value_modifying_memory(int* p) {

    *p = 8;
}

void reference(int*& p) {
    p = new int;
    *p = 9;
}

int main() {

    return 0;
}