#include <bits/stdc++.h>
using namespace std;

int main() {
    bool stupid = true;
    string x, y;
    int z;
    vector<pair<int, pair<string, string>>> n;

    setlocale(LC_ALL, "tr_TR.UTF-8");
    cout << "Öğrenci Kaydı" << endl;

    while (stupid) {
        cout << "Sınıfınız:";
        cin >> x;
        if (x == "boş") break;
        cout << "\nNumaranız:";
        cin >> z;
        cout << "\nAdınız ve Soyadınız:";
        cin.ignore();
        getline(cin, y);
        n.push_back(make_pair(z, make_pair(x, y)));
    }

    cout << "-------\nSınıf Listesi\n-------\n";
    for (auto& i : n) {
        cout << i.second.first << " - " << i.first << " " << i.second.second << "\n";
    }

    return 0;
}
