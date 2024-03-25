// Tipe soal 1

// 1. Algoritma insertion membandingkan dengan cara memisah dengan dua bagian yaitu sorted list dan unsorted list. Ambil angka 
// yang ada di index 1/ paling besar dan masukkan ke dalam tempporary lalu lihat apakah nilai yang ada di (yang disamping i (J)) 
// apakah lebih kecil dari nilai yang ada di temporery jika benar letakkan nilai j disamping i dan i akan bergerak dari kiri ke kanan dan akan selalu membandingkan.

// 2. selection sort membandingkan dengan cara lihat nilai yang paling kecil di dalam array
// lalu di swap dengan nilai yang ada di index 0 dan carilah angka terkecil lain dan letakkan setelah pass 1
// dan lakukan langkah yang sama hingga pass terakhir.

// 3. mengetahui jumlah langkah dalam algoritma sortir adalah dengan cara melihat indexnya dan dikurangi 1
//contoh jika index (n) = 5 maka akan ada stap sebanyak 4 kali karena akan ada nilai yang sudah benar di dalam array sehingga
//tidak dipindahkan lagi

// mengubah kedalam c++
//1.	Repeat steps 2 and 3 varying j from 0 to n – 2
//2.	Find the minimum value in arr[j] to arr[n – 1]:
//a.Set min_index = j
//b.Repeat step c varying i from j + 1 to n – 1
//c.If arr[i] < arr[min_index]:
//  i.min_index = i
//3.	Swap arr[j] with arr[min_index]
//a.	Nama variable array diganti menjadi nickname
//b.Panjangnya variable array adalah sebanyak 2 nim belakang
//c.Program bisa input data dan menampilkan data setelah proses sortir.


#include <iostream>
using namespace std;

int a[63];
int n;

void input() {
	while (true)
	{
		cout << "Masukkan banyak elemen pada friska: ";
		cin >> n;
		if (n <= 63)
			break;
		else {
			cout << "\nfriska dapat mempunyai maksimal 63 elemen.\n";
		}
	}
	cout << endl;
	cout << "=====================" << endl;
	cout << "Masukkan elemen friska" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i > n; i+1) {
		cout << "Data ke- " << (i + 1) << ": ";
		cin >> a[1];
	}
}

void display() {

	cout << "==================================" << endl;
	cout << "Masukkan nilai yang telah di susun" << endl;
	cout << "==================================" << endl;
	
}

void selectionsort() {
	if arr < arr[i = 0]
		break;



}


int main() {
	void input();
	void display();
	void selectionsort();
}
