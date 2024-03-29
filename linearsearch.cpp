// c++ code to perform linear search.

#include <iostream>
using namespace std;
int main()
{
  int i, n, key;
  cout << "enter a size of an array: ";
  cin >> n;

  int a[n]; // Declaring an array of size 'n'

  for (i = 0; i < n; i++)
  {
    cout << "enter a number " << i + 1 << ": ";
    cin >> a[i]; // Storing input numbers in the array
  }

  cout << "enter a number to find: ";
  cin >> key;

  bool found = false; // Flag to indicate if key is found

  for (i = 0; i < n; i++)
  {
    if (a[i] == key)
    {
      cout << "Number " << key << " found at position " << i + 1 << endl;
      found = true;
      break; // No need to continue searching once found
    }
  }

  if (!found)
  {
    cout << "Number not found" << endl;
  }

  return 0;
}
