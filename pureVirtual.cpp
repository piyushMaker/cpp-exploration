/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class pureVirtuals{
    public:
        virtual void printClassName() = 0;
        virtual void printSomething(char *) = 0;
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
    
   pureVirtuals *pV;
   abc abco;
   bbc bbco;
   pV = &abco;
   pV->printClassName();
   pV->printSomething("abcoptr");
   pV = &bbco;
   pV->printClassName();
   pV->printSomething("bbcoptr");
   
   
    return 0;
}
