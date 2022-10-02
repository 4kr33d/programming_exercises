#include <stdio.h>
int main() {
    int n, a[30], i, z, count=0;
    printf("Enter size of array");
    scanf("%d", &n);
    printf("Enter array elements:");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter any element from the array");
    scanf("%d", &z);
    for(i=0; i<n; i++)
    {
        if(a[i] == z)
        count++;
    }
    printf("%d occurs %d times", z, count);
    return 0;
}
