//26-09-2024

// macro definition : 
// macro vs globalvariable
//compilation
//1. preprocessing : gcc -E source.c -o source.i
//2. compilation     :
//3. assembly        :
//4. linking         :  








#include <stdio.h>
#include <stdlib.h>

// #define debug


// #ifdef debug(){
//     printf("debug enabled");
// }
// #endif{

// }
// macro definition
#define PI 3.14159
float pi_custom = 3.14159;

//function signature
float calc_area();
// func defini

float calc_area(){
    float area;
    float radius = 5;
    area = PI * radius * radius;
    return area;
}

int main(){
    calc_area();
    return 0;
}

