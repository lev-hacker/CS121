#include <stdio.h>
const int MAX = 9; // length of array

void swap(int*, int*);
void printValues(int*);
void sort(int*);

// Functions

void sort(int* values){ //sorts 2 values within values[]
    int i = 0;
    int j = 0;
    for (i = 0; i < MAX - 1; i++){
        for (j = 0; j < MAX - 1; j++){
            if (values[j] > values[j+1]){
                swap(values + j, values + j + 1);
                printValues(values); // this is for testing, will delete when
		}
	}
    }
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printValues(int* values){
    printf("[");
    int c = 0;
    for (c = 0; c < MAX - 1; c++){
        printf("%d ", values[c]);
    }
    printf("]");
    printf("\n");
}

int main(){
	int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
	printf("Before sort:\n");
	printValues(values);
	
	//test swap
	printf("Testing swap function...\n");
	int x = 3;
	int y = 5;
	printf("x: %d, y: %d\n", x, y);
	swap(&x, &y);
	printf("x: %d, y: %d\n", x, y);
	sort(values);
}
