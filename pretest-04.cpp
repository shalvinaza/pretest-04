/*
Nama    : Shalvina Zahwa Aulia
NPM     : 140810180052
Kelas   : B
Tanggal : 27 Maret 2019
*/

#include <iostream>
using namespace std;

struct Elemtlist {
    char npm[14];
    char nama[40];
    float ipk;
    Elemtlist* next;
};
typedef Elemtlist* pointer;
typedef pointer List;

void createList(List& first){
    first=NULL;
}
void createElement(pointer& pBaru){
    cout << "\nNPM\t : "; cin >> pBaru->npm;
    cout << "Nama\t : ";
    cin.ignore();
    cin.getline(pBaru->nama,40);
    cout << "IPK\t : "; cin >> pBaru->ipk;
    cout << endl;
    pBaru->next = NULL;
}
void insertSortNama (List& first, pointer pBaru);

void traversal (List first){
    pointer pBantu;
    if (first==NULL){
        cout << "List Kosong "<< endl;
    }
    else {
        pBantu=first;
        do {
            cout << "\nNPM\t : "<< pBantu->npm<<endl;
            cout << "Nama\t : "<< pBantu->nama<<endl;
            cout << "IPK\t : "<< pBantu->ipk;
            pBantu = pBantu -> next;
        } while (pBantu !=NULL);
    }
}


int main (){
    pointer p;
    List l;
    int n;

    cout << "Masukkan banyak data : "; cin >> n;
    createList(l);
    for (int i=0; i<n; i++){
        createElement(p);
    }
    traversal(l);
}
