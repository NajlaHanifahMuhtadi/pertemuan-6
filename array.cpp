#include <iostream>
using namespace std;

int main(){
    int dataku[5] = {10,20,30,40,50};

    int datamu[5];
    
    // Cara akses (membaca atau mengambil isi array) 
    cout << "Isi data kedua : " << dataku[1] << endl;
    
    // Mengisi array
    dataku[1] = 200;
    cout << "Isi data kedua setelah diubah : " << dataku[1] << endl;
}