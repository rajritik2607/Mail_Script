#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s, r;
    cout << "Enter Sender Message Bit: ";
    cin >> s;
    int even_parity = 0;
    int i, l = s.length();
    for (i = 0; i < l; ++i)
    {
        if (s[i] == '1')
            even_parity++;
    }

    if (even_parity % 2 == 0)
    {
        s.insert(l, "0");
    }
    else
    {
        s.insert(l, "1");
    }

    cout << "\n";
    cout << "Required Message Bit with parity bit: " << s << endl;
    cout << "\n";

    cout << "Enter Receiver Message Bit: ";
    cin >> r;

    if ((s.compare(r) == 0)) {
        cout << "No Error Detected";
    } else {
        cout<<"Error Detected";
    }

    return 0;
}

