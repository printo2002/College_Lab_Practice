#include<stdio.h>
#include<conio.h>

// Function to merge two halves
void merge(int arr[], int l, int m, int r) {
    int i = l, j = m + 1, k = 0;
    int temp[100];

    while (i <= m && j <= r) {
	if (arr[i] < arr[j]) {
	    temp[k++] = arr[i++];
	} else {
	    temp[k++] = arr[j++];
	}
    }

    while (i <= m) {
	temp[k++] = arr[i++];
    }

    while (j <= r) {
	temp[k++] = arr[j++];
    }

    // Copy back to original array
    for (i = l, k = 0; i <= r; i++, k++) {
	arr[i] = temp[k];
    }
}

// Merge Sort function
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
	int m = (l + r) / 2;

	mergeSort(arr, l, m);     // left half
	mergeSort(arr, m + 1, r); // right half

	merge(arr, l, m, r);      // merge both
    }
}

void main() {
    int arr[100], n, i;
    clrscr();
    printf("---- Merge Sort ----\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
	scanf("%d", &arr[i]);
    }

    printf("Before sorting:\n");
    for(i=0;i<n;i++)
    {
      printf("%d\t",arr[i]);
    }
    printf("\n");
    //
    mergeSort(arr, 0, n - 1);

    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
	printf("%d\t", arr[i]);
    }

    getch();
}