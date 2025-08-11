/* Name - Mayank Yadav
   PRN - 24070123060
   Class - ENTC A'3'
   Date - 7/8/2025   */
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10,20,30,40,50};
    int *p1 = &arr[2];
    int *p2 = &arr[4];
    
    cout << "Difference of two elements:" << *p2 - *p1 << endl;
    
    cout << "Addition of two elements:" << *p2 + *p1;
    
    return 0;
    
}
    

/* OUTPUT
Difference of two elements:20
Addition of two elements:80
 */
