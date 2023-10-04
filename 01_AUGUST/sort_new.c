#include <stdio.h>
int main(){
    int arr1[50] = {9,8,7,6,2,3,4,5}; // array
    int n = 8; // number of elements
    int turn = 0; // number of turn
    int sort = 1; // sorted statement in boolean mode
    int i, temp, j = 0; // temporary
    // int arr2[50] = {};
    for (i = 0; i < n-1;) {
        if (arr1[i] > arr1[i+1]){
            temp = arr1[i];
            arr1[i] = arr1[i+1];
            arr1[i+1] = temp;
            sort = 0;
        }
        i++;
        if (i == n-1 && ++turn < 7){
            if (sort == 1) break; // break out of loop if already sorted
            i = 0;
            n--; // decrease number of turns to one less because the hgihest number has been reached to the end
            sort = 1;
        }
        j++;
    }
    printf("%d\n", j);
    for ( i = 0; i < 8; i++){
        printf("%d ", arr1[i]);
    }
}