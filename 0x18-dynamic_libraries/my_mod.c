#include "main.h"

int mod(int a, int b) {
    if (b == 0) {
        return -1; // You can choose an appropriate error code or value here.
    }

    int result = a % b;
    return result;
}