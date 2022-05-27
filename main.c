#include <stdio.h>

int main() {
    int n = 0;
    printf("enter arr size: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n;i++){
        printf("append number to arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("arr[%d] = {", n);
    for(int i = 0; i<n;i++){
        if (n<2 && n>-2)
            printf("%d", arr[i]);
        else if((i!=n-1))
            printf("%d, ", arr[i]);
        if(i==n-1)
            printf("%d", arr[i]);
    }
    printf("}\n");
}