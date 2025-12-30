
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "==============================\n";
    cout << " PC SERIAL NUMBER CHECK SYSTEM \n";
    cout << "==============================\n";
    cout << "direction:\n";
    cout << "- write id in lowercase (ex: ets08...)\n";
    cout << "- write name formal (ex: Hana Berhe)\n";
    cout << "- type careful to avoid mismatch\n";
    cout << "==============================\n\n";

    int maxSize = 6500;
    int count = 0;

    string* name = new string[maxSize];
    string* id = new string[maxSize];
    string* sn = new string[maxSize];
  
    /* hana berhe  // verify
        else if (choice == 2) {
            int move;
            cout << "1. enter campus\n2. exit campus\nchoose: ";
            cin >> move;

            string checkSn;
            cout << "enter serial: ";
            cin >> checkSn;

            bool found = false;
            for (int i = 0; i < count; i++) {
                if (sn[i] == checkSn) {
                    cout << "record found\n";
                    cout << "name: " << name[i] << endl;
                    cout << "stored id: " << id[i] << endl;

                    string cardId;
                    cout << "enter id from card: ";
                    cin >> cardId;*/

                    //Kedir Lemecha
                    // view
        else if (choice == 3) {
            cout << "\n--- record list ---\n";
            for (int i = 0; i < count; i++) {
                cout << i + 1 << ". " << name[i] << " | " << id[i] << " | " << sn[i] << endl;
            }
        }

    } while (choice != 4);

    cout << "system closed\n";

    // free memory
    delete[] name;
    delete[] id;
    delete[] sn;

    // note
    cout << "\nNOTE:\n";
    cout << "- this program use temporary memory\n";
    cout << "- data lost when program closed\n";
    cout << "- work only on one computer (one gate)\n";
    cout << "- for many gate and save data forever\n";
    cout << "  need database and network system\n";



  return 0;
}
