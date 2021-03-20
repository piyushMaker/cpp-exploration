// Online C++ compiler to run C++ program online
////Encapsulation is makeing variables accessible through the functions only.

#include <iostream>
using namespace std;
class encapdemo{
  private:
    int apvt;
    int bpvt;
  public:
    void setVal(int a, int b)
    {
        cout << "This Obj Addr1: " << this <<endl;
        this->apvt = a;
       this->bpvt = b;
    }
    void getVal(int * a, int *b)
    {
        cout << "This Obj Addr2 :" << this <<endl;
        *a = this->apvt * 2;
        *b = this->bpvt * 3;
    }
    // void setVal(int a, int b)
    // {
    //     apvt = a;
    //     bpbt = b;
    // }
    
    
};
int main() {
    // Write C++ code here
    int a = 5, b = 3;
    encapdemo encap;
    cout << "encap obj Addr" << &encap <<endl;
    encap.setVal(a, b);
    encap.getVal(&a, &b);
    
    cout << a << " b " << b <<endl;

    return 0;
}