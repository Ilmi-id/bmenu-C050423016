#include <iostream>
#include <conio.h>
using namespace std;

int n;

void tukar(int *a, int *b) {
    int ubah = *a;
    *a = *b;
    *b = ubah;
}

void bubble_sort(int data[]){
  for (int i=1; i<n; i++){
    for(int j=n-1; j>=i; j--) {
      if(data[j] <data[j-1]) tukar(&data[j], &data[j-1]);
    }
  }
  system("cls");
  cout << "Data setelah ascending : \n";
  for (int i = 0; i < n; i++) {   
          cout << data[i] << endl; }
  getch();
}

void bubble_sort2(int data[]){
  for (int i=1; i<n; i++){
    for(int j=n-1; j>=i; j--) {
      if(data[j] >data[j-1]) tukar(&data[j], &data[j-1]);
    }
  }
  system("cls");
  cout << "Data setelah descending : \n";
  for (int i = 0; i < n; i++) {   
          cout << data[i] << endl; }
  getch();
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
// cout<<"hallo saya menu "<<pesan;
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
    // mPertama("pertama");
    system("cls");
    cout << "Masukkan jumlah data: ";
      cin >> n; 
        for (int i = 0; i < n; i++) {
          cout << "Masukkan data ke-" << i + 1 << ": ";
           cin >> data[i];}
    break;
   case '2':
    // mPertama("ke- dua");
    /* code */ 
    system("cls");
    cout << "Data yang dimasukkan: \n";
        for (int i = 0; i < n; i++) {
          cout << "Data ke-" << i + 1 << ": " << data[i] << endl; }
    getch();
    break;  
   case '3':
    // mPertama("ke- tiga");
    /* code */
    bubble_sort(data);
    break;  
   case '4':
    // mPertama("ke- empat");
    /* code */
    bubble_sort2(data);
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