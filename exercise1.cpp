/*
Nama	: Hafidh Akhdan Najib
Kelas	: A
NPM		: 140810180061
*/

#include<iostream>
using namespace std;

const int maxElemen = 255;

struct Queue{
 int isi[maxElemen];
 int head;
 int tail;
};
Queue q;

void createQueue (Queue& q){
 q.head = 0;
 q.tail = -1;
}

void createElement(int& elemen){
    cout << "Input : "; cin >> elemen;
}

void insertQueue (Queue& q, char elemen){
 if (q.tail==maxElemen-1){
  cout << "Antrian sudah penuh" <<endl;
 }
 else{
  q.tail=q.tail + 1;
  q.isi[q.tail] = elemen;
 }
}

void deleteQueue (Queue& q, char& elemenHapus){
 if(q.head>q.tail){
  cout << "Antrian kosong" <<endl;
 }
 else{
  elemenHapus = q.isi[q.head];
  for (int i=0; i<q.tail; i++){
   q.isi[i]=q.isi[i+1];
  }
  q.tail=q.tail-1;
 }
}


void traversal (Queue q){
 for (int i=q.head; i<=q.tail; i++){
  cout << q.isi[i] << " ";
 }
}

int main(){
 char ambil;
 int a,n,s;
 createQueue(q);
 cout<< "Banyak element : "; cin>>s;
    for (int i=0;i<s;i++){
        createElement(a);
        insertQueue(q,a);
    };
 cout <<endl;
 traversal(q);
}
