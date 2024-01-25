#include <iostream>

using namespace std;

template <typename T>

T average(T array[], int size)
{
   T sum = 0;
   for(int i = 0; i < size; i ++)
   {
     sum += array[i]; 
   }
   return sum / size;

}

template <typename T>
void input(T array[], int size)
{
  cout << "fill rhe array: " << endl;
  for(int i = 0; i < size; i ++)
  {
    cout << "enter value " << i + 1 << " : ";
    cin >> array[i];
  }

}


int main()
{
   const int size = 8;
   double array[size];
   input(array, size);
   double result = average(array, size);
   cout << "average: " << result << endl;

   return 0;
}