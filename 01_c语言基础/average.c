#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    float *arr;
    float sum = 0.0;
    float average;

    printf("How many numbers do you want to input?");
    scanf("%d",&n);

    if(n <= 0) {
        printf("Error: Invalid number of elements.\n");
        return 1;
    }
    arr = (float *)malloc(n *
    sizeof(float));
    if (arr == NULL) {
        printf("Error: Memory allocation failed!\n");
        return 1;
    }


    printf("Please input %d numbers:",n);
    for (int i =0; i < n; i++){
        scanf(" %f",&arr[i]);
        sum = sum +arr[i];
    }
    average = sum / n;

    printf("The average is: %.2f\n",average);
    free(arr);
    arr = NULL;
    return 0;
}
