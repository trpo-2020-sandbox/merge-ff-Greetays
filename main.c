#include <stdio.h>

#define N_ELEMENTS(arr) (sizeof(arr) / sizeof(int))

int min_element(int* arr, int size)
{
    int min = 1000000000;

    for(int i = 0; i < size; i++){
	if (arr[i] < min)
	    min = arr[i];
    }

    return min;
}

void print_array(int* arr, int size)
{
    printf("Array: ");
    int i;
    for (i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {3, 1, 4, 1, 5, 9, 2};

    const int min = min_element(arr, N_ELEMENTS(arr));

    print_array(arr, N_ELEMENTS(arr));
    printf("Min element: %d\n", min);

    return 0;
}

