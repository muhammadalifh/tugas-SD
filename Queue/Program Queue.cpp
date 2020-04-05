#include <stdio.h>
#include <iostream>
#include<stdlib.h>
#include <conio.h>
#define MAX 10

using namespace std;

typedef struct{
               int data[MAX];
               int head;
               int tail;
   }Queue;
   Queue antrian;

void Create(){
   antrian.head=antrian.tail=-1;
   }
int IsEmpty(){
   if(antrian.tail==-1)
       return 1;
   else
       return 0;
   }
int IsFull(){
    if(antrian.tail==MAX-1)
        return 1;
    else
        return 0;
}

Enqueue(int data)
{
        if(IsEmpty()==1)
        {
            antrian.head=antrian.tail=0;
            antrian.data[antrian.tail]=data;
            printf("%d sudah dimasukan",antrian.data[antrian.tail]);
        } else
        if(IsFull()==0)
        {
            antrian.tail++;
            antrian.data[antrian.tail]=data;
            printf("%d sudah dimasukan",antrian.data[antrian.tail]);
        }
}
int Dequeue()
{
        int i;
        int e = antrian.data[antrian.head];
        for(i=antrian.head; i<=antrian.tail-1;i++)
        {
            antrian.data[i]=antrian.data[i+1];
        }
        antrian.tail--;
        return e;
}
void Clear()
{
    antrian.head=antrian.tail=-1;
    printf("CLEAR");
}
void Tampil()
{
    if(IsEmpty()==0)
    {
        for(int i=antrian.head;i<=antrian.tail;i++)
        {
            printf(" %d",antrian.data[i]);
        }
    }else printf("data kosong!\n");
}
void operasidata(int pill)
{
     int jum=0;
     int b=antrian.tail+1;
     float avg;

     if(IsEmpty()==0)
    {
         for(int i=antrian.head;i<=antrian.tail;i++)
        {
            jum=jum+antrian.data[i];
     }
 avg=jum/b;
 switch(pill)\
 {
 case 1:
 cout<<"jumlah datanya ="<<jum;
 break;
 case 2:
 cout<<"Rata-rata datanya ="<<avg;
 break;
 case 3:
 cout<<"banyak datanya ="<<antrian.tail+1;
 break;
 default:
 break;
    }
 }else{
 cout<<"data kosong!\n";
    }
}
int main()
{
    int pil;
    int data;
    Create();
    do{
      cout<<endl<<endl;
        cout<<"  =============================="<<endl;
        cout<<"  \t  PROGRAM QUEUE        "<<endl;
        cout<<"  =============================="<<endl;
        cout<<"    1. ENQUEUE                 "<<endl;
        cout<<"    2. DEQUEUE                 "<<endl;
        cout<<"    3. TAMPIL                  "<<endl;
        cout<<"    4. CLEAR                   "<<endl;
        cout<<"    5. BANYAK DATA      "<<endl;
        cout<<"    6. JUMLAH DATA      "<<endl;
        cout<<"    7. RATA-RATA      "<<endl;
        cout<<"    8. EXIT                   "<<endl;
      cout<<"  =============================="<<endl;
        cout<<"  Masukan Pilihan : ";cin>>pil;
        switch(pil)
        {
                case 1:
                cout<<"Masukan Data : ";cin>>data;
                Enqueue(data);
                break;

                case 2:
                Dequeue();
                break;

                case 3:
                Tampil();
                break;

                case 4:
                Clear();
                break;

                case 5:
                 operasidata(3);
                break;
                   case 6:
                operasidata(1);
                break;
                   case 7:
                operasidata(2);
                break;

                case 8:

                break;
        }

        getch();

    }
   while(pil!=8);
    return 0;
}
