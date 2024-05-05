// 1. Berikan contoh deklarasi variable. Berikan minimal 3 variable dengan tipe data yang berbeda.
// Jawab :
// int main(){
//      int nBilangan;
//      char pilihan;
//      string nama;
//
//
// 2. Berikan contoh implementasi dari prosedur dan fungsi.
// Jawab :
// #include <iostream>
// using namespace std;
//
// string nama;
// int nAvanza, nPorsche;
// int hAvanza, hPorsche;
//
// void input(){
//      cout << "Nama Pembeli : ";
//      cin >> nama;
//
//      cout << "Jumlah Avanza : ";
//      cin >> nAvanza;
//
//      cout << "Jumlah Porsche : ";
//      cin >> nPorsche;
//
// }
// int TotalHarga(){
//      return(nAvanza + hAvanza) + (nPorsche + hPorsche)
// }
// void display(){
//      cout << "Total Harganya = " << TotalHarga() << endl;
// }
// 
// int main (){
//      char pilihan;
//      do{
//      input();
//      display();
//      cout << "Apakah ingin membeli kembali? ";
//      cin >> pilihan;
//      }while(pilihan == 'y' || pilihan == 'Y');
// }
//
//
// 3. Berikan contoh implementasi dari looping.
// Jawab :
// #include <iostream>
// using namespace std;
//
// int main(){
//      char pilihan;
//  
//      do{
//          cout << "Berangkat membeli makanan" << endl;
//          cout << "Sampai di tempat makan"
//          cout << "Memesan makanan" << endl;
//          cout << "Membayar makanan" << endl;
//          cout << "Apakah mau membeli makanan lagi?" << endl;
//          cin >> pilihan;
//      }while(pilihan == 'y'|| pilihan == 'Y');
// }
// 
// 4. Berikan contoh minimal satu implementasi dari conditional statement
// Jawab :
// #include <iostream>
// using namespace std;
//
// int main(){
//      string status;
//      int nBio, nSBK, nRerata;
//
//      cout << "Masukkan Nilai Biologi = ";
//      cin >> nBio;
//
//      cout << "Masukkan Nilai SBK = ";
//      cin >> nSBK;
//      nRerata = (nBio + nSBK) / 2;
//
//      if(nRerata >= 60){
//      status = "Lulus";
//      }
//      else if(nBio >= 70){
//      status = "Lulus";
//      }
//      else if(nRerata < 60){
//      status = "Tidak Lulus";
//      }
//      else{
//      status = "Tidak Lulus";
//      }
//      cout << "Tampilkan Status = " << status << endl;
//
//      return 0;
// }
//
// 5. Berikan contoh implementasi dari struct.
// Jawab :
// #include <iostream>
// using namespace std;
//
// struct Mahasiswa {
//      string nim;
//      string nama;
//      string alamat;
//      int umur;
// };
//
// int main(){
//      Mahasiswa mhs;
//      cout << "Nomor Mahasiswa : ";
//      cin >> mhs.nim;
//      cout << "Nama Mahasiswa : ";
//      cin >> mhs.nama;
//      cout << "Alamat Mahasiswa : ";
//      cin >> mhs.alamat;
//      cout << "Umur Mahasiswa : ";
//      cin >> mhs.umur;
//
//      cout << endl;
//      cout << "\n NIM : " << mhs.nim;
//      cout << "\n Nama : " << mhs.nama;
//      cout << "\n Alamat : " << mhs.alamat;
//      cout << "\n Umur : " << mhs.umur;
// }
//
//
// 6.
#include <iostream>
using namespace std;

int main(){
    string status;
    char pilihan;
    int Sensor1, Sensor2, Sensor3, nStatus;

    cout << "Tingkat polusi di Bekasi : ";
    cin >> Sensor1;

    cout << "Tingkat polusi di Tangerang : ";
    cin >> Sensor2;

    cout << "Tingkat polusi di Bandung : ";
    cin >> Sensor3;

    nStatus = (Sensor1 + Sensor2 + Sensor3) / 2;

    if(nStatus > 75){
        status = "Tidak Sehat";
    }
    else if(Sensor1 <= 75){
        status = "Sehat";
    }
    else if(Sensor2 <= 75){
        status = "Sehat";
    }
    else{
        status = "Tidak Sehat";
    }
    cout << "Tampilkan Status = " << status << endl;

    do{
    cout << "Apakah ingin mengulang program? ";
    cin >> pilihan;
    }while(pilihan == 'y' || pilihan == 'Y');
}