#include <stdio.h>
#include <string.h>

void qsort(int v[], int left, int right);
void swap(int v[], int i, int j);

int main()
{
    char numbers[] = {14, 5, 3, 65, 7, 4, 3, 23, 45};
    
    for (int i = 0; i < strlen(numbers); i++) {
        printf("%d\n", numbers[i]);
    }
    qsort(numbers, numbers[0], numbers[strlen(numbers) - 1]);

    for (int i = 0; i < strlen(numbers); i++) {
        printf("%d\n", numbers[i]);
    }

}

void qsort(int v[], int left, int right)
{
    int i, last;

    if (left >= right) {
        return;
    }
    swap(v, left, (left + right) / 2);
    last = left;
    for (i = left + 1; i <= right; i++) {
        if (v[i] < v[left])
            swap(v, ++last, i);
    }
    swap(v, left, last);
    qsort(v, left, last -1);
    qsort(v, last + 1, right);
}

void swap(int v[], int i, int j)
{
    int temp;
    
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}



