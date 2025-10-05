#include <iostream>
using namespace std;

int main() {
  int i, j, temp;
  int data1[5] = {3, 1, 3, 2, 5};
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

  cout << "Array sebelum pengurutan = " << endl;
  for (i = 0; i < gabung; i++) {
    cout << gabungan[i] << " ";
  }

  cout << endl;

  for (i = 0; i < gabung; i++) {
    for (j = i+1; j < gabung; j++) {
      if (gabungan[i] > gabungan[j]) {
        temp = gabungan[i];
        gabungan[i] = gabungan[j];
        gabungan[j] = temp;
      }
    }
  }

  cout << endl;

  cout << "Array hasil pengurutan = " << endl;
  for (i = 0; i < gabung; i++) {
    cout << gabungan[i] << " ";
  }
  cout << endl;

  return 0;

}
