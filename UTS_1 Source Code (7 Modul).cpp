#include <stdio.h>
#include <stdlib.h>

void Modul1();
void Modul2();
void Modul3();
void Modul4();
void Modul5();
void Modul6();
void Modul7();
int angka;

int main (){
	printf ("----------------------------------\n");
	printf("		Kelompok 5 		\n");
	printf("1. Regita Afriani 	(21081010088)\n");
	printf("2. Amelia Maslaqun N. 	(21081010096)\n");
	printf("3. Bagas Maulana A. 	(21081010307)\n");
	printf("4. Muhammad Rifky 	(21081010331)\n");
	printf ("----------------------------------\n");
	printf ("   	 Daftar  Modul    \n");
	printf ("----------------------------------\n");
	printf("Modul 1 : Program Konversi Angka ke Bulan\n");
	printf("Modul 2 : Program Segitiga Bintang\n");
	printf("Modul 3 : Program Konversi Nilai \n");
	printf("Modul 4 : Program Menghitung Nilai Max, Min, dan Rata-Rata\n");
	printf("Modul 5 : Program Menghitung Luas Bangun Datar\n");
	printf("Modul 6 : Program Menggabungkan Himpunan A dan Himpunan B\n");
	printf("Modul 7 : Program Penghitungan Bilangan dengan Rumus \n");
	printf ("----------------------------------\n");
	printf ("Masukkan Pilihan Anda : "); 
	scanf ("%i",&angka);
	system ("cls");
	
	if (angka==1) 
		{
			Modul1();	
		}
	else if (angka==2)
		{
			Modul2();
		}
	else if (angka==3)
		{
			Modul3();
		}
	else if (angka==4)
		{
			Modul4();
		}
	else if (angka==5)
		{
			Modul5();
		}
	else if (angka==6)
		{
			Modul6();
		}
	else if (angka==7)
		{
			Modul7();
		}
	return 0;
}


void Modul1()
{
	int bulan;
	printf ("----------------------------------\n");
	printf("Muhammad Rifky (21081010331)\n");
	printf ("----------------------------------\n");
	printf("Program Konversi Angka ke Bulan\n");
	printf ("----------------------------------\n");
	
	printf("Masukkan Angka Bulan Anda : ");
	scanf("%d",&bulan); 
	if (bulan==1)
		{
			printf("Januari");
		}
	else if (bulan==2)
		{
			printf("Februari");
		}
	else if (bulan==3)
		{
			printf("Marer");
		}
	else if (bulan==4)
		{
			printf("April");
		}
	else if (bulan==5)
		{
			printf("Mei");
		}
	else if (bulan==6)
		{
			printf("Juni");
		}
	else if (bulan==7)
		{
			printf("Juli");
		}
	else if (bulan==8)
		{
			printf("Agustus");
		}
	else if (bulan==9)
		{
			printf("September");
		}
	else if (bulan==10)
		{
			printf("Oktober");
		}
	else if (bulan==11)
		{
			printf("November");
		}
	else if (bulan==12)
		{
			printf("Desember");
		}
	else 
		{
			printf("Input Angka Bulan Salah");
		}
}


void Modul2()
{
	int a,b,c;
	printf ("----------------------------------\n");
	printf("Regita Afriani (21081010088)\n");
	printf ("----------------------------------\n");
	printf("Program Segitiga Bintang\n");
	printf ("----------------------------------\n");
	
	printf("Masukkan Nilai : ");
	scanf("%d",&c);
	for (a=1; a<=c; a++){
		for (b=1; b<=a; b++){
			printf("*");
		}
		printf("\n");
	}
}


void Modul3()
{
	int a;
	void nilai();
	printf ("----------------------------------\n");
	printf("Regita Afriani (21081010088)\n");
	printf ("----------------------------------\n");
	printf("Program Konversi Nilai\n");
	printf ("----------------------------------\n");
	
	void nilai(); 
	printf("Masukkan Nilai : ");
	scanf ("%d",&a);
	void nilai();
	
	void nilai();
	if (a>=80)
		printf("A");	
	else if (a>=75)
		printf("A-");
	else if (a>=70)
		printf("B+");
	else if (a>=66)
		printf("B");	
	else if (a>=62)
		printf("B-");	
	else if (a>=58)
		printf("C+");
	else if (a>=55)
		printf("C");
	else if (a>=51)
		printf("C-");		
	else printf("Input Salah"); 
}


void Modul4()
{
	int data [50];
	int bil,b,max,min;
	float jumlah,ave;
	printf ("----------------------------------\n");
	printf("Amelia Maslaqun N. (21081010096)\n");
	printf ("----------------------------------\n");
	printf("Program Menghitung Nilai Max, Min, dan Rata-Rata\n");
	printf ("----------------------------------\n");

	printf("Masukkan Jumlah Bilangan : ");
 	scanf("%d",&bil);

	for(b=1;b<=bil;b++){
	printf("\n Bilangan Ke-%d:",b);
	scanf("%d",&data [b]);
	max=data[1];
	min=data[1];
		if(data[b]>=max){
			max=data[b];
		}
		else if (data[b]<=min){
			min=data[b];
		}
	jumlah += data[b];
  	ave=jumlah/bil;
 	}
	 printf("Nilai Maksimum :%d\n",max);
	 printf("Nilai Minimum :%d\n",min);
	 printf("Nilai Rata-rata : %f\n",ave);
}
	

void Modul5 ()
{
	int pilihan,a,t,s,luasbs;
	float luass;
	printf ("----------------------------------\n");
	printf("Amelia Maslaqun N. (21081010096)\n");
	printf ("----------------------------------\n");
	printf("Program Menghitung Luas Bangun Datar\n");
	printf ("----------------------------------\n");
	
	printf("Pilihan Menu : \n");
	printf("1.Luas Segitiga\n");
	printf("2.Luas Persegi\n");
	printf("Masukkan Pilihan Anda Sesuai dengan Menu yang Ada : \n");
	scanf("%d",&pilihan);
	
	if (pilihan==1){
	printf("Menghitung Luas Segitiga \n");
	printf("Masukkan Alas : ");
	scanf("%d",&a);
	printf("Masukkan Tinggi : ");
	scanf("%d",&t);
	luass=0.5*a*t;
	printf("Luas Segitiga = %f",luass);
}
	else if (pilihan==2){
	printf("Menghitung Luas Persegi \n");
	printf("Masukkan Sisi Persegi : ");
	scanf("%d",&s);
	luasbs=s*s;
	printf("Luas Persegi = %d",luasbs);
}
	else {
	printf("Pilihan Salah !, Silahkan Masukkan Sesuai dengan Pilihan yang Ada di Menu ");
}
}


void Modul6()
{
	int i,j;
	int himpunanA [5]; 	
	int himpunanB [5];	 
	int himpunansemesta [10]; 
	printf ("----------------------------------\n");
	printf("Muhammad Rifky (21081010331)\n");
	printf ("----------------------------------\n");
	printf("Program Menggabungkan Himpunan A dan Himpunan B\n");
	printf ("----------------------------------\n");
	
	for (i=0;i<5;i++)
	{
		printf("Masukkan Bilangan Himpunan A ke %i: ",i+1); 
		scanf("%d",&himpunanA[i]) ; 
	}		printf("\n");

	for (i=0;i<5;i++)
	{
		printf("Masukkan Bilangan Himpunan B ke %i: ",i+1); 
		scanf("%d",&himpunanB[i]) ; 
	}

	j=0 ;
	for (i=0;i<5;i++)
	{
		himpunansemesta[j] = himpunanA[i];
		j++;
	}
	
	for (i=0;i<5;i++)
	{
		himpunansemesta[j] = himpunanB[i];
		j++;
	}
	
	printf("\n");
	printf ("----------------------------------\n");
	printf("Isi Array Himpunan Semesta Adalah : \n");
	printf ("----------------------------------\n");
	for (i=0; i<10; i++) 
	{
		 printf("%4i", himpunansemesta[i]); 
	}
}


void Modul7()
{
	int pil;
	float B,A,N;
	printf ("----------------------------------\n");
	printf("Bagas Maulana A. (21081010307)\n");
	printf ("----------------------------------\n");
	printf("Program Penghitungan Bilangan dengan Rumus\n");
	printf ("----------------------------------\n");
	
	printf ("Program Penghitungan Dengan Rumus\n");
	void rumus(); // Pemanggilan Void 
	
	void rumus();
	printf("Rumus Yang Tersedia : \n");
	printf("1.B = (A + N) / 2\n");
	printf("2.B = A * N\n");
	printf("3.B = (A*A) - N\n");
	printf("Masukkan Nilai A (1 s/d 25)		= "); scanf("%f",&A);
	printf("Masukkan Nilai N (1 s/d 25)		= "); scanf("%f",&N);
	printf("Pilihan Rumus/ Menu (1/2/3)		= "); scanf("%i",&pil);
	switch (pil)
	{
		case 1:
			B = (A + N) / 2;
			printf("Nilai B adalah = %.0f",B);
				break ; 
		case 2: 
			B = A*N;
			printf("Nilai B adalah = %.0f",B);
				break ;
		case 3:
			B = (A * A) - N;
			printf("Nilai B adalah = %.0f",B);
				break ;
		default:
			printf("Pilihan Rumus Salah");
			}
}
