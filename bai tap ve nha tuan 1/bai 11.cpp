#include <iostream>
using namespace std;

int main() {

    // Dung tich binh xang 
    const double DUNG_TICH_BINH_XANG = 20.0; 
    
    // Hieu suat nhien lieu trong thanh pho 
    const double MPG_THANH_PHO = 23.5; 
    
    // Hieu suat nhien lieu tren duong cao toc 
    const double MPG_CAO_TOC = 28.9; 
    
    // 1. Tinh quang duong di duoc trong thanh pho
	double quang_duong_thanh_pho = DUNG_TICH_BINH_XANG * MPG_THANH_PHO;
    
    // 2. Tinh quang duong di duoc tren duong cao toc
	double quang_duong_cao_toc = DUNG_TICH_BINH_XANG * MPG_CAO_TOC;
    
    // Hien thi ket qua
    cout << "Dung tich binh xang: " << DUNG_TICH_BINH_XANG;
    cout << "1. Quang duong trong thanh pho " << quang_duong_thanh_pho;
    cout << "2. Quang duong tren duong cao toc " << quang_duong_cao_toc;
    
    return 0;
}
