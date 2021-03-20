// 
//Encapsulation is makeing variables accessible through the functions only.
#include <iostream>
using namespace std;
class encapdemo{
  private:
    int apvt;
    int bpvt;
  public:
    void setVal(int a, int b)
    {
        apvt = a;
        bpvt = b;
    }
    void getVal(int * a, int *b)
    {
        *a = apvt * 2;
        *b = bpvt * 3;
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
    encap.setVal(a, b);
    encap.getVal(&a, &b);
    
    cout << a << " b " << b <<endl;

    return 0;
}