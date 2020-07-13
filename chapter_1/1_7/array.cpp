#include <iostream>
#include <string>

using namespace std;

int main() {
    int array[] = {4, 2, 1, 9, 5};
    int i = 0;
    do {
        cout << array[i] << endl;
        ++i;
    } while(i < 5);
}