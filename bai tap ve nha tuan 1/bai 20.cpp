#include <iostream>
using namespace std;

int main() {
    // Du lieu hang rao va hieu suat son
    const double HIEU_SUAT_SON = 340.0;
    const double CHIEU_CAO_HANG_RAO = 6.0;
    const double CHIEU_DAI_HANG_RAO = 100.0;
    const int SO_LOP_SON = 2;
    
    // 1. Tinh dien tich be mat hang rao 
    double dien_tich_hang_rao = CHIEU_CAO_HANG_RAO * CHIEU_DAI_HANG_RAO;
    
    // 2. Tinh tong dien tich can phu 
    double tong_dien_tich_can_phu = dien_tich_hang_rao * SO_LOP_SON;
    
    // 3. Tinh so luong son can thiet 
    double so_gallon_can_thiet = tong_dien_tich_can_phu / HIEU_SUAT_SON;
    
    // 4. Lam tron len de xac dinh so luong can mua
    double so_gallon_toi_thieu = so_gallon_can_thiet;
    
    // Hien thi ket qua
    cout << "Chieu cao hang rao: " << CHIEU_CAO_HANG_RAO << endl;
    cout << "Chieu dai hang rao: " << CHIEU_DAI_HANG_RAO << endl;
    cout << "Tong dien tich can phu (2 lop): " << tong_dien_tich_can_phu << endl;
    cout << "Hieu suat son: " << HIEU_SUAT_SON << endl;  
    cout << "So gallon son can thiet (gia tri thuc): " << so_gallon_can_thiet << endl;
    cout << "So gallon son toi thieu can mua:        " << so_gallon_toi_thieu << endl;
    
    return 0;
}
