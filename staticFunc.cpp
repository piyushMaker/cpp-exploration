// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class staticClassDemo{
    public:
        static int statVar;
        int var;
        
        staticClassDemo(int a)
        {
            var = a;
            //statVar = b;
        }
        static void statfunc()
        {
          // cout << "var = " << var *4 << endl;
            cout << "statVar = " << statVar * 8 << endl;
        }
};

int staticClassDemo::statVar = 5;
int main() {
    
    staticClassDemo obj1(3);
    staticClassDemo::statfunc();
    
    // Write C++ code here
    std::cout << "Hello world!";

    return 0;
}