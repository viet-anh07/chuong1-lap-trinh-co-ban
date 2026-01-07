#include <iostream>
#include <iomanip>
using namespace std; 

int main() {
    // Luu tru 5 gia tri trong cac bien kieu double theo goi y 
    double gia_tri_1 = 28.0;
    double gia_tri_2 = 32.0;
    double gia_tri_3 = 37.0;
    double gia_tri_4 = 24.0;
    double gia_tri_5 = 33.0;
    
    // So luong gia tri dem duoc 
    const int SO_LUONG_GIA_TRI = 5;
    
    // Tinh tong cua nam bien va luu vao bien 'sum' 
    double sum = gia_tri_1 + gia_tri_2 + gia_tri_3 + gia_tri_4 + gia_tri_5;
    
    // Lay bien 'sum' chia cho 5 de lay duoc gia tri trung binh 
    double gia_tri_trung_binh = sum / SO_LUONG_GIA_TRI;
    
    // Hien thi gia tri trung binh ra man hinh 
    cout << "Cac gia tri da nhap: " << gia_tri_1 << ", " << gia_tri_2 << ", " 
         << gia_tri_3 << ", " << gia_tri_4 << ", " << gia_tri_5 << endl;
    cout << "Tong cac gia tri: " << endl;
    cout << gia_tri_trung_binh << endl;
    
    return 0;
}
