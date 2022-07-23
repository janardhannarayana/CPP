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

void callbyvalue(int value);
void callbyreference(int &value);
int display(int a);
int display(float a);

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
   // Reference is nothing but a const pointer. It is used only to refer existing memory
   // While declaring references we have to assign, remember this is const pointer.
   // int &c; --> This is invalid. Reference cannot be NULL.
   // References are declared with &.
   int a = 10;
   int &b = a; //this is equivalent to int *const b = a; in C

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

   callbyvalue(a);
   cout << "a = " << a << endl;
   callbyreference(a);
   cout << "a = " << a << endl;

   display(a); //calls display(int a)
   display((float)a); //Calls display(float a)
   //C++ internally have a strict type check condition and based on that it calls the function.
   return 0;
}

//Pass by value
void callbyvalue(int value)
{
   value = 1000;
}

void callbyreference(int &value)
{
   value = 900;
}

//function overloading
// In C++ multiple functions can be defined with same name as long as
// number of arguments or/and type of arguments are not same.

int display(int a)
{
   cout << "display int" << endl;
   cout << "a = " << a <<endl;
}

int display(float a)
{
   cout << "display float" << endl;
   cout << "a = " << a << endl;
}
