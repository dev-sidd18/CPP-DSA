#include <bits/stdc++.h>
using namespace std;

void Merge(int arr[], int l, int r, int mid, int n) {
    int n1 = mid - l + 1;
    int n2 = r - mid;

    vector<int> left(n1), right(n2);

    for (int i = 0; i < n1; i++)
        left[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        right[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }
    while (i < n1) arr[k++] = left[i++];
    while (j < n2) arr[k++] = right[j++];
}

void Merge_sort(int arr[], int l, int r, int n)
{
    if (l < r) {
        int mid = (l + r) / 2;
        Merge_sort(arr, l, mid, n);
        Merge_sort(arr, mid + 1, r, n);
        Merge(arr, l, r, mid, n);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Merge_sort(arr, 0, n - 1, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}