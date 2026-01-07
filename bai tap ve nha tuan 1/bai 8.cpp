#include <iostream>
using namespace std;

int main() {

    
    // Luu gia cua 5 mon do trong nam bien
    const double GIA_MON_1 = 15.59; 
    const double GIA_MON_2 = 24.59; 
    const double GIA_MON_3 = 6.59; 
    const double GIA_MON_4 = 12.59; 
    const double GIA_MON_5 = 3.59;
    
    // Gia su thue ban hang la 7 phan tram
    const double THUE_SUAT = 0.07;
    // 1. Tinh tong tam tinh 
    double tong_tam_tinh = GIA_MON_1 + GIA_MON_2 + GIA_MON_3 + GIA_MON_4 + GIA_MON_5;
    
    // 2. Tinh so tien thue 
    double so_tien_thue = tong_tam_tinh * THUE_SUAT;
    
    // 3. Tinh tong phai tra 
    double tong_phai_tra = tong_tam_tinh + so_tien_thue;
    
    // Hien thi ket qua ra man hinh
    cout << "Gia mon 1: " << GIA_MON_1;
    cout << "Gia mon 2: " << GIA_MON_2;
    cout << "Gia mon 3: " << GIA_MON_3;
    cout << "Gia mon 4: " << GIA_MON_4;
    cout << "Gia mon 5: " << GIA_MON_5;
    cout << "Tong tam tinh " << tong_tam_tinh;
    cout << "So tien thue " << so_tien_thue; 
    cout << "TONG PHAI TRA  " << tong_phai_tra;
    
    return 0;
}
