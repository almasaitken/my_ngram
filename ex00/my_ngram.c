#include <stdio.h>
#define MAX_ARRAY_SIZE 128

void input (char* str, int size, int* array) {
    int i = 0;
    while (str[i]!='\0') {
        if (str[i]!= '"') {
        array[str[i]]++;
        }
        i++;
    }
}

void print (int* array, int size) {
    int i = 0; 
    while (i < size) {
        if (array[i]>0) {
            printf("%c:%d\n", i, array[i]);
        }
        i++;
    }
}

int main(int argc, char** argv) {
    int arr[MAX_ARRAY_SIZE] = {0};
    int index = 1;
    while (index<argc) {
        input(argv[index], MAX_ARRAY_SIZE, arr);
        index++;
    }
    print(arr, MAX_ARRAY_SIZE);
    return 0;
}
