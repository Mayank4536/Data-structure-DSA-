#include<stdio.h>

void printArray(int*A, int n){
    for(int i =0; i<n; i++)
    {
        printf("%d", A[i]);
    }
    printf("\n");
}

void bubblesort(int*A, int n){
    int temp;
    int isSorted = 0;
    for(int i=0; i<n-1; i++)
    {
        printf("Working on pass number %d\n", i+1);
        for(int j =0; j<n-1-i; j++)
        {
            if(A[i]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

void bubblesortAdaptive(int*A , int n){
int temp;
int issorted = 0;
for(int i=0;i<n-1;i++){
    printf("Working on pass number %d\n", i+1);
    issorted =1;
    for(int j=0;j<n-1-i; j++){
        if(A[i]>A[j+1]){
            temp = A[j];
            A[j] = A[j+1];
            A[j+1] = temp;
            issorted = 0;
        }
    }
    if(issorted){
        return;
    }
}
}
int main()
{
    int A[] = {1,2,3,5,6,12,54,625,7,23,9,987};
    int n = 11;
    printArray(A, n);
    bubblesort(A, n);
    printArray(A, n);
    return 0;
}