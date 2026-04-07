#include <iostream>
using namespace std;


int main(){
    //deklarasi array dengan inisialisasi
    int dataku[5] = {10,20,30,40,50};

    //deklarasi tanpa inisialisasi
    int datamu[5];
    int x ;
    //cara membaca array dataku
    cout << "data ke -3 :" << dataku[2]<<endl;
    //operasi matematika 
    x = dataku[2]*3;
    //cara menulis atau mengisi array
    dataku[2]= 600;
    cout << "data ke -3 yang baru : " << dataku[2]<<endl;
}