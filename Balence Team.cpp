#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxBalancedTeams(vector<int>& skills) {
    sort(skills.begin(), skills.end());
    int n = skills.size();
    int count = 0, i = 0;

    while (i + 4 < n) {
        if (skills[i + 4] - skills[i] <= 4) {
            count++;
            i += 5;  // move to the next group of students
        } else {
            i++;  // try from next student
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> skills(n);
    for (int i = 0; i < n; ++i) {
        cin >> skills[i];
    }

    cout << maxBalancedTeams(skills) << endl;
    return 0;
}
