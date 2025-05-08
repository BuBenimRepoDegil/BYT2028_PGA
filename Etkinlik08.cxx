#include <bits/stdc++.h>
using namespace std;

int main() {
    bool stupid = true;
    string x, y;
    int z;
    vector<tuple<string, int, string>> n;

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
        n.emplace_back(x, z, y);
    }


    sort(n.begin(), n.end());

    cout << "-------\nSınıf Listesi\n-------\n";
    for (auto& i : n) {
        cout << get<0>(i) << " - " << get<1>(i) << " " << get<2>(i) << "\n";
    }

    return 0;
}
