//06-11-2024

#include <stdio.h>

// Function to swap using a temporary variable
int swap_temp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

// Function to swap using addition and subtraction
int swap_addsub(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    return 0;
}

// Function to swap using multiplication and division
int swap_multidiv(int *a, int *b) {
    if (*a != 0 && *b != 0) {  // Avoid division by zero
        *a = *a * *b;
        *b = *a / *b;
        *a = *a / *b;
    }
    return 0;
}

// Function to swap using XOR
int swap_xor(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
    return 0;
}

// Function to swap pointers (directly swaps the memory addresses)
int swap_pointers(int *a, int *b) {
    int *temp = a;
    a = b;
    b = temp;
    return 0;
}

int main() {
    int x = 10, y = 12;

    printf("Original values: x = %d, y = %d\n", x, y);

    swap_temp(&x, &y);
    printf("After swap_temp: x = %d, y = %d\n", x, y);

    swap_addsub(&x, &y);
    printf("After swap_addsub: x = %d, y = %d\n", x, y);

    if (x != 0 && y != 0) {
        swap_multidiv(&x, &y);
        printf("After swap_multidiv: x = %d, y = %d\n", x, y);
    } else {
        printf("Cannot use swap_multidiv due to zero value\n");
    }

    swap_xor(&x, &y);
    printf("After swap_xor: x = %d, y = %d\n", x, y);

    // Note: swap_pointers doesn't swap values of x and y in the main function because it only swaps addresses locally
    // It has no effect on the actual values in main, so it's not a practical swap method here
    swap_pointers(&x, &y);
    printf("After swap_pointers (no effect): x = %d, y = %d\n", x, y);

    return 0;
}




// *a      = 0 1 1
// *b      = 1 0 0
// *a ^ *b = 1 1 1

//*a = *a ^ *b

// *a      = 1 1 1
// *b      = 1 0 0
// *a ^ *b = 0 1 1

//*b = *a ^ *b

// *a      = 1 1 1
// *b      = 0 1 1
// *a ^ *b = 1 0 0

//*a = *a ^ *b


//*a = 1 0 0
//*b = 0 1 1