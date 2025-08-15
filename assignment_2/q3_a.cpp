#include <iostream>
using namespace std;

int search(int arr[], int n)
{
   int missing = -1;
   for (int i = 0; i < n; i++)
   {
      if (i + 1 != arr[i])
      {
         missing = i + 1;
         return missing;
      }
   }
   return missing;
}

int main()
{
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 10};
   int n = sizeof(arr) / sizeof(arr[0]);
   int missing = search(arr, n);
   if (missing == -1)
   {
      cout << "No missing element";
   }
   else
   {
      cout << "Missing number is: " << missing << endl;
   }

   return 0;
}