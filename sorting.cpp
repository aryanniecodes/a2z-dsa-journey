#include <bits/stdc++.h>
using namespace std;

void print_array(int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void inp_array(int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void selection_sort(int n, int *arr)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
                min = j;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void bubble_sort(int n, int *arr)
{
    int temp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int didSwap = 0;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
            if (didSwap == 0)
            {
                break;
            }
        }
    }
}

void insertion_sort(int n, int arr[])
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.emplace_back(arr[left]);
            left++;
        }
        else
        {
            temp.emplace_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.emplace_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        temp.emplace_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void mergesort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;
    int mid = low + (high - low) / 2;
    mergesort(arr, low, mid);
    mergesort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int partition(vector<int> &arr, int low, int high)
{
    int pivot = low;
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= arr[pivot] && i <= high)
        {
            i++;
        }
        while (arr[j] > arr[pivot] && j >= low)
        {
            j--;
        }
    }
    if (i < j)
    {
        swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int Pindex = partition(arr, low, high);
        qs(arr, low, Pindex - 1);
        qs(arr, Pindex + 1, high);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.emplace_back(temp);
    }
    qs(arr, 0, n - 1);
    for (int x : arr)
    {
        cout << x << " ";
    }
}