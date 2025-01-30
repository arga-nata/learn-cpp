#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> array(4);
    vector<int> array = {1, 2, 3, 4};

    array.size();

    array.push_back(5);

    array.pop_back();

    array.size();

    array.empty();

    array.clear();

    array.at(1);

    array.erase(array.begin() + 1);
    array.erase(array.begin() + 1, array.end() + 3);

    // array.operator[];

    return 0;
}