#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
  int start = 0;
  int end = size - 1;
  int mid = (start + end) / 2;
  while (start <= end)
  {
    if (arr[mid] == key)
    {
      return mid;
    }
    else if (key > arr[mid])
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
    mid = (start + end) / 2;
  }
  return -1;
}

int main()
{
  int size = 10;

  int arr[size] = {1, 2, 3, 4, 5, 6, 65, 80, 90, 100};

  int index = binarySearch(arr, 10, 6);
  cout << "index is " << index;
  return 0;
}