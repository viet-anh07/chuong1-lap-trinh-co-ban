#include <iostream>
#include <iomanip> 

using namespace std; 

int main() {
    // Thiet lap de hien thi 2 chu so thap phan (tien te)
    cout << fixed << setprecision(2);
    
    // Chi phi bua an ban dau
    const double CHI_PHI_BUA_AN = 88.67;
    
    // Ty le thue (6.75%)
    const double TY_LE_THUE = 0.0675;
    
    // Ty le tip (20%)
    const double TY_LE_TIP = 0.20;
    
    // 1. Tinh so tien thue (6.75% chi phi bua an)
    double so_tien_thue = CHI_PHI_BUA_AN * TY_LE_THUE;
    
    // 2. Tinh tong tien sau thue
    double tong_sau_thue = CHI_PHI_BUA_AN + so_tien_thue;
    
    // 3. Tinh so tien tip (20% tong tien sau thue)
    double so_tien_tip = tong_sau_thue * TY_LE_TIP;
    
    // 4. Tinh tong hoa don
    double tong_hoa_don = tong_sau_thue + so_tien_tip;
    
    // Hien thi chi phi bua an, so tien thue, so tien tip, va tong hoa don
    cout << "Chi phi bua an" << CHI_PHI_BUA_AN << endl;
    cout << "So tien thue" << so_tien_thue << endl;
    cout << "So tien tip" << so_tien_tip << endl;
    cout << "------------------------------------------------" << endl;
    cout << "TONG HOA DON" << tong_hoa_don << endl;
    
    return 0;
}
