#include<stdio.h>
void find_min(int a[], int n) {
    int min;
    for (int x = 0; x < n; x++)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i+1]<a[i])
            {
                min=a[i+1];
                a[i+1]=a[i];
                a[i]=min;
            }

        }
    }

}
void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%4d", a[i]);    
}
}

int main() {
    int a[10];
    for (int q = 0; q < 10; q++)
    {
        scanf("%d", &a[q]);
    }
    find_min(a, 10);
    printArray(a, 10);
    printf("\n");
}
