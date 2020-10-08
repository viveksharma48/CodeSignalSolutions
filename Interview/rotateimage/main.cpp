#include <iostream>
#include <vector>

using namespace std;

std::vector<std::vector<int>> rotateImage(std::vector<std::vector<int>> a) {

    int temp;
    vector<int> v;

    for (int i = 0; i < (a.size() + 1) / 2; ++i) {
        v = a[i];
        a[i] = a[a.size() - i - 1];
        a[a.size() - i - 1] = v;
    }

    for (int i = 0; i < a.size(); ++i) {
        for (int j = i; j < (a[i].size() + 1 / 2); ++j) {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    return a;
}

int main() {
    vector<vector<int>> v = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    v = rotateImage(v);
    for (int i=0;i<v.size();++i){
        for (int j = 0; j <v[i].size() ; ++j) {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
