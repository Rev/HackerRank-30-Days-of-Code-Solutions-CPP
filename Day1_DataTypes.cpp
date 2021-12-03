#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    //Step 1:
    int myint;
    double mydouble;
    string mystring;

    //Step 2:
    cin >> myint;
    cin >> mydouble;
    cin.ignore(); //This will ignore the extra line 'cin' creates, that getline() will read. For example, a user will press the 'enter' key (or computer in this case - as HackerRank will be doing the Test cases) to submit their chosen number on the myint, and mystring inputs. Effectively, by pressing 'enter', an '\n' character gets added into the newline. Because of this, the user wouldn't be asked to input for 'mystring' either, as the '\n' would be used.
    getline(cin, mystring); //We have to use this as doing 'cin >> mystring' will just read a single word, but then stop whenever there's a space (whitespace).

    //Step 3:
    cout << (i + myint) << endl;
    cout << fixed << setprecision(1) << (d + mydouble) << endl; //'fixed' will show the decimal points of our double, but we don't want it to show all of them, so we use "setprecision(1)". This will make it show only 1dp :)
    cout << (s + mystring);

    return 0;
}
