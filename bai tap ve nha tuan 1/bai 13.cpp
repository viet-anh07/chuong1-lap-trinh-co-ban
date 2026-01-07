#include <iostream>
using namespace std;

int main() {
    // Chi phi cua bo mach 
    const double CHI_PHI_BO_MACH = 14.95; 
    
    // Ty le loi nhuan 
    const double TY_LE_LOI_NHUAN = 0.35; 
    
    // 1. Tinh so tien loi nhuan 
    double so_tien_loi_nhuan = CHI_PHI_BO_MACH * TY_LE_LOI_NHUAN;
    
    // 2. Tinh gia ban 
    double gia_ban = CHI_PHI_BO_MACH + so_tien_loi_nhuan;
    
    // Hien thi ket qua
    cout << "Chi phi san xuat bo mach:   " << CHI_PHI_BO_MACH;
    cout << "Ty le loi nhuan mong muon: " << (TY_LE_LOI_NHUAN * 100);
    cout << "So tien loi nhuan:   " << so_tien_loi_nhuan;
    cout << "GIA BAN CUA BO MACH:  " << gia_ban;
    
    return 0;
}
