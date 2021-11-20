#include <iostream>
using namespace std;


char culc_grade(int m, int f, int r) {
    if (m == -1 || f == -1) {
        return 'F';
    } else if (m + f >= 80) {
        return 'A';
    } else if (m + f >= 65) {
        return 'B';
    } else if (m + f >= 50) {
        return 'C';
    } else if (m + f >= 30) {
        if (r >= 50) {
            return 'C';
        } else {
            return 'D';
        }
    } else {
        return 'F';
    }
}

int main()
{
    int m, f, r, student_num = 0, score[50] = {};
    char grade[50] = {};
    for (int i = 0; ; i++) {
        cin >> m >> f >> r;
        if (m == -1 && f == -1 && r == -1) {
            break;
        }
        grade[i] = culc_grade(m, f, r);
        student_num += 1;
    }
    
    for (int i = 0; i < student_num; i++) {
        cout << grade[i] << endl;
    }
}