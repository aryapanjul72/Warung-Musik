#include <iostream>;
using namespace std;



void harga(); //Fungsi untuk menampilkan harga barang
void menu();  //Fungsi untuk menampilkan daftar barang
void separator(); //Fungsi untuk menampilkan "============================"

int main(){ //program utama

	
	int gitar, biola, piano, keyboard, drum, pilih, jumlah, total, uang; // kumpulan variabel
	char memilih; //Variabel untuk mengisi inputan dari "(Y/N)"
    string beli;  //variabel untuk mengisi inputan dari "Ingin beli apa?"
    
	gitar = 12000;
	biola = 10000;
	piano = 20000;
	keyboard = 10000;
	drum = 5000;

	cout << "Selamat datang di warung Rock n Roll" << endl;
	cout << "Ada perlu apa gan? :" << endl  << endl;
	
	cout << "1. List barang" << endl;
	cout << "2. Harga barang" << endl;
	cout << "3. Beli barang" << endl;
	cout << "4. Keluar"  << endl << endl;
	cout << "Pilihan : ";
	cin >> pilih;


switch (pilih){
	case 1:
		menu();
		separator();
		main();
		break;
	case 2:
		harga();
		separator();
		main();
		break;
	case 3:
		cout << "Ingin beli apa?: ";
		cin >> beli;
		if (beli == "gitar"){
			cout << "Harga Gitar adalah: "<< gitar << endl;
			cout << "Berapa jumlah yang ingin dibeli?: ";
			cin >> jumlah;
			total = gitar * jumlah;
			cout << "Total yang harus dibayar adalah: "<< total <<endl << endl;
			cout << "Apakah jadi membli? (Y/N): ";
			cin >> memilih;
			    if (memilih == 'y'){
			    	cout << "Terimakasih sudah berbelanja di warung Rock N Roll!!" << endl << endl;
			    	separator();
			    	system ("pause");
			    	system ("cls");
			    	main();
			    	
				}else{
					main();
				}
				
			
		}else if (beli == "biola"){
			cout << "Harga Biola adalah: "<< biola <<endl;
			cout << "Berapa jumlah yang ingin dibeli?: ";
			cin >> jumlah;
			total = biola * jumlah;
			cout << "Total yang harus dibayar adalah: "<< total <<endl << endl;
			cout << "Apakah jadi membli? (Y/N): ";
			cin >> memilih;
			    if (memilih == 'y'){
			    	cout << "Terimakasih sudah berbelanja di warung Rock N Roll!!" << endl << endl;
			    	separator();
			    	system ("pause");
			    	system ("cls");
			    	main();
				}else{
					main();
				}
				
		}else if (beli == "piano"){
			cout << "Harga Pinao adalah: " << piano << endl;
			cout << "Berapa jumlah yang ingin dibeli?: ";
			cin >> jumlah;
			total = piano * jumlah;
			cout << "Total yang harus dibayar adalah: "<< total <<endl << endl;
			cout << "Apakah jadi membli? (Y/N): ";
			cin >> memilih;
			    if (memilih == 'y'){
			    	cout << "Terimakasih sudah berbelanja di warung Rock N Roll!!" << endl << endl;
			    	separator();
			    	system ("pause");
			    	system ("cls");
			    	main();
				}else{
					main();
				}
				
	    }else if (beli == "keyboard"){
			cout << "Harga Keyboard adalah: "<< keyboard << endl;
			cout << "Berapa jumlah yang ingin dibeli?: ";
			cin >> jumlah;
			total = keyboard * jumlah;
			cout << "Total yang harus dibayar adalah: "<< total <<endl << endl;
			cout << "Apakah jadi membli? (Y/N): ";
			cin >> memilih;
			    if (memilih == 'y'){
			        cout << "Terimakasih sudah berbelanja di warung Rock N Roll!!" << endl << endl;
			    	separator();
			    	system ("pause");
			    	system ("cls");
			    	main();
				}else{
					main();
				}
				
	    }else if (beli == "drum"){
			cout << "Harga Drum adalah: " << drum << endl;
			cout << "Berapa jumlah yang ingin dibeli?: ";
			cin >> jumlah;
			total = drum * jumlah;
			cout << "Total yang harus dibayar adalah: "<< total <<endl << endl;
			cout << "Apakah jadi membli? (Y/N): ";
			cin >> memilih;
			    if (memilih == 'y'){
			    	cout << "Terimakasih sudah berbelanja di warung Rock N Roll!!" << endl << endl;
			    	separator();
			    	system ("pause");
			    	system ("cls");
			    	main();
				}else{
					main();
				}
				
		}else{
			cout << "Tidak terdaftar";
		}
		break;
	case 4:
		cout << "Terimakasih sudah mampir! ";
		}
}

void menu(){
	
	cout << " 1. gitar 100 pcs" << endl;	
	cout << " 2. biola 100 pcs" << endl;
	cout << " 3. piano 100 pcs" << endl;
	cout << " 4. keyboard 100 pcs" << endl;
	cout << " 5. drum 100 pcs" << endl;

}

void harga(){
    cout << "gitar = 12000" << endl;
	cout << "biola = 10000" << endl;
	cout << "piano = 20000" << endl;
	cout << "keyboard = 10000" << endl;
	cout << "drum = 5000" << endl;

}

void separator(){
	cout << "=======================================" << endl << endl;
}