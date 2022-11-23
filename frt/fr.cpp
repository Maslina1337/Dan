#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream in_file ("input.txt");
    ofstream out_file ("output.txt");
    
    const string validSigns = "QWERTYUPASDFGHJKLZXCVBNMqwertyuipasdfghjkzxcvbnm23456789";
    
    int countOfIterations;
    in_file >> countOfIterations;
    int ans = 0;
    
    for (int i = 0; i < countOfIterations; i++) {
        int ass = 0;
        string password;
        in_file >> password;
        cout << password << endl;
        //cout << validSigns.length();
        if (password.length() == 8) {
            for (int lett = 0; lett < 8; lett++) {
                for (int j = 0; j < 56; j++) {
                    if (password[lett] == validSigns[j]) {
                        ass++;
                        break;
                    }
                }
            }
        }
        if (ass == 8) {
            ans++;
        }
    }
    out_file << ans << " " << countOfIterations - ans;
    return 0;
}
