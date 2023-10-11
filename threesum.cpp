#include <bits/stdc++.h>
using namespace std;
bool findTriplet(int arr[], int arr_size, int sum) {
   for (int i = 0; i < arr_size - 2; i++) {
      for (int j = i + 1; j < arr_size - 1; j++) {
         for (int k = j + 1; k < arr_size; k++) {
            if (arr[i] + arr[j] + arr[k] == sum) {
               cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
               return true;
            }
         }
      }
   }
   return false;
}
int main() {
   int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
   findTriplet(arr, 7, 12);
   return 0;
}
