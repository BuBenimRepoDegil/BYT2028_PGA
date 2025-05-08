#include <bits/stdc++.h>
using namespace std;

int main() {
    bool stupid = true;
    string x, y;
    int z;
    vector<pair<pair<string, int>, string>> n;

    setlocale(LC_ALL, "tr_TR.UTF-8");
    cout << "Öğrenci Kaydı" << endl;

    while (stupid) {
        cout << "Sınıfınız: ";
        cin >> x;
        if (x == "boş") break;
        cout << "\nNumaranız: ";
        cin >> z;
        cout << "\nAdınız ve Soyadınız: ";
        cin.ignore();
        getline(cin, y);
        n.emplace_back(make_pair(x, z), y);
    }

    sort(n.begin(), n.end());

    cout << "-------\nSınıf Listesi\n-------\n";
    for (auto& i : n) {
        cout << i.first.first << " - " << i.first.second << " " << i.second << "\n";
    }

    return 0;
}
