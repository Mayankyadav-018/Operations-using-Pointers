/* Name - Mayank Yadav
   PRN - 24070123060
   Class - ENTC A'3'
   Date - 5/8/2025   */
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10,20,30,40,50};
    int *ptr = arr;
    
    cout << "Traversing array:"<<endl;
    
    for(int i=0;i<5;i++){
        cout << *(ptr+i) << " ";
        
    }
    cout << endl;
    cout << "Traversing array in reverse using pointer:" << endl;
    
    for(int i=4;i>=0;i--){
        cout << *(ptr+i) << " ";
    }
    return 0;
}



/* OUTPUT
Traversing array:
10 20 30 40 50 
Traversing array in reverse using pointer:
50 40 30 20 10 
 */
