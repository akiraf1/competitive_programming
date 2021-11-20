#include <iostream>
#include <vector>
#include <set>
using namespace std;


int main()
{
    int n, l, input;
    set<vector<int> > data_set;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> l;
        vector<int> row;
        for (int j = 0; j < l; j++) {
            cin >> input;
            row.push_back(input);
        }
        data_set.insert(row);
    }
    cout << data_set.size() << endl;

    return 0;
}