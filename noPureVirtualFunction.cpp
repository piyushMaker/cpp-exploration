// This is used to achieve the Polymorphism.

#include <iostream>

using namespace std;
class pureVirtuals{
    public:
        virtual void printClassName(){
            cout << "pureVirtual" << endl;
        }
        virtual void printSomething(char * in)
        {
            cout << in << endl;
        }
};

class abc: public pureVirtuals{
  void printClassName()
  {
      cout << "abc" << endl;
  }
 void printSomething(char * in)
 {
     cout << in <<endl;
 }
};

class bbc: public pureVirtuals{
  void printClassName()
  {
      cout << "bbc" << endl;
  }
  void printSomething(char * in)
 {
     cout << in <<endl;
 }
    
};

int main()
{
    
   pureVirtuals *pV , pvs;
   abc abco;
   bbc bbco;
   pV = &pvs;
   pV->printClassName();
   pV->printSomething("PVSptr");
   pV = &abco;
   pV->printClassName();
   pV->printSomething("abcoptr");
   pV = &bbco;
   pV->printClassName();
   pV->printSomething("bbcoptr");
   
   
    return 0;
}
