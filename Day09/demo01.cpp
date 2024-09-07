#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.insert(v1.begin() + 2, 200);

    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << endl;

    v1.erase(v1.end() - 2);
    cout << "After removing ->" << endl;
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << endl;

    vector<int>::iterator itr = v1.begin();
    while (itr != v1.end())
    {
        cout << *itr << endl;
        itr++;
    }
    return 0;
}