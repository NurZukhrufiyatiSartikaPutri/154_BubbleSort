#include <iostream>>
using namespace std;

int arr[20];
int n;

void inputData(){
    while (true)
    {
        cout << "Masukkan jumlah data: ";
        cin >> n;

        if (n < 15){
            break;
        }
        else
        {
            cout << "Jumlah data maksimal 15" << endl;
        }
    }


    cout << "=============" << endl;
    cout << "Masukkan Data" << endl;
    cout << "=============" << endl;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan data ke- " << i + 1 << "=";
        cin >> arr[i];
    }
}