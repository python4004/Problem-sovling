#include <iostream>
using namespace std;

int result=-1;
int lower_bound(int arr[], int target, int L, int R) {
  while (L <= R) 
  {
    int mid = (L + R) / 2;
    if (target == arr[mid]) 
    {
      R=mid-1;
      result=mid;
    } else if (target > arr[mid])
    {
      L = mid + 1;
    } else 
    {
      R = mid - 1;
    }
  }
  return result;  
}

int upper_bound(int arr[], int target, int L, int R) {
  while (L <= R) {
    int mid = (L + R) / 2;
    if (target == arr[mid]) 
    {
      L = mid + 1;
      result=mid;
    } else if (target > arr[mid]) {
      L = mid + 1;
    } else {
      R = mid - 1;
    }
  }
  return result;
}

int main() {
  int arr[] = {1, 1, 2, 2, 2, 3, 4, 5};
  int L = 0, R = sizeof(arr) / sizeof(int) - 1;
  int target = 2;

  int lowerBoundIndex = lower_bound(arr, target, L, R);
  int upperBoundIndex = upper_bound(arr, target, L, R);

  cout << "Lower bound index: " << lowerBoundIndex << endl;
  cout << "Upper bound index: " << upperBoundIndex << endl;

  return 0;
}
