#include <iostream>
using namespace std;

int main() {
  int i;
  int data1[5] = {1, 2, 3, 4, 5};
  int data2[2] = {11, 12};
  
  int panjang1 = sizeof(data1)/sizeof((data1)[0]);
  int panjang2 = sizeof(data2)/sizeof((data2)[0]);
  int gabung = panjang1 + panjang2;
  
  int gabungan[gabung];
  
  
  for (i = 0; i < panjang1; i++) {
    gabungan[i] = data1[i];
  }
  for (i = 0; i < panjang2; i++) {
    gabungan[panjang1 + i] = data2[i];
  }

  cout << "Array 1 = ";
  for (i = 0; i < panjang1; i++) {
    cout << data1[i] << " ";
  }
  cout << endl;


  cout << "Array 2 = ";
  for (i = 0; i < panjang2; i++) {
    cout << data2[i] << " ";
  }
  cout << endl;

  cout << "Maka" << endl;
  cout << "Array hasil gabungan adalah = ";
  for (i = 0; i < gabung; i++) {
    cout << gabungan[i] << " ";
  }

  return 0;
}