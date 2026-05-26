# 💻 C++ Programming Showcase & Data Structures Portfolio

![C++](https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge&logo=c%2B%2B)
![Compiler](https://img.shields.io/badge/Compiler-GCC%2FMinGW-green?style=for-the-badge&logo=gnu)
![Editor](https://img.shields.io/badge/Editor-VS%20Code-007ACC?style=for-the-badge&logo=visual-studio-code)
![Status](https://img.shields.io/badge/Status-Completed-success?style=for-the-badge)

Selamat datang di repositori portofolio pemrograman **C++**! Repositori ini merupakan wadah kurasi program, modul implementasi algoritma, struktur data dinamis, dan berbagai studi kasus pengembangan aplikasi berbasis konsol (*command-line interface*). 

Seluruh kode dirancang dengan fokus pada kebersihan sintaks, modularitas, efisiensi memori, dan penyelesaian masalah secara logis.

---

## 👤 Profil Pengembang

* **Nama:** Ridho Azhari Putra
* **NPM:** 2415061039
* **Fokus Studi:** Teknik Informatika / Sistem Komputer (Kelas D)
* **Kontributor:** Kadek Dwi Octo Lesa Candigo (NPM: 2415061072)

---

## 📂 Struktur Direktori & Kurasi Modul

Repositori ini diatur ke dalam folder-folder tematik sesuai dengan konsep pemrograman C++ yang dipelajari:

```text
.
├── 01_Dasar_Input_Output/       # Dasar-dasar aliran data (I/O) & manajemen memori variabel
├── 02_Percabangan_Kondisional/  # Logika pengambilan keputusan & alur kondisional
├── 03_Perulangan_Iterasi/       # Struktur perulangan & kontrol perulangan kompleks
├── 04_Fungsi_Subprogram/        # Penerapan pemrograman modular & subprogram
├── 05_Array_Matriks/            # Penyimpanan data terindeks linier & multi-dimensi
├── 06_Penanganan_File/          # Operasi pembacaan-penulisan data eksternal (File I/O)
└── [Aplikasi Mandiri di Root]   # Mini projects dan implementasi struktur data lanjut
```

---

## 📖 Rincian Pembahasan Setiap Modul

### 📁 [01_Dasar_Input_Output](file:///c:/RUANGAN%20CODING/PRAKTIKUM%20ALPRO%20C++/01_Dasar_Input_Output)
Modul ini berfokus pada gerbang awal interaksi pengguna dengan program.
* **Topik Utama:** Manipulasi input/output stream standar (`cin`, `cout`), alokasi memori variabel primitif, tipe data, serta evaluasi operator aritmetika dasar.
* **Studi Kasus:** Program konversi, perkenalan nama pengguna secara interaktif, dan penghitungan rumus matematika dasar.

### 📁 [02_Percabangan_Kondisional](file:///c:/RUANGAN%20CODING/PRAKTIKUM%20ALPRO%20C++/02_Percabangan_Kondisional)
Penerapan struktur kontrol untuk membuat program yang cerdas dan mampu mengambil keputusan.
* **Topik Utama:** Pernyataan kondisional (`if`, `else if`, `else`) dan percabangan terstruktur (`switch-case`).
* **Studi Kasus:** Sistem seleksi kelulusan mahasiswa, penentuan kategori bilangan, dan algoritma pemeriksaan plat nomor ganjil-genap.

### 📁 [03_Perulangan_Iterasi](file:///c:/RUANGAN%20CODING/PRAKTIKUM%20ALPRO%20C++/03_Perulangan_Iterasi)
Eksplorasi efisiensi eksekusi instruksi berulang pada memori komputer.
* **Topik Utama:** Struktur kontrol iteratif `for`, `while`, dan `do-while` serta penanganan perulangan bersarang (*nested loops*).
* **Studi Kasus:** Cetak pola deret bilangan dinamis, pengolahan deretan karakter string, dan iterasi perhitungan matematika.

### 📁 [04_Fungsi_Subprogram](file:///c:/RUANGAN%20CODING/PRAKTIKUM%20ALPRO%20C++/04_Fungsi_Subprogram)
Implementasi kode modular agar bersih, mudah dipelihara (*maintainable*), dan dapat digunakan kembali (*reusable*).
* **Topik Utama:** Pembuatan prototipe fungsi, definisi parameter formal, serta metode pengiriman argumen (*pass by value* & *pass by reference*).
* **Studi Kasus:** Modul kalkulator konversi suhu (Fahrenheit ke Celsius) dan pemrograman subprogram modular lainnya.

### 📁 [05_Array_Matriks](file:///c:/RUANGAN%20CODING/PRAKTIKUM%20ALPRO%20C++/05_Array_Matriks)
Penyimpanan dan pengolahan data bertipe homogen secara berkelompok.
* **Topik Utama:** Operasi alokasi Array Satu Dimensi dan Array Multi-Dimensi (Matriks), serta algoritma pencarian linear, penjumlahan total, dan pencarian elemen ekstrem (min/max).
* **Studi Kasus:** Transpose matriks dua dimensi, kalkulasi total elemen matriks, dan manipulasi data array bertipe karakter.

### 📁 [06_Penanganan_File](file:///c:/RUANGAN%20CODING/PRAKTIKUM%20ALPRO%20C++/06_Penanganan_File)
Penanganan integritas dan persistensi data agar tidak hilang saat aplikasi dimatikan.
* **Topik Utama:** Manipulasi berkas eksternal (`.txt`) menggunakan pustaka `<fstream>`, meliputi pembacaan berkas (`ifstream`) dan penulisan berkas (`ofstream`).
* **Studi Kasus:** Perekaman aktivitas harian pengguna, pembacaan database koleksi buku, dan penyimpanan nilai data terstruktur.

---

## 🎮 Aplikasi Mandiri & Projek Portofolio (Root Folder)

Selain modul-modul tematik di atas, repositori ini juga memuat beberapa program mandiri skala menengah yang menggabungkan berbagai konsep lanjutan:

### 🌟 Aplikasi & Permainan Interaktif
* **`Antrian Parkir.cpp`** - Aplikasi simulasi pengelolaan antrean masuk parkir kendaraan menggunakan struktur data **Queue dinamis berbasis Node**. Mendukung penambahan antrean massal hingga 200 kendaraan secara otomatis.
* **`GAME SUIT.cpp`** - Permainan Gunting-Batu-Kertas klasik melawan komputer yang menggunakan *Pseudorandom Number Generator* (`rand()`) berbasis waktu sistem.
* **`TEBAK ANGKA.cpp` & `TEBAKKATA.cpp`** - Permainan logika interaktif berbasis teks untuk mengasah kecerdasan dalam menebak angka tersembunyi atau kata terenkripsi.
* **`labirin teks.cpp`** - Game navigasi petualangan labirin sederhana dalam mode teks konsol.
* **`kalkulator bmi.cpp`** - Alat utilitas kesehatan untuk menghitung indeks massa tubuh (BMI) secara presisi.
* **`STRUK BELANJA.cpp`** - Sistem kasir minimalis yang mencatat transaksi belanjaan dan menghasilkan struk belanja terformat rapi.

### 🧬 Struktur Data Lanjut (Linked List & Pointer)
* **`SINGLE LIST DATA MAHASISWA.cpp`** - Penerapan *Single Linked List* untuk mengelola, menambah, menghapus, dan menampilkan database informasi mahasiswa secara dinamis di memori.
* **`DOUBLE LIST DATA MAHASISWA.cpp`** - Penerapan *Double Linked List* dengan keunggulan penelusuran data dua arah (`next` dan `prev` pointers).
* **`SINGLE DAN DOUBLE LIST.cpp`** - Implementasi komparatif kedua jenis Linked List untuk mendemonstrasikan keunggulan masing-masing arsitektur data.

---

## 🛠️ Spesifikasi Teknologi

* **Bahasa Pemrograman:** C++ (Standar modern C++11 hingga C++17)
* **Kompiler Utama:** GCC / G++ (Minimal versi 5.1 ke atas)
* **Library Standar:** `<iostream>`, `<vector>`, `<string>`, `<fstream>`, `<cstdlib>`, `<ctime>`, `<cmath>`
* **IDE Terkompatibilitas:** Visual Studio Code (dengan ekstensi C/C++ dari Microsoft) atau Dev-C++

---

## 🚀 Panduan Kompilasi & Menjalankan Program

### 📋 Prasyarat
Kompiler C++ terpasang pada terminal Anda. Pastikan versi compiler dapat diperiksa dengan perintah:
```bash
g++ --version
```

### 📥 Kloning Proyek
Unduh salinan repositori ini ke komputer lokal Anda:
```bash
git clone https://github.com/username-anda/nama-repo.git
cd nama-repo
```

### ⚡ Cara Kompilasi Manual (Menggunakan G++)
Buka folder tempat file C++ berada, lalu jalankan perintah kompilasi berikut di terminal:

```bash
# Contoh kompilasi file di dalam modul
cd 05_Array_Matriks
g++ -o transpose "Transpose Matriks.cpp"

# Menjalankan program di Windows
transpose.exe

# Menjalankan program di Linux / macOS
./transpose
```

### 🖥️ Menjalankan Praktis Melalui VS Code
1. Buka folder repositori di VS Code: `File -> Open Folder`.
2. Instal ekstensi **C/C++** (Microsoft) dan ekstensi **Code Runner**.
3. Buka file `.cpp` pilihan Anda (misalnya `01_Dasar_Input_Output/PERCOBAAN 1 JUDUL 1.cpp`).
4. Tekan tombol **Play** di pojok kanan atas, atau gunakan shortcut `Ctrl + Alt + N` untuk menjalankan kode secara otomatis.

---

## 🛡️ Kebersihan Repositori (Git Cleanliness)

Untuk menjaga agar repositori tetap berstandar industri dan bebas dari berkas-berkas sampah hasil kompilasi, proyek ini dilengkapi dengan file **`.gitignore`** yang menyaring secara otomatis:
* Seluruh file eksekusi biner Windows (`*.exe`)
* Berkas objek hasil kompilator (`*.o`, `*.obj`)
* Konfigurasi editor lokal (`.vscode/`)

Hal ini menjamin bahwa hanya kode sumber bersih yang diunggah ke portofolio Anda.
