#include <iostream>
#include <conio.h>
using namespace std;

const int MAX_SIZE = 66; 
int arr[MAX_SIZE]; 
int n = 0; 

void dMenu() {
    system("cls");
    cout << "Aplikasi Sorting Bubble" << "\n";       
    cout << "1. Memasukkan data" << "\n";            
    cout << "2. Menampilkan data" << "\n";            
    cout << "3. Sorting" << "\n";           
    cout << "4. Sepatah Kata" << "\n";            
    cout << "5. Exit" << "\n";           
    cout << "Masukan angka :";        
}

void inputData() {
    cout << "Masukkan jumlah elemen array (max " << MAX_SIZE << "): ";
    cin >> n;

    if (n <= 0 || n > MAX_SIZE) {
        cout << "Jumlah elemen tidak valid!\n";
        cin.get(); 
        return;
    }

    cout << "Masukkan " << n << " elemen array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemen ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}

void outputData() {
    system("cls");
    cout << "Data array yang dimasukkan:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    getch(); 
}

void bubbleSorting() {
  for (int i = 0; i < n - 1; ++i) {
      for (int j = 0; j < n - i - 1; ++j) {
          if (arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);   
          }
      }
  }

  cout << "Array setelah diurutkan: ";
  for (int i = 0; i < n; ++i) {
      cout << arr[i] << (i != n - 1 ? ", " : "");
  }
  cin.get();
}

void sepatahKata() {
    system("cls");
    cout << "mantap\n @nayli";
    getch();
}

int main() {
    char pl;
    do {
        dMenu();
        pl = getch();
        switch (pl) {
            case '1':
                inputData(); 
                break;
            case '2':
                outputData(); 
                break;  
            case '3':
                bubbleSorting(); 
                getch(); 
                break;  
            case '4':
                sepatahKata();
                break;  
            case '5':
                break;
            default:
                system("cls");
                cout << "Pilihan Tidak Tersedia";
                getch();
                break;
        }
    } while (pl != '5');
    
    return 0;
}