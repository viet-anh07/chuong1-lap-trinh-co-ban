#include <iostream>
using namespace std;

int main() {
    // Du lieu dau vao
    const int SO_CO_PHIEU = 750;
    const double GIA_MOI_CO = 35.00;
    const double TY_LE_HOA_HONG = 0.02;
    
    // 1. Tinh so tien thanh toan cho co phieu 
    double chi_phi_co_phieu = SO_CO_PHIEU * GIA_MOI_CO; 
    
    // 2. Tinh so tien hoa hong 
    double so_tien_hoa_hong = chi_phi_co_phieu * TY_LE_HOA_HONG; 
    
    // 3. Tinh tong so tien da thanh toan
    double tong_thanh_toan = chi_phi_co_phieu + so_tien_hoa_hong; 
    
    // Hien thi ket qua ra man hinh
    cout << "So co phieu da mua: " << SO_CO_PHIEU;
    cout << "Gia moi co phieu: " << GIA_MOI_CO;
    cout << "Ty le hoa hong: " << (TY_LE_HOA_HONG * 100);
    cout << "1. So tien thanh toan cho co phieu: " << chi_phi_co_phieu;
    cout << "2. So tien hoa hong: " << so_tien_hoa_hong;
    cout << "3. Tong so tien da thanh toan: " << tong_thanh_toan;

    return 0;
}
