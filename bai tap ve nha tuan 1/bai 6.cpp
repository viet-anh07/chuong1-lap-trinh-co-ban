#include <iostream>
#include <iomanip>
using namespace std; 

int main() {
    // Dinh nghia cac bien
    
    // So tien kiem duoc moi ky luong 
    const double THANH_TOAN_MOI_KY = 2200.00;
    
    // So ky luong duoc nhan trong mot nam 
    const int SO_KY_LUONG_TRONG_NAM = 26;
    
    // Tinh toan tong thanh toan hang nam
    double annualPay = THANH_TOAN_MOI_KY * SO_KY_LUONG_TRONG_NAM;
    
    // Hien thi tong annualPay ra man hinh
    cout << "So tien nhan moi ky luong: " << THANH_TOAN_MOI_KY << endl;
    cout << "So ky luong trong nam: " << SO_KY_LUONG_TRONG_NAM << endl;
    cout << "TONG THANH TOAN HANG NAM " << endl;
    
    return 0;
}
