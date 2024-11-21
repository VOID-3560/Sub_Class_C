#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// using a pointer 
int get_wordcount_with_isspace(const char *str)
{
    int count = 0, in_word = 0;

    while (*str)   //equivalent to *str == null;h
    {
        if (!isspace(*str) && !in_word)   //check for being in a word or not
        {
            in_word = 1;
            count++;
        }
        else if (isspace(*str))
        {
            in_word = 0;
        }

        str++;
    }
    return count;
}

// preffered 
int get_wordcount_without_isspace(const char *str){
    
    int count = 0, in_word = 0;

    while (*str)
    {
        if ((*str != "" && *str != '\t' && *str != '\n') && !in_word)
        {
            in_word = 1;
            count++;
        }
        else if (*str == ' ' || *str == '\t' || *str == '\n' )
        {
            in_word = 0;
        }
        str++;
    }

}


int main()
{
    char *sentence = "give me some space     i need to be free ";

    int count1 = get_wordcount_with_isspace(sentence);
    int count2 = get_wordcount_isspace(sentence);

    printf("Word count using isspace : %d\n", count1);
    printf("Word count without using isspace : %d\n", count2);

    return 0;
}


int main2(){
    int *arr ;
    int n , i , new_size;

    printf("Enter initial number  of element :");
    scanf("%d", &n);

    // allocate initial memory 

    // arr = (int*) malloc(n * size_of(int));
    if (arr == NULL){

    } 

    // use the allocated memory 
    for ( i = 0; i < n; i++)
    {
        arr[i]=i;
    }
    

    printf("Enter the new size of array :");
    scanf("%d", &new_size);

    // resize the memory block 

    // arr = (int*) relloc(arr , new_size * size_of(int));
    if (arr == NULL)
    {
        printf("Memory allocation fialed !!");
        return 1;
    }

    // use the reallocated memory 
        for ( i = n; i < n; i++)
    {
        arr[i]=i;
    }
    


}