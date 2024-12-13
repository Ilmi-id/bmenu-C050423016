#include <iostream>
#include <conio.h>
using namespace std;

int n;

void tukar(int *a, int *b) {
    int ubah = *a;
    *a = *b;
    *b = ubah;
}

void dMenu(){
system("cls");
cout<<"Aplikasi Sorting Bubble"<<"\n";       
cout<<"1. Masukkan Data"<<"\n";            
cout<<"2. Tampilkan Data"<<"\n";            
cout<<"3. Sorting ASC"<<"\n";           
cout<<"4. Sorting DSC"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        

}

void mPertama(string pesan){
system("cls");
cout<<"hallo saya menu "<<pesan;
getch();
}


int main() {
int data[100];
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    /* code */
    mPertama("pertama");
    cout << "Masukkan jumlah data: ";
      cin >> n; 
        for (int i = 0; i < n; i++) {
          cout << "Masukkan data ke-" << i + 1 << ": ";
           cin >> data[i];}
    break;
   case '2':
    mPertama("ke- dua");
    /* code */ 
    cout << "Data yang dimasukkan: \n";
        for (int i = 0; i < n; i++) {
          cout << "Data ke-" << i + 1 << ": " << data[i] << endl; }
    getch();
    break;  
   case '3':
    mPertama("ke- tiga");
    /* code */
    break;  
   case '4':
    mPertama("ke- empat");
    /* code */
    break;  
  case '5':
    /* code */
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}