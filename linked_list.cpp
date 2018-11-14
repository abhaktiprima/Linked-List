#include <stdio.h>
#include <iostream>
#include <conio.h>
#include<cstdlib>
#include<stdlib.h>
using namespace std;

struct TNode{
    int data;
    TNode *next;
};
TNode *head, *tail;

void init(){
    head = NULL;
    tail = NULL;
}
int isEmpty(){
 if(tail == NULL) return 1;
 else return 0;
}



void insertData(int databaru){
 TNode *baru,*bantu;
 baru = new TNode;
 baru->data = databaru;
 baru->next = NULL;
 if(isEmpty()==1){
 head=baru;
 tail=baru;
 tail->next = NULL;
 }
 else {
  tail->next = baru;
  tail=baru;
 }
 cout<<"Data masuk\n";
}

void tampil(){
 TNode *bantu;
 bantu = head;
     if(isEmpty()==0){
          while(bantu!=NULL){
           cout<<bantu->data<<" ";
           bantu=bantu->next;
          }
     } else cout<<"Masih kosong\n";
  }

  int countData(){
      int count = 0;
 TNode *bantu;
 bantu = head;
 if(isEmpty() == 0){
    while(bantu!=NULL){
        //count++;
        bantu = bantu->next;
        count++;

    }
    cout<<"Hasil Count Element : "<<count<<endl;
    return count;
 }
  }


  void clrscr() {
  #ifdef WINDOWS
  system("cls");
  #endif
  #ifdef LINUX
  system("clear");
  #endif
}

void hapus(){
     TNode *bantu,*hapus;
     int d;
     if (isEmpty()==0){
      bantu = head;
          if(head!=tail){
               while(bantu->next!=tail){
                bantu = bantu->next;
               }
               hapus = tail;
               tail=bantu;
               d = hapus->data;
               delete hapus;
               tail->next = NULL;
            }else {
            d = tail->data;
             head=tail=NULL;
            }
      cout<<d<<" terhapus\n";
     } else cout<<"Masih kosong\n";
}
void clear()
{
        TNode *bantu,*hapus;
        bantu = head;
        while(bantu!=NULL)
        {
            hapus = bantu;
            bantu = bantu->next;
            delete hapus;
        }
        head = NULL;
      printf("CLEAR");
}

main()
{
    int pil,databaru;

    do
    {
         clrscr();
        cout<<endl<<endl;
        cout<<"   ==========================="<<endl;
        cout<<"   =  SOAL UTS STRUKTUR DATA ="<<endl;
        cout<<"   ==========================="<<endl;
        cout<<"   = 1. Insert / Creation    ="<<endl;
        cout<<"   = 2. Delete Element       ="<<endl;
        cout<<"   = 3. View Element         ="<<endl;
        cout<<"   = 4. Count Element        ="<<endl;
        cout<<"   = 5. Exit                 ="<<endl;
        cout<<"   ==========================="<<endl;
        cout<<"   Masukan Pilihan : ";cin>>pil;
        switch (pil)
        {
            case 1: clrscr();{
                cout<<"Masukkan Data = ";
                cin>>databaru;
                insertData(databaru);
                break;
            }
            case 2: clrscr();{
                hapus();
                break;
            }
            case 3: clrscr();{
                tampil();
                break;
            }
            case 4: clrscr();{
                countData();
                break;
            }
            case 5: clrscr();{
                return 0 ;
                break;
            }
            default : clrscr();{
            cout<<"\n Maaf, Pilihan yang anda pilih tidak tersedia!";
            }

        }
        getch();
    }
    while(pil!=7);
}
