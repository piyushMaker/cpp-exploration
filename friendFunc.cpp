// Online C++ compiler to run C++ program online
#include <iostream>
class demofriend2; 

class demofriend1{
    private:
        int a;
        int b;
        void printAB(){
            std::cout <<a << "df1 " << b<<std::endl;
        }
    public:
         demofriend1(int a, int b)
        {
            this->a = a;
            this->b = b;
        }
    friend void justfunc(demofriend1, demofriend2);
};

class demofriend2{
    private:
        int k;
        int l;
        void printKL(){
            std::cout <<k<< "df2 " << l<< std::endl;
        }
    public:
        demofriend2(int k, int l)
        {
            this->k = k;
            this->l = l;
        }
    
    friend void justfunc(demofriend1, demofriend2);
};

void justfunc(demofriend1 df1, demofriend2 df2)
{
    df1.printAB();
    df2.printKL();
    std::cout << "All Pvt DF1 " << df1.a << " " << df1.b <<std::endl;
    std::cout << "All Pvt DF2 " << df2.k << " " << df2.l <<std::endl;
}
int main() {
    demofriend1 obj1(1,2); 
    demofriend2 obj2(3,4);
    
    justfunc(obj1, obj2);
    // Write C++ code here
    std::cout << "Hello world!";

    return 0;
}