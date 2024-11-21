//12-09-2024
//funtion possible on a data type
//class data type
//               --> values
//               --> functions / operations
//char is  subclass of int        

//example
//class dog
//           --> char[20] dog_name
//           --> char[20] dog_appearance
//           --> walk()
//           --> run()
//           --> bite()


// premitive (int , char , etc...) data types are used to create hybrid data type 


//swap two numbers

#include <stdio.h>

int main() {
    int a = 2;
    int b = 3;
    int temp;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping using a temporary variable
    temp = a;
    a = b;
    b = temp;
    
    printf("After swapping: a = %d, b = %d\n", a, b);
    
    return 0;
}
