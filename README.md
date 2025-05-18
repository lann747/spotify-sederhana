# 🎵 Spotify Sederhana

**Spotify Sederhana** adalah aplikasi desktop pemutar musik yang dikembangkan menggunakan **Qt 6 dan C++**. Aplikasi ini dirancang untuk meniru tampilan dan fungsi dasar dari Spotify, memberikan pengalaman mendengarkan musik secara lokal melalui antarmuka yang elegan dan mudah digunakan.

---

## 📦 Fitur Utama

- 🎧 Memutar file musik lokal
- 🎛️ Kontrol play/pause
- 🧾 Playlist sederhana
- 👥 Antarmuka pengguna dan admin
- 🖼️ Tampilan GUI yang didesain dengan Qt Designer
- 📦 Manajemen aset menggunakan Qt Resource (`resources.qrc`)

---

## 🛠️ Teknologi yang Digunakan

- **Qt 6** (GUI Framework)
- **C++**
- **Qt Designer (.ui)**
- **Qt Resource System (.qrc)**

---

## 🚀 Cara Menjalankan Aplikasi

### Prasyarat

- Qt 6 SDK (termasuk Qt Creator dan qmake)
- Compiler C++ (MinGW untuk Windows, GCC/Clang untuk Linux)

### Langkah-langkah

1. **Clone repositori ini**

```bash
git clone https://github.com/lann747/spotify-sederhana.git
cd spotify-sederhana
```

2. Buka proyek di Qt Creator:
-Buka file Spotify.pro menggunakan Qt Creator.

3. Build dan jalankan:
-Klik tombol "Run" di Qt Creator untuk membangun dan menjalankan aplikasi.

4. Login 
-Login menggunakan username: 'admin' & password: '123'

## 🗂️ Struktur Proyek
spotify-sederhana/
├── build/                          # Folder build (dihasilkan oleh Qt Creator)
├── Frame 604.png                   # Cuplikan layar aplikasi
├── Frame 626.png                   # Cuplikan layar aplikasi
├── Frame 644.png                   # Cuplikan layar aplikasi
├── Spotify.pro                     # File proyek Qt
├── Spotify.pro.user                # Konfigurasi pengguna Qt Creator
├── admin.cpp                       # Logika untuk antarmuka admin
├── admin.h
├── admin.ui                        # Desain UI untuk admin
├── home.png                        # Ikon untuk tombol home
├── logo.png                        # Logo aplikasi
├── main.cpp                        # Entry point aplikasi
├── mainwindow.cpp                  # Logika untuk jendela utama
├── mainwindow.h
├── mainwindow.ui                   # Desain UI untuk jendela utama
├── play.png                        # Ikon tombol play
├── playlist.png                    # Ikon playlist
├── playlist2.png                   # Ikon playlist alternatif
├── resources.qrc                   # File resource Qt
├── user.cpp                        # Logika untuk antarmuka pengguna
├── user.h
├── user.ui                         # Desain UI untuk pengguna
└── README.md                       # Dokumentasi proyek

## 📷 Cuplikan Layar
![image1](img/image1)
![image2](img/image2)
![image3](img/image3)

## 👤 Dibuat oleh
Lantera Meunasah (lann747)

