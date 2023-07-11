#include <stdio.h>

void swap_func (int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
    return;
}

int main(){

   int arr [3] = {1,2,3};
   printf("%d\n", arr[2]);
   arr [6] = 13;
   printf("%d\n", arr[5]);
   printf("item:%d ; address: %d\n", arr[0], arr);
   printf("item:%d ; address: %d\n", arr[1], arr+1);
   printf("item:%d ; address: %d\n", arr[2], arr+2);
   printf("item:%d ; address: %d\n", arr[3], arr+3);
   printf("item:%d ; address: %d\n", arr[4], arr+4);
   printf("item:%d ; address: %d\n", arr[5], arr+5);
   printf("item:%d ; address: %d\n", arr[6], arr+6);

   printf("dereference value: %d\n", *(arr+6));

    int len1 = 4;
    int *arr_malloc = (int*)malloc(3*sizeof(int));

    printf("item:%d ; malloc addr %d\n", arr_malloc[0], arr_malloc);
    printf("item:%d ; malloc addr %d\n", arr_malloc[1], arr_malloc+1);
    printf("item:%d ; malloc addr %d\n", arr_malloc[2], arr_malloc+2);

    printf("-------------------------------------------------\n");

    int len2 = 6;
    int *arr_calloc = (int*)calloc(len2, sizeof(int));
    printf("item:%d ; calloc addr %d\n", arr_calloc[0], arr_calloc);
    printf("item:%d ; calloc addr %d\n", arr_calloc[1], arr_calloc+1);
    printf("item:%d ; calloc addr %d\n", arr_calloc[2], arr_calloc+2);
    printf("item:%d ; calloc addr %d\n", arr_calloc[3], arr_calloc+3);
    printf("item:%d ; calloc addr %d\n", arr_calloc[4], arr_calloc+4);
    printf("item:%d ; calloc addr %d\n", arr_calloc[5], arr_calloc+5);
    int i;
   for (i = 0; i<len2; i++){
       arr_calloc[i] = i*10;
   }
   printf("item:%d ; calloc addr %d\n", arr_calloc[0], arr_calloc);
   printf("item:%d ; calloc addr %d\n", arr_calloc[1], arr_calloc+1);
   printf("item:%d ; calloc addr %d\n", arr_calloc[2], arr_calloc+2);
   printf("item:%d ; calloc addr %d\n", arr_calloc[3], arr_calloc+3);
   printf("item:%d ; calloc addr %d\n", arr_calloc[4], arr_calloc+4);
   printf("item:%d ; calloc addr %d\n", arr_calloc[5], arr_calloc+5);

   arr_calloc = realloc(arr_calloc, 4);
   printf("item:%d ; calloc addr %d\n", arr_calloc[0], arr_calloc);
   printf("item:%d ; calloc addr %d\n", arr_calloc[1], arr_calloc+1);
   printf("item:%d ; calloc addr %d\n", arr_calloc[2], arr_calloc+2);
   printf("item:%d ; calloc addr %d\n", arr_calloc[3], arr_calloc+3);
   printf("item:%d ; calloc addr %d\n", arr_calloc[4], arr_calloc+4);
   printf("item:%d ; calloc addr %d\n", arr_calloc[5], arr_calloc+5);

    return 0;
}


