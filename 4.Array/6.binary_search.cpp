#include <iostream>
using namespace std;

int main() {
  int  A[5] = {10,20,30,40,50},l=0,h=4,key,mid;
  //Binary Search
  cout << "Enter Key need to Search : ";
  cin >> key;

  while (l <= h)
          {
            mid=(l+h)/2;
            if (key == A[mid])
                 {
                   cout  << "Key got matched at : " << "index " << mid;
                   return 0;
                 }
            else if (key < A[mid])
                {
                  h = mid -1;
                }
            else
               {
                 l = mid+1;
               }
          }

  if (l > h)
        {
          cout << "Sorry matched element not found";
          return 0;
        }
}

//Output
// Enter Key need to Search : 50
// Key got matched at : index 4

// Enter Key need to Search : 1000
// Sorry matched element not found

// Enter Key need to Search : 40
// Key got matched at : index 3
