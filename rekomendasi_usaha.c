//daftar threshold
#define kulinerRingan 500
#define kulinerBerat 1000
#define tokoSembako 1500
#define Jasa 2500
#define tokoPakaian 4000
#define tokoElektronik 7500

//maksimal karakter nama wilayah
#define max 100

//kategori usaha nya
typedef union {
    int kuliner_ringan;
    int kuliner_berat;
    int toko_sembako;
    int jasa;
    int toko_pakaian;
    int toko_elektronik;

}kategoriUsaha;

//pembagian populasi wilayahnya
typedef struct {
    int tiga_RT;    // 1 RT + 2 RT terdekat
    int RW;
    int dua_RW;     // 1 RW + 1 RW terdekat
    int Kelurahan;

}Populasi;

//setiap mau buka suatu "usaha" dalam suatu "wilayah" akan ada
typedef struct {
    namaUsaha[max];
    kategoriUsaha banyakUsaha;
    Populasi populasi;

}Wilayah;