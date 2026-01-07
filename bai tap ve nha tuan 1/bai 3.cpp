#include <iostream>
#include <iomanip> // De dinh dang hien thi so thap phan
using namespace std;
int main() {
    // Thiet lap de hien thi 2 chu so thap phan 
    std::cout << std::fixed << std::setprecision(2);

    // Gia gio hang 
    double gia_gio_hang = 95.00;
    
    // Thue ban hang cua tieu bang 
    const double THUE_TIEU_BANG = 0.04; 
    
    // Thue ban hang cua quan  
    const double THUE_QUAN = 0.02;
    
    // Tong thue suat 
    const double TONG_THUE_SUAT = THUE_TIEU_BANG + THUE_QUAN; 
    
    // 1. Tinh so tien thue tieu bang
    double so_tien_thue_tieu_bang = gia_gio_hang * THUE_TIEU_BANG;
    
    // 2. Tinh so tien thue quan
    double so_tien_thue_quan = gia_gio_hang * THUE_QUAN;
    
    // 3. Tinh tong so tien thue ban hang 
    double tong_thue = so_tien_thue_tieu_bang + so_tien_thue_quan; 
    
    // 4. Tinh tong phai tra
    double tong_phai_tra = gia_gio_hang + tong_thue;

    // Hien thi ket qua
    cout << gia_gio_hang << std::endl;
    cout << so_tien_thue_tieu_bang << std::endl;
    cout << so_tien_thue_quan << std::endl;
    cout << std::endl;
    cout << tong_thue << std::endl;
    cout << tong_phai_tra << std::endl;
    
    return 0;
}
