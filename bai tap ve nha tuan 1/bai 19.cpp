#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Nhiet do cao trung binh ban dau 
    const double NY_NHIET_DO_GOC = 85.0;   
    const double DENVER_NHIET_DO_GOC = 88.0;   
    const double PHOENIX_NHIET_DO_GOC = 106.0; 
    
    // Ty le tang nhiet do 
    const double TY_LE_TANG = 0.02; 
    
    // He so tang 
    const double HE_SO_TANG = 1.0 + TY_LE_TANG;
    
    // Tinh toan nhiet do moi
    double ny_nhiet_do_moi = NY_NHIET_DO_GOC * HE_SO_TANG;
    double denver_nhiet_do_moi = DENVER_NHIET_DO_GOC * HE_SO_TANG;
    double phoenix_nhiet_do_moi = PHOENIX_NHIET_DO_GOC * HE_SO_TANG;
    
    // Hien thi ket qua ra man hinh
    cout << "Ty le tang: " << (TY_LE_TANG * 100)<< endl;
    cout << "1. New York City" << NY_NHIET_DO_GOC << endl;
    cout << "2. Denver  " << DENVER_NHIET_DO_GOC << endl;
    cout << "3. Phoenix  " << PHOENIX_NHIET_DO_GOC << endl;
    
    return 0;
}
