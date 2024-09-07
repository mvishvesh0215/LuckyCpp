#include <iostream>
#include <map>
using namespace std;

enum days{mon=1,tues,wed,thus,fri,sat,sun};
int main()
{
    map<int, string> m1;
    m1[3] = "Anil";
    m1[1] = "Mukesh";
    m1[2] = "Ramesh";
    m1[5] = "Suresh";
    m1[4] = "Ram";
    m1[5] = "Sham"; // if key is present it will repplace its value

    map<int, string>::iterator itr = m1.begin();
    while (itr != m1.end())
    {
        cout << itr->first << " - " << itr->second << endl;
        itr++;
    }

    cout << m1[3] << endl;
    return 0;
}