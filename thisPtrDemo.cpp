// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class thisDemo{
  private:
    int a; 
    float b;
  public:
    void set( int a, float b)
    {
        this->a = a;
        this->b = b;
        
        this->a = this->a *2;
        this->b *= 2;
        cout << this->a << " " << this->b << endl;
    }
    
};
int main() {
thisDemo tis;
tis.set(2, 4.5);

    return 0;
}