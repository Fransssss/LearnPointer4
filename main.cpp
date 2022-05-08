// Title: Basic Pointer
// Purpose: output element in array using pointer
// Author: Fransiskus Agapa
// Have fun - Enjoy the process - Practices make improvement

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::islower;
using std::toupper;

int main()
{
    int size = 0;
    string* ptr = nullptr;
    cout << endl << "Set size of array:";
    cin >> size;
    cout << endl;
    string word[size];
    ptr = word;
    cout << "Set " << size << " wrod/s in array(string): " << endl;

    for(size_t i = 0; i < size; ++i)
    {
        cout << "Word " << i+1 << " = ";
        cin >> word[i];
    }
    cout << endl;

    for(size_t i = 0; i < size; ++i)                     // just make the 1st word of string capital
    {
        string temp;
        temp = word[i];
        for(size_t j = 0; j < temp.length(); ++j)
        {
            if(islower(temp[0]))                      // if 1st char is lowercase then change to uppercase
            {
                temp[0] = toupper(temp[0]);
            }
        }
        word[i] = temp;
    }

    for(size_t i = 0; i < size; ++i)
    {
        cout << "[ Word at index " << i << " is \"" << *(ptr+i) << "\" with address " << ptr+1 << " ]" << endl;
    }
    return 0;
}
