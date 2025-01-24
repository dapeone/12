#include <iostream>
using namespace std;

int main(){
  int elements, i, counter;
  cout << "Введите количество элементов в массиве   ";
  cin >> elements;
  double array [elements], arrayReverse [elements];
  counter = elements - 1;
  
  for (i = 0; i < elements; ++i) {
    cout << "Введите " << i << " элемент массива ";
    cin >> array [i];
  }
  cout << "Исходный массив:" << endl;

  for (i = 0; i < elements; ++i) {
    cout << array [i] << " ";
    arrayReverse [counter] = array [i];
    --counter;
  }

  cout << endl << "Перевернутый массив" << endl;
  for (i = 0; i < elements; ++i) {
    cout << arrayReverse [i] << " ";
  }
}