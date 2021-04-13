#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

static const char alphanum[] =
"01234567899876543210"
"!@#$%&*(.)*&%$#@!"
"ABCDEFGHIJKLMALISWELLNOPQRSTUVWXYZ"
"abcdefghijklmaliswellnopqrstuvwxyz";
int size = sizeof(alphanum) - 1;

int main()
{
    //password length
    int length = 20;
    
    srand(time(0));
    for (int i = 0; i < length; i++)
    {
        cout << alphanum[rand() % size];
    }
    
}
