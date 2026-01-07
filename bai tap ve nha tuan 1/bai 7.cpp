#include <iostream>
#include <iomanip>
using namespace std;

int main() {  
    // Muc nuoc bien dang len moi nam 
    const double MUC_DANG_MOI_NAM = 1.5;
    
    // So nam can tinh
    const int NAM_5 = 5;
    const int NAM_7 = 7;
    const int NAM_10 = 10;

    // So mm tang sau 5 nam
    double tang_sau_5_nam = MUC_DANG_MOI_NAM * NAM_5; 
    // So mm tang sau 7 nam
    double tang_sau_7_nam = MUC_DANG_MOI_NAM * NAM_7; 
    // So mm tang sau 10 nam
    double tang_sau_10_nam = MUC_DANG_MOI_NAM * NAM_10; 
    // Hien thi ket qua
    cout << "Muc tang moi nam: " << MUC_DANG_MOI_NAM;
    cout << "1. So mm tang len sau " << NAM_5;
    cout << "2. So mm tang len sau " << NAM_7;
    cout << "3. So mm tang len sau " << NAM_10;
    
    return 0;
}
