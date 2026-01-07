#include <iostream>
using namespace std;

int main() {

    
    // Dung tich binh xang 
    const double DUNG_TICH_XANG = 15.0;
	// Quang duong di duoc truoc khi can nap lai
    const double QUANG_DUONG_DI = 375.0;
    
    // Tinh toan so dam tren moi gallon 

    double QUANG_DUONG = QUANG_DUONG_DI / DUNG_TICH_XANG;
    
	// Hien thi ket qua ra man hinh 
    cout << "Quang duong di duoc: " << QUANG_DUONG_DI;
    cout << "Dung tich binh xang: " << DUNG_TICH_XANG;
    cout << "So dam tren moi gallon la: " << QUANG_DUONG;
    
    return 0;
}
