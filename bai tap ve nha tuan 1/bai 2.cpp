/*

Phòng sale The East Coast c?a m?t công ty t?o ra 58 ph?n tram c?a t?ng doanh thu. 
D?a trên t? l? ph?n tram dó, vi?t m?t chuong trình doán xem Phòng sale The East 
Coast này s? t?o ra con s? là bao nhiêu n?u công ty có doanh thu là 8.6 tri?u dô trong 
nam nay. 

*/
// yeu cau : tinh toan cua phong kinh doanh
//voi cong thuc kinh doanh = 58 phan tram loi nhuan toan cong ty
//loi nhuan cong ty la 8,6 trieu do 8600000
//in ra man hinh

//buoc 1 khai bao bien tien phong kinh doanh Tien KD
//voi kieu du lieu la so thap phan 
// buoc 2 tinh toan gia tri bang cong thuc TienKD = (8.6*56)/100
// buoc 3 in ra man hinh cout << tienKD endl

#include <iostream>
using namespace std;
int main(){
	// buoc 1
	float TienKD;
	//buoc 2
	TienKD = (8.6*58)/100;
	cout << "Doanh cua phong kinh doanh " << TienKD;
	return 0;
}
