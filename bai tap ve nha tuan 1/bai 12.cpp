#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Dien tich mot mau dat 
    const double DIEN_TICH_MOT_MAU = 43560.0; 
    
    // Dien tich khu dat can tinh
    const double DIEN_TICH_KHU_DAT = 391876.0;
    
    // Tinh toan so mau dat 
    double so_mau_dat = DIEN_TICH_KHU_DAT / DIEN_TICH_MOT_MAU;
    
    // Hien thi ket qua ra man hinh
    cout << "Dien tich khu dat: " << DIEN_TICH_KHU_DAT;
    cout << "Dien tich 1 mau dat: " << DIEN_TICH_MOT_MAU;
    cout << "So mau dat (acres) la: " << so_mau_dat;
    
    return 0;
}
