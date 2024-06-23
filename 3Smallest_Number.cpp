#include <iostream>
using namespace std;

int main(){

    int arr[6] = {15, 10, 5, 77, 50,100};

    int minimum = arr[0];
    for (int i = 1; i < 6; i++) {
        if (minimum > arr[i]) {
            minimum = arr[i];
        }
    }

    cout << "Show the Smallest number: " << minimum << endl;

    return 0;
}



