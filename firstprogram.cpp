#include <iostream> // Header files containing the input and output stream objects.
using namespace std;  // namespace std has cout and cin objects defined.
namespace dell
{
   int pay;
}
namespace sharp
{
   int pay;
}

int main()
{
   cout << "Hello World!";
   cout << "Hello World!" << endl; //endl is for printing new line

   dell::pay = 10000;
   sharp::pay = 9000;

   cout << "Dell Pay = " << dell::pay <<endl;
   cout << "Sharp Pay = " << sharp::pay <<endl;
   /* Sample Output:
    * Dell Pay = 10000
    * Sharp Pay = 9000
    */
   /*
    * If you want to use only one namespace then declare like below
    * using namespace sharp
    * this way we no need to use sharp::pay, directly pay will work*/

   //References
   int a = 10;
   int &b = a; //references are declared with &. & is used only while declaring

   cout << "a = " << a << endl;
   cout << "&a = " << &a << endl;
   // Unlike C pointers we dont need to use * for dereferencing the reference.
   // Using "b" by default will dereference.
   // b is nothing but *b, so b will print 10
   // &b is nothing but &(*b), so &b will print address of a.
   cout << "b = " << b << endl;
   cout << "b = " << &b << endl;
   /*Sample output:
    * a = 10
    * &a = 0x7ffd9f707e64
    * b = 10
    * b = 0x7ffd9f707e64
    * */

   return 0;
}
