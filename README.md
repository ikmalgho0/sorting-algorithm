# Sorting Algorithm
 
Kumpulan implementasi algoritma pengurutan (*sorting algorithm*) dasar menggunakan bahasa **C++**. Repositori ini dibuat untuk keperluan belajar dan memahami cara kerja masing-masing algoritma secara langsung lewat kode.
 
## Daftar Algoritma
 
| File | Algoritma | Ide Singkat |
|------|-----------|-------------|
| `bubblesort.cpp` | Bubble Sort | Membandingkan dua elemen bersebelahan dan menukarnya jika urutannya salah, diulang hingga seluruh data terurut. |
| `insertionsort.cpp` | Insertion Sort | Mengambil satu elemen lalu menyisipkannya ke posisi yang tepat pada bagian data yang sudah terurut. |
| `selectionsort.cpp` | Selection Sort | Mencari elemen terkecil dari bagian yang belum terurut, lalu menempatkannya di posisi paling depan. |
 
## Kompleksitas
 
| Algoritma | Terbaik | Rata-rata | Terburuk | Memori | Stabil |
|-----------|---------|-----------|----------|--------|--------|
| Bubble Sort | O(n) | O(n²) | O(n²) | O(1) | Ya |
| Insertion Sort | O(n) | O(n²) | O(n²) | O(1) | Ya |
| Selection Sort | O(n²) | O(n²) | O(n²) | O(1) | Tidak |
 
> Catatan: kompleksitas terbaik O(n) pada Bubble Sort bergantung pada penggunaan optimasi *early exit* (berhenti jika tidak ada pertukaran dalam satu putaran).
 
## Prasyarat
 
- Compiler C++ seperti [g++](https://gcc.gnu.org/) (GCC) atau Clang
- Git (opsional, untuk meng-clone repositori)
## Cara Menjalankan
 
1. Clone repositori ini:
```bash
git clone https://github.com/ikmalgho0/sorting-algorithm.git
cd sorting-algorithm
```
 
2. Compile file yang ingin dijalankan, contohnya Bubble Sort:
```bash
g++ bubblesort.cpp -o bubblesort
```
 
3. Jalankan programnya:
```bash
# Linux / macOS
./bubblesort
 
# Windows
bubblesort.exe
```
 
Lakukan langkah yang sama untuk `insertionsort.cpp` dan `selectionsort.cpp`.
 
## Struktur Repositori
 
```
sorting-algorithm/
├── .gitignore
├── bubblesort.cpp
├── insertionsort.cpp
└── selectionsort.cpp
```
 
## Rencana Pengembangan
 
- [ ] Menambahkan Merge Sort
- [ ] Menambahkan Quick Sort
- [ ] Menambahkan Heap Sort
- [ ] Membandingkan waktu eksekusi antar algoritma
## Kontribusi
 
Saran dan perbaikan sangat diterima. Silakan buka *issue* atau kirim *pull request*.
 
## Penulis
 
Dibuat oleh [@ikmalgho0](https://github.com/ikmalgho0).
 