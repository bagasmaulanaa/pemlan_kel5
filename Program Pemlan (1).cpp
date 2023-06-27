#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
main ()
{
	int bil, pil, opsi, no;
	char ulang;
  	do
  	{
		printf("\nSELAMAT DATANG DI KALKULATOR MATEMATIKA SEDERHANA\n");
		printf("\n+-------------------------+\n");
	  	printf("\n| 1.Materi Kelas VII	 |\n");
	 	printf("\n| 2.Materi Kelas VIII	 |\n");
	  	printf("\n| 3.Materi Kelas IX	 |\n");
	  	printf("\n+-------------------------+\n");
	  	printf("Masukan Kelas Anda: ");
	  	scanf("%d" , &bil);
	  	
	  	if (bil == 1) {
		  	printf("\n-----------------------\n");
		  	printf("Materi Kelas VII");
		  	printf("\n-----------------------\n");
		  	printf("1. Bilangan Bulat dan Pecahan\n");
		  	printf("2. Aritmatika Sosial\n");
		  	printf("3. Segitiga\n");
			printf("4. Trapesium\n");
		 	printf("5. Menghitung Rata-Rata\n");
		  	printf("Materi yang dipilih: ");
		  	scanf("%d" , &pil);
	  		
			if (pil == 1) {
				int a;
				float angka;
				printf("=====================================\n");
		  		printf("Menentukan bilangan bulat dan pecahan\n");
				printf("=====================================\n");
		  		printf("Masukkan bilangan: ");
		  		scanf("%f", &angka);
		  		a=angka;
		  		if (angka == a) {
		  		 printf("Bilangan bulat");
				}
				else {
					printf("Bilangan Pecahan");
					   }
		  	}
				
			else if (pil == 2){
				int modal, hasil, laba, rugi;
				printf("================================\n");
				printf("Program Menghitung Laba dan Rugi\n");
				printf("================================\n");
				printf("Masukkan Modal : Rp ");
				scanf("%d",&modal);
				printf("Masukkan Pendapatan : Rp ");
				scanf("%d",&hasil);
	
				if (hasil > modal){
			 	laba = hasil-modal;
			 	printf("Mendapatkan laba sebesar = Rp %d", laba);
				}
				else if (hasil < modal){
			  	rugi = hasil-modal;
			  	printf("Mendapatkan rugi sebesar = Rp %d", rugi);
				}
				else{
			  	printf("Tidak ada laba dan rugi yang diperoleh");
				}
			}
		
			else if (pil == 3) {
				int alas,tinggi,sisi1,sisi2,sisi3,luasss,kelilingss;
				printf("===========================================\n");
				printf("Menghitung Keliling dan Luas Segitiga\n");
				printf("===========================================\n");
				printf("Masukkan Alas :");
				scanf("%d", &alas);
				printf("Masukkan Tinggi :");
				scanf("%d", &tinggi);
				printf("Sisi 1 :");
				scanf("%d", &sisi1);
				printf("Sisi 2 :");
				scanf("%d", &sisi2);
				printf("Sisi 3 :");
				scanf("%d", &sisi3);
				luasss=(alas*tinggi)/2;
				kelilingss=sisi1+sisi2+sisi3;
				printf("Luas Segitiga =%d \n", luasss);
				printf("Keliling Segitiga =%d ", kelilingss);
			}
		
			else if (pil == 4){
				int st,tt,s1,s2,s3,s4,kelilingt;
				float luast;
				printf("==============================\n");
				printf("Menghitung Bangun Datar Trapesium \n");
				printf("==============================\n");
				printf("1. Luas Trapesium\n");
				printf("Masukkan Jumlah Sisi Sejajar : ");
				scanf("%d",&st);
				printf("Masukkan Tinggi : ");
				scanf("%d",&tt);
				luast=0.5*st*tt;
				printf("Luas Trapesium = %f",luast);
				printf(" cm");
				printf("\n");
			    
				printf("\n");
				printf("2. Keliling Trapesium \n");
				printf("Masukkan panjang Sisi 1 : ");
				scanf("%d",&s1);
				printf("Masukkan panjang Sisi 2 : ");
				scanf("%d",&s2);
				printf("Masukkan panjang Sisi 3 : ");
				scanf("%d",&s3);
				printf("Masukkan panjang Sisi 4 : ");
				scanf("%d",&s4);
				kelilingt=s1+s2+s3+s4;
				printf("Keliling Trapesium = %d",kelilingt);
				printf(" cm");
			}
			
	        else if (pil == 5){
	        	int i, banyak, data[20];
				float average, jumlah;
				printf("=====================================\n");
				printf("Menghitung Nilai Rata-rata\n");
		  		printf("=====================================\n");
		  		printf("Masukkan banyak data yang akan dihitung: ");
		 		scanf("%d", &banyak);
		  		for (i = 0; i < banyak; i++) {
		   		printf("Data ke-%d : ", i+1);
		   		scanf("%d", &data[i]);
		    		jumlah += data[i];
		 	 	}
		  
			  	average = jumlah / banyak;
			  	printf("------------------------------------\n");
			  	printf("Jumlah dari data adalah %.0f\n", jumlah);
			  	printf("Rata-rata yang didapatkan yaitu %.2f\n\n\n", average);
			}
		}
		
		
		else if (bil == 2){
			printf("\n-----------------------\n");
		  	printf("Materi Kelas VIII");
		  	printf("\n-----------------------\n");
		  	printf("1. Deret Aritmatika dan Geometri\n");
		  	printf("2. Koordinat Kartesius\n");
		  	printf("3. Persamaan Garis Lurus\n");
		  	printf("4. Lingkaran\n");
		  	printf("5. Bangun Ruang Kubus\n");
		  	printf("Materi yang dipilih: ");
		  	scanf("%d" , &opsi);
	  	
			  
			if (opsi == 1){
				int aw, be, n,to, a;
				float awal,r,rn,sn,s;
				float i;
				printf("==============================================\n");
				printf("Program Mencari Deret Aritmatika dan Geometri\n");
				printf("==============================================\n");
				printf("\n");
				
				printf("Mencari Deret Aritmatika\n");
				printf("Rumus => Un = a+(n-1)b \n");
				printf("\n");
				printf("Masukan nilai a (nilai awal): ");
				scanf("%d", &aw);
				to=aw;
				printf("Masukan nilai b (nilai pembeda): ");
				scanf("%d", &be);
				printf("Masukan nilai n (suku ke-n) (n disini sudah dikurangi 1 (n-1)): ");
				scanf("%d", &n);
				for(int i=0;i<n;i++){
					aw=aw+be;	
					to= to+aw; 
				}
				printf("Nilai Un yang dicari adalah = %d\n", aw);
				printf("\n");
				
				printf("Mencari Jumlah Deret Geometri\n");
				printf("Rumus => Deret Turun : Sn = a(1-r^n)/(1-r), dengan r<1 \n");
				printf("Rumus => Deret Naik : Sn = a(r^n-1)/(r-1), dengan r>1 \n");
				printf("\n");
				printf("Masukan nilai a (nilai awal): ");
				scanf("%f", &awal);
				printf("Masukan nilai r (nilai rasio): ");
				scanf("%f", &r);
				printf("Masukan nilai n (suku ke-n): ");
				scanf("%d", &n);
				s=a;
				for(rn=r;i<n;i++)
				{
					rn*=r;
					s=s*r;	
				}
				if (r>1)
					sn=(awal*(rn-1))/(r-1);
				else
					sn=(awal*(1-rn))/(1-r);
		
				printf("Jumlah deret %d suku =%f\n",n,sn);
			}
		
			else if(opsi == 2) {
				float x, y;
				printf("===========================================================\n");
				printf("Menentukan Posisi Suatu Titik Pada Koordinat Cartesius\n");
				printf("===========================================================\n");
				printf("Masukkan Nilai x: ");
				scanf("%f",&x);
				printf("Masukkan Nilai y:");
				scanf("%f",&y);
				printf("Poisi Titik Berada di ");
				if(x >= 0 && y >= 0) {
				printf("Kuadran 1");
				}
				if(x < 0 && y >= 0) {
				printf("Kuadran 2");
				}
				if(x < 0 && y < 0) {
				printf("Kuadran 3");
				}
				else if(x >= 0 && y < 0) {
				printf("Kuadran 4");
				}
			}
		
			else if(opsi == 3){
				int m, c, v, z;
				printf("========================================\n");
				printf("Program Menghitung Persamaan Garis Lurus\n");
				printf("========================================\n");
				printf("Perhitungan ini menggunakan rumus y=m*x+c\n");
				printf("Masukkan Nilai m:");
		 		scanf("%d", &m);
		 		printf("Masukkan Nilai c:");
		 		scanf("%d", &c);
		 		printf("Masukkan Nilai x:");
		 		scanf("%d", &v);
		
		 		printf("Nilai y untuk x=%d pada persamaan y = %dx + %d adalah %d", v, m, c, z);
		 		return 0;
			}
				
		
			else if(opsi == 4){
				float rk,kk,rl,kl;
				float phi = 3.14;
				printf("==============================================\n");
				printf("Program Mencari Keliling dan Luas Lingkaran\n");
				printf("==============================================\n");
				printf("\n");
				
				printf("Mencari Keliling Lingkaran\n");
				printf("Masukkan r (jari-jari lingkaran): ");
				scanf("%f",&rk);
				kk = 2*phi*rk;
				printf("Keliling Lingkaran = %.2f\n",kk);
				printf("\n");
				
				printf("Mencari Luas Lingkaran\n");
				printf("Masukkan r (jari-jari lingkaran): ");
				scanf("%f",&rl);
				kl = phi*rl*rl;
				printf("Luas Lingkaran = %.2f\n",kl);
			}
			
			else if(opsi == 5){
				float sisikbs, volume;
				printf("========================================\n");
				printf("Program Menghitung Volume Kubus\n");
		  		printf("========================================\n");
		 		printf("Masukkan nilai dari ketiga sisi kubus : ");
		 		scanf("%f", &sisikbs);
		  		volume = sisikbs * sisikbs * sisikbs;
		  		printf("---------------------------------------\n");
		  		printf("Volume kubus adalah %.2f", volume);
		  		printf("\n\n\n");
			}
	    }
			
			
		else if (bil == 3) {
		  	printf("\n-----------------------\n");
		  	printf("Materi Kelas IX");
		  	printf("\n-----------------------\n");
		  	printf("1. Theorma Phytagoras\n");
		  	printf("2. Statistika (Mean, Modus, Median)\n");
		  	printf("3. Persamaan dan Fungsi Akar Kuadrat\n");
		  	printf("Materi yang dipilih: ");
		  	scanf("%d" , &no);
	  	
	  		if(no == 1) {
				int menu;
	  			float a1,b1,c1;
	  			printf("============================\n");
	  			printf("Theorema Phytagoras\n");
	  			printf("============================\n");
	  			while(1) {
				printf("------- Pilih sisi yang anda ingin cari di Pythagoras -------\n");
			    printf("1. Sisi miring (c) \n");
			    printf("2. Sisi alas (a) \n");
			    printf("3. Sisi tegak (b) \n");
			    printf("4. Exit \n");
			    printf("------------------------------\n");
			
			    printf("Pilih nomor menu: ");
			    scanf("%d",&menu);
			    fflush(stdin);
			
			    if(menu == 1){
			      printf("Input nilai a: ");
			      scanf("%f", &a1);
			      printf("Input nilai b: ");
			      scanf("%f", &b1);
			      c1=sqrt((a1*a1)+(b1*b1));
			      printf("Sisi miringnya adalah %.2f\n", c1);
			    } else if (menu == 2){
			      printf("Input nilai b: ");
			      scanf("%f",&b1);
			      printf("Input nilai c: ");
			      scanf("%f",&c1);
			      a1=sqrt((c1*c1)-(b1*b1));
			      printf("Sisi alasnya adalah %.2f\n",a1);
			    } else if (menu == 3){
			      printf("Input nilai a: ");
			      scanf("%f", &a1);
			      printf("Input nilai c: ");
			      scanf("%f", &c1);
			      b1=sqrt((c1*c1)-(a1*a1));
			      printf("Sisi tegaknya adalah %.2f\n",b1);
			    } else if(menu == 4){
			      exit(0);
			    } else {
			      printf("Menu yang anda input salah");
			    }
			  }
			  return 0;
			}
	  	
	  		else if (no == 2){
	  			int n,a,b,temp=0,q1,q2;
			    float median;
			    printf("=================================\n");
	  			printf("Statistika (Mean, Modus, Median)\n");
	  			printf("=================================\n");
			    //input jumlah data
			    printf("imput jumlah data: "); scanf("%d",&n);fflush(stdin);
			    //input data
			    int data[n],frekuensi[n],modus,max=-1000,sum=0;
			    float mean;
	     
				for(a=0;a<n;a++){
	            printf("masukkan nilai data ke-%d <0..9>: ",a+1);scanf("%d",&data[a]);
	            sum=sum+data[a];
	       		 }
	                    
	    		printf("\n\n");
	   
	     		//median atau nilai tengah dari suatu data
	    		for(a=0;a<(n-1);a++){
	    	       for(b=a;b<n;b++){
	                	if(data[b]<data[a]){
	                        temp=data[a];
	                        data[a]=data[b];
	                        data[b]=temp; };                   
	                    };
	                    }
			    printf("\ndata di urutkan: ");
			    for(a=0;a<n;a++){
			        printf("%d,",data[a]);}
			    if(n%2==1){q2=(n/2);
	                median=data[q2];
	                printf("median/nilai tengah adalah: %.2f",median);}
	   			else if(n%2==0){q1=(n/2)-1; q2=(n/2);
	                median=((float)data[q1]+(float)data[q2])/2;
	                printf("\nmedian adalah: %.2f",median);}
	   			printf("\n");
	   
	    		 //rata-rata bilangan atau average
			    mean=(float)sum/n;
			    printf("mean adalah: %.2f\n",mean);
			    //mencari modus atau data yang sering muncul
			    for(a=0;a<10;a++){frekuensi[a]=0;
	                for(b=0;b<n;b++){
	                if(data[b]==a){frekuensi[a]=frekuensi[a]+1;};
	    			}
	                if(frekuensi[a]>max) {max=frekuensi[a];modus=a;}
	                };         
			    printf("modus adalah: %d\n\n",modus);	    
			    system("pause");
			    return 0;
		  }
	
		  
			else if(no==3){
		  		float a,b,c,D,x,x1,x2;
		  		 printf("========================================\n");
	  			printf("Program Mencari Akar Persamaan Kuadrat \n");
	  			printf("========================================\n");
				printf("--- Bentuk Persamaan ax^2 + bx + c = 0 ----- \n");
				printf(" Masukan Nilai Koefisien a = ");scanf("%f",&a);
				if (a == 0) 
				    printf ("Bukan Pers. Kuadrat.\n");
				printf(" Masukan Nilai Koefisien b = ");scanf("%f",&b);		
				printf(" Masukan Nilai Koefisien c = ");scanf("%f",&c);
				printf("-------------------------------------------- \n");
	
				D = (b*b)-(4*a*c);
				printf(" Diskriminan = %2.2f\n",D);
				printf("		Hasilnya adalah	 \n");
				if (D>0)
				        {x1=((-b+sqrt(D))/(2*a));
				            printf(" x1 = %2.2f\n",x1);
				         x2=((-b-sqrt(D))/(2*a));
				        	printf(" x2 = %2.2f\n",x2);}
				else if(D==0)
				        {x= -b/(2*a);
				            printf(" x1 = x2 = %2.2f\n",x);}
				else if(D<0)
				        {x1=((-b/2*a)+ ((sqrt(-D))/2*a));
				            printf(" x1 = %2.2f\n",x1);
				         x2=((-b/2*a)-((sqrt(-D) )/2*a));
				            printf(" x2 = %2.2f\n",x2);
				            printf(" 	Adalah Bilangan Imajiner	 \n");}
				printf("--------------------------------------------\n");
				getch ();
		  	}
		}
		else {
			printf("Pilihan Tidak Ada !");
		}
	printf("\n");
    printf("Ingin Menghitung Lagi (y/n)? ");
    scanf(" %c",&ulang);
    printf("\n");
}
  while (ulang!= 'n');
  printf("Bye-Bye \n");
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

  int menu;
  float a,b,c;

  while(1) {

    printf("------- Pilih sisi yang anda ingin cari di Pythagoras -------\n");
    printf("1. Sisi miring (c) \n");
    printf("2. Sisi alas (a) \n");
    printf("3. Sisi tegak (b) \n");
    printf("4. Exit \n");
    printf("------------------------------\n");

    printf("Pilih nomor menu: ");
    scanf("%d",&menu);
    fflush(stdin);

    if(menu == 1){
      printf("Input nilai a: ");
      scanf("%f", &a);
      printf("Input nilai b: ");
      scanf("%f", &b);
      c=sqrt((a*a)+(b*b));
      printf("Sisi miringnya adalah %.2f\n", c);
    } else if (menu == 2){
      printf("Input nilai b: ");
      scanf("%f",&b);
      printf("Input nilai c: ");
      scanf("%f",&c);
      a=sqrt((c*c)-(b*b));
      printf("Sisi alasnya adalah %.2f\n",a);
    } else if (menu == 3){
      printf("Input nilai a: ");
      scanf("%f", &a);
      printf("Input nilai c: ");
      scanf("%f", &c);
      b=sqrt((c*c)-(a*a));
      printf("Sisi tegaknya adalah %.2f\n",b);
    } else if(menu == 4){
      exit(0);
    } else {
      printf("Menu yang anda input salah");
    }
  }
  return 0;
}

int main () {
    int n,a,b,temp=0,q1,q2;
    float median;
    printf("\t\t\tPROGRAM STATISTIKA\n\n");
    //input jumlah data
    printf("imput jumlah data: "); scanf("%d",&n);fflush(stdin);
    //input data
    int data[n],frekuensi[n],modus,max=-1000,sum=0;
    float mean;
   
    for(a=0;a<n;a++){
                     printf("masukkan nilai data ke-%d <0..9>: ",a+1);scanf("%d",&data[a]);
                     sum=sum+data[a];
                     }
                    
    printf("\n\n");
   
     //median atau nilai tengah dari suatu data
    for(a=0;a<(n-1);a++){
                         for(b=a;b<n;b++){
                         if(data[b]<data[a]){
                                               temp=data[a];
                                               data[a]=data[b];
                                               data[b]=temp; };                   
                                               };
                                               }
    printf("\ndata di urutkan: ");
    for(a=0;a<n;a++){
                     printf("%d,",data[a]);}
    if(n%2==1){q2=(n/2);
                        median=data[q2];
                        printf("median/nilai tengah adalah: %.2f",median);}
    else if(n%2==0){q1=(n/2)-1; q2=(n/2);
                    median=((float)data[q1]+(float)data[q2])/2;
                    printf("\nmedian adalah: %.2f",median);}
   
    printf("\n");
   
    
    //rata-rata bilangan atau average
    mean=(float)sum/n;
    printf("mean adalah: %.2f\n",mean);
    //mencari modus atau data yang sering muncul
    for(a=0;a<10;a++){frekuensi[a]=0;
                      for(b=0;b<n;b++){
                                       if(data[b]==a){frekuensi[a]=frekuensi[a]+1;};
                                       }
                      if(frekuensi[a]>max) {max=frekuensi[a];modus=a;}
                      };
                      
    printf("modus adalah: %d\n\n",modus);
    
    system("pause");
    return 0;
}
