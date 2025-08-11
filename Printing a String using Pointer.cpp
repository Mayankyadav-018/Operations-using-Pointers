/* Name - Mayank Yadav
   PRN - 24070123060
   Class - ENTC A'3'
   Date - 7/8/2025   */
#include <iostream>
#include <string>
using namespace std;

int main(){
    char str[50];
    char *ptr = str;
    char *rev;
    cout << "Enter your string:";
    cin >> str;
    
    cout << "Printing string using pointer:";
    
    while(*ptr!='\0'){
        cout << *ptr;
        ptr++;
    }
 
    return 0;
}



/* OUTPUT
Enter your string:Mayank
Printing string using pointer:Mayank
 */
