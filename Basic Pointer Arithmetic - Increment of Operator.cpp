/* Name - Mayank Yadav
   PRN - 24070123060
   Class - ENTC A'3'
   Date - 5/8/2025   */
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *aptr = &a;
    
    cout << "Address of a before increment:" << aptr << endl;
    aptr+=4;
    cout << "Address of a after increment:" << aptr << endl;
    
    cout << endl;
    
    float b = 5.0;
    float *bptr = &b;
    
    cout <<"Address of b before increment:" << bptr << endl;
    bptr+=4;
    cout << "Address of b after increment:" << bptr << endl;
    
    cout << endl;
    
    char ch = 'c';
    char *cptr = &ch;
    
    cout <<"Address of c before increment:" << (void*)cptr << endl;
    cptr+=1;
    cout << "Address of c after increment:" << (void*)cptr << endl;
    
    cout << endl;
    
    double d = 3.14;
    double *dptr = &d;
    
    cout <<"Address of d before increment:" << dptr << endl;
    dptr+=8;
    cout << "Address of d after increment:" << dptr << endl;
    
    cout << endl;
    
    return 0;
}

    

/* OUTPUT
Address of a before increment:0x7ffca1f121bc
Address of a after increment:0x7ffca1f121cc

Address of b before increment:0x7ffca1f121b8
Address of b after increment:0x7ffca1f121c8

Address of c before increment:0x7ffca1f121b7
Address of c after increment:0x7ffca1f121b8

Address of d before increment:0x7ffca1f121a8
Address of d after increment:0x7ffca1f121e8

 */
