#include <iostream>
#include <sstream>

using namespace std;

int main(){
    string nim;
    string nama;
    int umur;
    string alamat;

    cout<<"Masukkan Nama : ";
    cin>>nama;
    cout<<"Masukkan NIM : ";
    cin>>nim;
    cout<<"Masukkan Umur : ";
    cin>>umur;
    stringstream ss;
    ss<<umur;
    string u;
    ss>>u;
    cout<<"Masukkan Alamat : ";
    cin>>alamat;

    cout<<"\n"<<"----------------------"<<"\n";
    cout<< "\n" <<"Nama : " << nama << "\n";
    cout<<"NIM : " << nim << "\n";
    cout<<"Umur : " << umur << "\n";
    cout<<"Alamat : " << alamat << "\n";
    
    int karakter;
    karakter = nama.length();
    cout << "Jumlah huruf pada nama mahasiswa adalah " << karakter << endl;
}