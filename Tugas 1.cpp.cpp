#include <conio.h>
#include <iostream>
using namespace std;

int main(){
char pilih[4]= {'a','b','c','d'};
int b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,total_nilai;

   cout<<"\t==========================\n";
   cout<<"\tPROGRAM SOAL PILIHAN GANDA\n";
   cout<<"\t==========================\n";
   
   cout<<"Nama:Aditya sari caessar\n";
   cout<<"Nim:F1B019007 \n";
   cout<<"kelompok:3\n";
   cout<<"====================================\n";
   cout<<"Selamat Mengerjakan dan semoga Sukses !!!!\n" ;
   cout<<"=====================================\n";
   cout<<"(1) Siapa sajakah yang berisiko terinveksi COVID-19 ,KECUALI ?\n\n";

   cout<<"a. Orang yang tinggal didaerah covid-19 \n";
   cout<<"b. Orang yang menjauhi covid-19 \n";
   cout<<"c. Orang yang sudah berumur atau lansia\n";
   cout<<"d. Orang yang berpergian didaerah dimana covid-19 berada\n";
   cout<<"Jawaban : ";

   cin>>pilih;
	 if(pilih[0]){

       b1=10;
	 cout<<"Benar\nnilai = "<<b1<<"\n\n\n"; }

      else{

      b1=-5;
	 cout<<"Salah\nNilai = "<<b1<<"\n\n\n";
	 }

	cout<<"(2) Berapa lama waktu yang diperlukan sejak tertular hingga muncul gejala civid-19 . . .\n\n";

    cout<<"a. 3 hari\n";
	cout<<"b. 14 hari \n";
	cout<<"c. 11 hari\n";
	cout<<"d. 27 hari\n";
	cout<<"Jawaban : ";

   	cin>>pilih;
	if(pilih[1]){

       b2=10;
	cout<<"Benar\nNilai = "<<b2<<"\n\n\n";}
	else{
	b2=-5;
	cout<<"Salah\nNilai = "<<b2<<"\n\n";
	}



   cout<<"(3) Manakah dibawah ini gejala covid-19 ? \n\n";

    cout<<"a. Meriang\n";
	cout<<"b. sakit kepala\n";
	cout<<"c. demam tinggi,sesak napas\n";
	cout<<"d. badan pegel\n";
	cout<<"Jawaban anda : ";

   cin>>pilih;
	if (pilih[2]) {

     b3=10;

    cout<<"Benar\nNilai = "<<b3<<"\n\n\n";

    }
	else{

      b3=-5;

      cout<<"Salah\nNilai = "<<b3<<"\n\n\n";
	 }

    cout<<"(4) Virus covid-19 yang menyerang manusia muncul pertama kali  pada akhir tahun 2019 di negara ?\n\n";

    cout<<"a. italia\n";
	cout<<"b. indonesia\n";
	cout<<"c. amerika\n";
	cout<<"d. china\n";
	cout<<"Jawaban : ";

   cin>>pilih;
	 if(pilih[3]){

       b4=10;

      cout<<"Benar\nNilai = "<<b4<<"\n\n\n";

      }

      else {
	b4=-5;

  	 cout<<"Salah\nNilai = "<<b4<<"\n\n\n\n";
	 }
	cout<<"(5) Hal yang dapat mencegah penularan covid adalah ?\n\n";

   cout<<"a.selalu hidup bersih \n";
   cout<<"b. menyentuh muka dengan tangan kotor \n";
   cout<<"c. tidak mencuci tangan\n";
   cout<<"d. buang sampah sembarangan\n";
   cout<<"Jawaban : ";

   cin>>pilih;
	 if(pilih[0]){

       b5=10;
	 cout<<"Benar\nnilai = "<<b5<<"\n\n\n"; }

      else{

      b5=-5;
	 cout<<"Salah\nNilai = "<<b5<<"\n\n\n";
	 }

	cout<<"(6) Hewan manakah yang pertama menularkan penyakit covid-19. . .\n\n";

    cout<<"a. ikan\n";
	cout<<"b. kelelawar \n";
	cout<<"c. harimau\n";
	cout<<"d. ayam\n";
	cout<<"Jawaban : ";

   	cin>>pilih;
	if(pilih[1]){

       b6=10;
	cout<<"Benar\nNilai = "<<b6<<"\n\n\n";}
	else{
	b6=-5;
	cout<<"Salah\nNilai = "<<b6<<"\n\n";
	}



   cout<<"(7) Apa  upaya besar pemerintah dalam menanggulangi covid-19? \n\n";

    cout<<"a. pembagian masker\n";
	cout<<"b. bantuan sembako\n";
	cout<<"c. melakukan psbb\n";
	cout<<"d. duduk diam saja\n";
	cout<<"Jawaban anda : ";

   cin>>pilih;
	if (pilih[2]) {

     b7=10;

    cout<<"Benar\nNilai = "<<b7<<"\n\n\n";

    }
	else{

      b7=-5;

      cout<<"Salah\nNilai = "<<b7<<"\n\n\n";
	 }

    cout<<"(8) bagaimana cara virus corona masuk kedalam tubuh ?\n\n";

    cout<<"a. virus korona masuk dalam tubuh lewat jari tangan\n";
	cout<<"b. virus korona masuk dalam tubuh lewat lambung\n";
	cout<<"c. virus korona masuk dalam tubuh lewat hidung\n";
	cout<<"d. virus korona masuk kedalam tubuh lewat sel sel.\n";
	cout<<"Jawaban : ";

   cin>>pilih;
	 if(pilih[3]){

       b8=10;

      cout<<"Benar\nNilai = "<<b8<<"\n\n\n";

      }

      else {
	b4=-5;

  	 cout<<"Salah\nNilai = "<<b8<<"\n\n\n\n";
	 }
	cout<<"(9) Kesamaan antara covid-19 dengan sars dan mers adalah? \n\n";

    cout<<"a. sama -sama menyerang organ intim\n";
	cout<<"b. sama-sama menyerang ginjal\n";
	cout<<"c. sama -sama menyerang pernapasan\n";
	cout<<"d. sama -sama menyerang lambung\n";
	cout<<"Jawaban anda : ";

   cin>>pilih;
	if (pilih[2]) {

     b9=10;

    cout<<"Benar\nNilai = "<<b9<<"\n\n\n";

    }
	else{

      b9=-5;

      cout<<"Salah\nNilai = "<<b9<<"\n\n\n";
	 }

    cout<<"(10) Siapakah garda depan yang mengurus orang yang terkena covid-19 ?\n\n";

    cout<<"a. presiden\n";
	cout<<"b. tentara\n";
	cout<<"c. guru\n";
	cout<<"d. dokter,ahli medis\n";
	cout<<"Jawaban : ";

   cin>>pilih;
	 if(pilih[3]){

       b10=10;

      cout<<"Benar\nNilai = "<<b10<<"\n\n\n";

      }

      else {
	b10=-5;

  	 cout<<"Salah\nNilai = "<<b10<<"\n\n\n\n";
	 }


   total_nilai=b1+b2+b3+b4+b5+b6+b7+b8+b9+b10;

   cout<<"Total Nilai Anda= "<<total_nilai;

getch();

}


