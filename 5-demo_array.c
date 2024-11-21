// 4-11-24

#include <stdio.h>
#include <stdlib.h>

int demo_static_array()
{
    printf("Static Array \n");

    // 1. static array allocation (compile time memory allocation ,on stack)
    int static_array[5]; // static array of fixed size 5

    // 2. the size is fixed and cannot be changed
    printf("size of static array : %lu byte \n", sizeof(static_array));

    // 3. By default the elements are initialised to zero (for global /static variables) or garbage value (for local variables)
    printf("initialise values in static array :\n");
    for (int i = 0; i < sizeof(static_array) / sizeof(int); i++)
    {
        printf("static_array[%d] = %d\n ", i, static_array[i]); // May show uninitialised garbagevalues for local arrays
    }

    // 4. Static arrays cannot be erased , their memory is automatically deallocated when the function scope ends
    return 0;
}

int demo_dynamic_array()
{
    printf("Static Array \n");

    // 1.dynamic array allocation (runtime memory allocation)
    int size = 5;
    int *dynamic_array = (int *)malloc(size * sizeof(int));

    if (dynamic_array == NULL)
    {
        printf("memory allocation failed !!\n");
        return -1;
    }

    // 2. initially the dynamic memory may contain garbage value if not explicitly initialsed
    printf("Initial value in dynamic array may be a garbage value :\n ");
    for (int i = 0; i < size; i++)
    {
        printf("dynamic_array[%d] = %d\n ", i, dynamic_array[i]); // May show uninitialised garbagevalues for local arrays
    }



    // task
    // a for loop to initialize 5 vlaues
    // then realloc and read through the 10 values 
    for (int i = 0; i < 5; i++)
    {
        printf("Enter vlaue : %d" , i);
        int val ;
        scanf("&d", &val) ;
        dynamic_array[i] = val;
    }

    for (int i = 0; i < size; i++)
    {
        printf("dynamic_array[%d] = %d\n ", i, dynamic_array[i]); // May show uninitialised garbagevalues for local arrays
    }



    // 3. we can change the size of the dynamic array using realloc
    dynamic_array = (int *)realloc(dynamic_array, 10 * sizeof(int));
    if (dynamic_array == NULL)
    {
        printf("memory allocation failed !!\n");
        return -1;
    }
    printf("dynamic_array size increased to 10 \n");
    for (int i = 0; i < 10; i++)
    {
        dynamic_array[i] = i + 1;
        printf("dynamic_array[%d] = %d \n ", dynamic_array[i]);
    }

    // 4. dynamic_array can be erased normally usibg free
    free(dynamic_array);
    dynamic_array = NULL;

    // trying to access the dynamic array after freeing its resut

    if (dynamic_array != NULL)
    {
        printf("dynamic array after free : %d\n", dynamic_array[0]);
    }

    else
    {
        printf("dynamic array has been freed and cannot be accessed \n");
    }

    return 0;
}

int main(){
    demo_dynamic_array();
    demo_static_array();
    return 0;
}