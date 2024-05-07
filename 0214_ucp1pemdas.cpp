#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama[50];
    float sensor1[100], sensor2[100], sensor3[100];
    string status[50];
    string pilihan;
    int banyak_lokasi = 0;

    do {
 
        cout << "Masukkan nama lokasi: ";
        cin >> nama[banyak_lokasi];
        cout << "Masukan nilai sensor 1 di lokasi " << nama[banyak_lokasi] << ": ";
        cin >> sensor1[banyak_lokasi];
        cout << "Masukan nilai sensor 2 di lokasi " << nama[banyak_lokasi] << ": ";
        cin >> sensor2[banyak_lokasi];
        cout << "Masukan nilai sensor 3 di lokasi " << nama[banyak_lokasi] << ": ";
        cin >> sensor3[banyak_lokasi];

        
        float rata_rata = (sensor1[banyak_lokasi] + sensor2[banyak_lokasi] + sensor3[banyak_lokasi]) / 3;

     
        if (rata_rata > 75 || sensor1[banyak_lokasi] == 45 || sensor2[banyak_lokasi] == 45 || sensor3[banyak_lokasi] == 45) {
            status[banyak_lokasi] = "Tidak Sehat";
        } 
        else {
            status[banyak_lokasi] = "Sehat";
        }

        
        cout << "\nNama\t\tStatus" << endl;
        for (int i = 0; i <= banyak_lokasi; i++) {
            cout << nama[i] << "\t\t" << status[i] << endl;
        }

 
        int total_sehat = 0;
        int total_tidak_sehat = 0;
        for (int i = 0; i <= banyak_lokasi; i++) {
            if (status[i] == "Sehat") {
                total_sehat++;
            } else {
                total_tidak_sehat++;
            }
        }
        cout << "\nTotal lokasi dengan kualitas udara Sehat: " << total_sehat << endl;
        cout << "Total lokasi dengan kualitas udara Tidak Sehat: " << total_tidak_sehat << endl;



        cout << "\nApakah mau mengulang program? (y/n): ";
        cin >> pilihan;
    } while (pilihan == "y" || pilihan == "Y");

    return 0;
}