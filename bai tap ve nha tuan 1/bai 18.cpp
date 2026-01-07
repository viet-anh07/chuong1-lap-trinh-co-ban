#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Du lieu dau vao
    const int TONG_SO_KHACH_HANG = 16500;      
    const double TY_LE_MUA_NUOC_TANG_LUC = 0.15; 
    const double TY_LE_THICH_VI_CAM = 0.58;  
    
    // 1. Tinh so luong khach hang gan dung mua nuoc tang luc
    double so_khach_mua = TONG_SO_KHACH_HANG * TY_LE_MUA_NUOC_TANG_LUC;
    
    // 2. Tinh so luong khach hang gan dung thich nuoc tang luc vi cam 
    double so_khach_thich_cam = so_khach_mua * TY_LE_THICH_VI_CAM;
    
    // Hien thi ket qua 
    cout << "Tong so khach hang khao sat: " << TONG_SO_KHACH_HANG;  
    // Ket qua 1: So luong khach mua nuoc tang luc
    cout << "1. So luong khach hang mua nuoc tang luc: " << endl;
    // Ket qua 2: So luong khach thich vi cam
    cout << "2. So luong khach hang thich vi cam : " << endl;

              
    return 0;
}
