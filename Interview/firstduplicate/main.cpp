#include <iostream>
#include <vector>

using namespace std;

int firstDuplicate(std::vector<int> a) {
    std::vector<int> b;
    for (int i = 0; i < a.size() + 1; ++i) {
        b.push_back(0);
    }
    for (int i = 0; i < a.size(); ++i) {
        ++b[a[i]];
        if (b[a[i]] > 1)
            return a[i];
    }
    return -1;
}

int main() {

    vector<int> v = {2, 1, 3, 5, 3, 2};
    cout << firstDuplicate(v);
    return 0;
}
